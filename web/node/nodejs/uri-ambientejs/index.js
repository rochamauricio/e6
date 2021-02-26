var input = require('fs').readFileSync( './dev/stdin/file.txt', 'utf8' ); 
var lines = input.split('\n');

var a = parseFloat ( lines.shift() );
var b = parseFloat ( lines.shift() );
var c = parseFloat ( lines.shift() );
var media = ( 2 * a + 3 * b + 5 * c ) / 10;

console.log( "MEDIA = " + media.toFixed( 1 ) );















