<?php
    function isAcceptedUsername ($username){
        return preg_match('/^[@]{1}[a-zA-Z0-9]{1,11}$/i',$username);
    }
    if (isAcceptedUsername ("@koders")) {
        echo "username TRUE";
    } else (isAcceptedUsername ("@programmerhandal"{
        echo "username FALSE";
    }

    function isAcceptedPassword ($password){
        return preg_match('/^{1}[0-9]{5,5}$/i' ,$password);
    }
    if (isAcceptedPassword ("212223") {
        echo "password TRUE";
    } else (isAcceptedPassword ("2!2a3B")) { 
        echo "password FALSE";
    }
?>