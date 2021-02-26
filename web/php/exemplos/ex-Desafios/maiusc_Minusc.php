<html lang="pt-br">
<head>
<title>Maiusculo / Minusculo</title>

<style>
textarea {font-size: 30}
</style>

<?php

$txt1=isset($_GET["texto1"]) ? $_GET["texto1"] : "";
$i=0;
$tam=strlen($txt1);

while($i< $tam)
{
    if($i % 2 == 0)
        $txt2[$i]=strtoupper($txt1[$i]);
    else
        $txt2[$i]=strtolower($txt1[$i]);
    $i++;
}

?>
</head>
<body>

<form method="get" action="maiusc_Minusc.php">
    Digite um texto: <br/>
    <textarea rows="7" cols="60" name="texto1"></textarea> <br/>
    <input type="submit" value="Converter"/> <br/><br/>
    Texto convertido: <br/>
    <textarea rows="7" cols="60" name="texto2"><?php $i=0; while($i<$tam){ echo "$txt2[$i]"; $i++;} ?></textarea> <br/>           
</form>

</body>
</html>