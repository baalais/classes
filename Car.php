<?php

Class Car{
    public $brand;

    function __construct($silvias) {
        $this->brand = $silvias;
        echo $this->brand . "Is alive ";
    }

    function __destruct(){
        echo $this->brand . "Is dead ";
    }

    static function makeNoise(){
        echo "Beep, Beep! ";
    }
}

?>