<!DOCTYPE html>

<html>
<head>
<title>Basico</title>
</head>
<body>
	
                            
<form method = "get" action = "maiorIdade.php">
    <input name = "age" type = "number" placeholder = "Digite a sua idade"><br/><br/>
    <input type = "Submit" value = "Verificar Maioridade">
</form><br/><br/>

<?php
$idade = isset( $_GET[ "age" ] ) ? $_GET[ "age" ] : 0;
if( $idade == 0 )
    print 'Digite uma idade'; 
else if( $idade >= 18 )
    print 'De maior!';
else
    print 'De menor!';
?>


</body>     
</html>
