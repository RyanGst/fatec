<?php

require 'infra/Connection.php';
require 'components/Header.php';

use Infra\Connection as Connection;

try {
    Connection::get()->connect();
    echo 'A connection to the PostgreSQL database sever has been established successfully.';
} catch (\PDOException $e) {
    echo $e->getMessage();
}
?>

<body>
    <?php
    require 'infra/Libs.php'
    ?>
</body>