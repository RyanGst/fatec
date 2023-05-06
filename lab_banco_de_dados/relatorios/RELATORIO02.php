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
            $sql = "select count(empresaid) as qtdempresas, concat(txprenomes, ' ', txsobrenome) from historicoprofissional join funcionarios f on historicoprofissional.funcionarioid = f.idfuncionario group by funcionarioid, txprenomes, txsobrenome order by qtdempresas desc limit 5;";
            print("<table class='table'>");
            print("<thead>");
            print("<tr>
        <th>Quantidade de empresas</th>
        <th>Nome Funcionário</th>
      </tr>");
            print("</thead>");
            print("<tbody>");

            foreach ($pdo->query($sql) as $row) {
                print("<tr>");
                print("<td>$row[qtdempresas]</td>");
                print("<td>$row[concat]</td>");
                print("</tr>");
            }
            print("</tbody>");
        } catch (\PDOException $e) {
            echo $e->getMessage();
        }

        ?>
    </div>

</body>