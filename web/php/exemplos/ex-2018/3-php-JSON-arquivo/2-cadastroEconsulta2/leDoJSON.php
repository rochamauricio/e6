<?php
 
// Atribui o conte�do do arquivo para vari�vel $arquivo
$arquivo = file_get_contents('contatos.json');
 
// Decodifica o formato JSON e retorna um Objeto
$json = json_decode($arquivo);
 
// Loop para percorrer o Objeto
foreach($json->Contatos as $registro):
    //if( $registro->codigo == "001" || $registro->codigo == "003")
   // {
        echo 'C�digo: ' . $registro->codigo . ' - Nome: ' . $registro->nome . '<br><br>';
        echo 'Telefone Resid�ncia: ' . $registro->telefones->residencial . ' - Telefone Celular: ' . $registro->telefones->celular . '<br><br>';
    //}
endforeach;

?>