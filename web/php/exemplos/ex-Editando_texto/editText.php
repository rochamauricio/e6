<!DOCTYPE html>

<html>
<head>
<title>Basico</title>

<?php

$text = isset( $_GET[ "text_editable" ] ) ? $_GET[ "text_editable" ] : "Texto nao informado"; 
$text_size = $_GET[ "text_size" ];
$text_color = $_GET[ "text_color" ]; 

echo "<span id = 'texto1'>$text</span><br/><br/>"; 

?>

<style type = "text/css">
form {
  margin-top: 20px;
  margin-left: 20px;   
}

#texto1 {
  font-size: <?php echo $text_size; ?>;
  color: <?php echo $text_color; ?>;
}
</style>

</head>


<body>
<input type="button" value="Voltar com javascript" onClick="javascript:history.go(-1)">
                            
</body>     
</html>
