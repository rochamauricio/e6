<?php
 
// Atribui o conte�do do arquivo para vari�vel $arquivo
$arquivo = file_get_contents('cadastro.json');
 
// Decodifica o formato JSON e retorna um Objeto
$json = json_decode($arquivo);
 
// Loop para percorrer o Objeto
foreach($json as $registro):
    echo 'C�digo: ' . $registro->codigo . ' - Nome: ' . $registro->nome . ' - Telefone: ' . $registro->telefone . '<br>';
endforeach;

?>