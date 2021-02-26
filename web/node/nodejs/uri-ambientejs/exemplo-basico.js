var input = require('fs').readFileSync( './dev/stdin/file.txt', 'utf8' ); // estamos apenas lendo um arquivo, o file.txt onde você colocará os inputs de testes do uri
var lines = input.split('\n');

/*
Para executar seu código basta abri seu cmd e digitar, em sequência, os comandos:

    cd uri-ambientejs
    node index.js
    
    Depois de checado outputs agora temos de enviar para submissão, para que seu código de certo copie a primeira linha 
    do exemplo que o uri oferece e cole em seu programa, substituindo apenas a primeira linha, isso só na hora de enviar 
    para submissão. 


*/


//exercício 2 URI
var pi = 3.14159;
var r = lines.shift();
var area = pi * ( r * r );

console.log( "A="+area.toFixed( 4 ) );

