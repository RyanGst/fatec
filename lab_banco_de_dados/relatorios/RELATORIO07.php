<?php

require 'components/Header.php';
require 'infra/Connection.php';

use Infra\Connection as Connection;

require 'infra/Libs.php'


?>

<body>
    <div class="container container-fluid">
        <?php
        try {
            $pdo = Connection::get()->connect();
            $sql = "select count(veiculoid), txnomeseguradora, txnomelogradouro from seguros
    right join seguradoras s on seguros.seguradoraid = s.idseguradora
    inner join logradouros l on l.idlogradouro=s.logradouroid group by idseguradora, l.txnomelogradouro;";

            print("<table class='table'>");
            print("<thead>");
            print("<tr>
        <th>Quantidade de carros</th>
        <th>Seguradora</th>
        <th>Endereço</th>
      </tr>");
            print("</thead>");
            print("<tbody>");

            foreach ($pdo->query($sql) as $row) {
                print("<tr>");
                print("<td>$row[count]</td>");
                print("<td>$row[txnomeseguradora]</td>");
                print("<td>$row[txnomelogradouro]</td>");
                print("</tr>");
            }
            print("</tbody>");
        } catch (\PDOException $e) {
            echo $e->getMessage();
        }

        ?>
    </div>

</body>