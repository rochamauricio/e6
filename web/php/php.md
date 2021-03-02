# links

	https://www.w3schools.com/php/default.asp  	// guia muito bom
	http://php.net/manual/pt_BR/  				// documentação do php
	http://www.writephponline.com/				// php online editor
	http://br.phptherightway.com/				// guia muito bom 

# utilizando o php em qualquer diretório
~~~shell
	#navegue ate o diretorio e execute o comando:
	php -S localhost:8888
~~~


# Introducao

~~~php 
// incluindo arquivos php externos:
include_once 'biblioteca.php'; 	#include, require, include_once, require_once
bomDia(); 						#função declarada em biblioteca.php 


//comentário
/*comentário*/ 
#comentário


// comandos de saída
echo  "Nome = " . $nome . "<br>";	//concatena strings com ponto
echo  "Nome =  $nome <br>";			//concatena strings com aspas duplas
print("Nome = " . $nome . "<br>");  // semelhante ao echo
printf("Numero = %.3f", $num);		// imprime 2 casas decimais arredonda
echo number_format( $valor, 2 );	// imprime 2 casas decimais
print_r($vetor);					// printa vetor de forma explanativa (mais legível)
var_dump($vetor);					// printa vetor de forma explanativa


// variaveis - declaracao ocorre por coercao
$nome = "Maurício"; 	// string com '' ou ""
$vai_chover = TRUE; 	// FALSE = 0, 0.0, NULL, array vazio, objeto sem elementos
$b = &$a; 				// $b aponta para $a
$vai_chover = TRUE;		// FALSE = 0, 0.0, NULL, etc
$num = 1234; 			// decimal
$num = 0123; 			// octal
$num = 0x1A; 			// hexadecimal
$num = 4e23; 			// notação científica


// variaveis variantes
$variavel = 'nome';
$$variavel = 'maria';
echo $nome;	// printa maria


// tipo array
$nomes = array("Mauricio", "Maria", "Jose");
echo $nomes[1];


// tipo objeto
class Pessoa {
	public $nome;
	function dizerOla() {
		echo "Ola, me chamo {$this->nome}";
	}
}
$objeto = new Pessoa;
$objeto->nome = "Mauricio";
$objeto->dizerOla();


// tipo recurso (resource)
	# variavel que mantem referencia a recurso externo - banco de dados
	

// constantes
define("PI", 3.1413);	// constante - so aceita tipos escalares (bool, int, float e string)
echo "PI = " .  PI ;	// usando constante


// operadores de atribuição
	$a = 10;	$a += 10;	$a -= 10;	a *= 10;	$a /= 10; 
 	
 			
// operadores de incremento e decremento
	++$a;	--$a;	$a++;	$a--;


// operadores aritméticos    			
	+	-   *   /   %


// operadores relacionais    			
	==   ===   != 	<>   >   <   >=   <= 


// operadores lógicos  				
	and   or   xor   !$a   &&   ||  // or e and tem precedencia maior que && e ||


// caracteres de escape - usados dentro de ""
	\n    \r    \t    \\    \”    \& 	\$


// estrutura de controle IF
if ( $chove )
    echo "Chove";
else
    echo "Não chove";	
 

// operador ternario
$resultado = ($valor_venda > 100)  ? 'muito caro' : 'pode comprar';
    
    
// estrutura de controle SWITCH
switch( $opcao )
{
	case "a": 
		echo "opcao a selecionada"; 
		break;
	case "b": 
		echo "opcao b selecionada"; 
		break;
	default: 
		echo "opcao invalida"; 
		break;  
}   


// comando de repetição WHILE
$num = 0;
while( $num <= 10 )
{
    echo "$num <br/>";
    $num = $num + 1;
}


// comando de repetição FOR
for( $num = 0; $num <= 10; $num++ )
    echo "$num ";
 

// comando de repetição FOREACH
$frutas = array( "morango", "banana", "abacate" );
foreach( $frutas as $valor )
    echo "$valor <br>";
    
    
// comando CONTINUE
	// Quando executada em um bloco FOR/WHILE ignora as instruções restantes e segue para a próxima iteração. 


// comando BREAK
	// Aborta a execução de um bloco de comandos. Pode usar: break <quantidade de níveis>


~~~

# Funções

~~~php
// manipulação de funções
function calculo_imc( $peso, $altura )
{
    return $peso / ( $altura * $altura );
}


// utilizando variaveis globais dentro de funcao
$total = 1;
function incrementa($incremento) {
	global $total; // usa a variavel global $total
	$total += $incremento;
}
incrementa(1);
echo $total;


// utilizando variáveis estáticas dentro de funcao
function exemplo () 
{
	static $total; // variável static: mantêm o seu valor desde a última exec.
	$total += 1;
	echo $total."<br>";    
}
exemplo(); // printa 1
exemplo(); // printa 2	


// parâmetros passados por referência
function exemplo( &$variavel, $valor )
{
    $variavel += $valor;
}
$a = 0;
exemplo( $a, 10 ); // $a é modificada por referência
echo $a; 


// função com valor default para um argumento 
function exemplo( $variavel = 10 )
{
  echo $variavel; 
}
exemplo();		// printa 10
exemplo( 50 ); 	//printa 50


// função com número de argumentos variável
function exemplo()
{
    $argumentos = func_get_args();
    $quantidade = func_num_args();
    
    foreach( $argumentos as $valor )
        echo "Ola $valor <br/>";
}
exemplo( "Mauricio", "Maria", "Jose" );


// recursão
function fatorial ( $numero )
{
    if( $numero == 1 )
        return $numero;
    else
        return $numero * fatorial($numero - 1);
}	
~~~

# Arquivos
~~~php
// lendo o arquivo usando fgets
$arq = fopen("arquivo.txt", "r"); // "r", "w", "a", "wb"
while(!feof($arq) )
{
    $buffer = fgets( $arq, 4096 );  // fgets retorna a string de uma linha do arquivo
    echo $buffer."<br/>";
}
fclose($arq);  // Retorna TRUE se sucesso


// escrevendo no arquivo utilizando fwrite
$arq = fopen( "texto.txt", "a" );
fwrite( $arq, "\r\nAcrescenta nova linha" );	//retorna nº bytes gravados ou false
fclose( $fp );  // Retorna TRUE se sucesso


// escrevendo no arquivo utilizando file_put_contents
file_put_contents("teste1.txt", "texto \ntexto \ntexto");  // grava string em arquivo usa modo de abertura: w 


// lendo um arquivo usando file_get_contents -  lê arquivo inteiro
echo file_get_contents( "teste1.txt");


// lendo um arquivo usando file - retorna array com linhas arquivo
$arquivo = file( "teste1.txt" );
foreach( $arquivo as $valor)
    echo $valor."<br/>"; 


// copiando um arquivo usando copy
$arqOrigem = "teste1.txt";
$arqDestino = "copiaTeste1.txt";
copy( $arqOrigem, $arqDestino ); // retorna TRUE se sucesso

// renomeando arquivos ou diretórios usando rename
$origem = "teste1.txt";
$destino = "teste.txt";
rename( $origem, $destino ); // Retorna TRUE se sucess


// apagando um arquivo usando unlink
$arq = "arquivoFeio.txt";
unlink($arq); //Retorna TRUE se sucess


// verificando a existencia de um arquivo/dir com file_exists
$arq = "teste.txt";
if( file_exists( $arq ) )
    echo "O arquivo $arq existe!";

// lendo o conteudo de um diretorio com readdir
$dir = getcwd(); // armazena diretório corrente em $dir
if( is_dir($dir) ) // Verifica se estamos em um diretório
{
    $ident = opendir($dir);
    while( $arq = readdir( $ident ) )
    {
        echo $arq."<br/>";
    }
    closedir($ident);
}

// outras funcoes para arquivos
echo getcwd(); 				// imprime diretório em que estamos
is_file($localizArquivo); 	// verifica se localização corresponde a um arquivo ou dir
mkdir($nomeDir, 0777); 		//0777 permissão acesso. Retorna TRUE se sucess
chdir("pasta1/img" ); 		//muda o diretório corrente
rmdir("pasta1"); 			//remove diretório
opendir($diretorio); 		//Abre diretório
closedir($diretorio); 		//Fecha diretório
readdir(opendir('/'));		//le conteudo do diretorio usando o identificador criado por opendir()

~~~

# Strings
~~~php
// declaracao
$var1 = "biscoitinho"; 	// string entre aspas duplas são avaliadas pelo php
$var2 = 'beterraba';  	// string entre aspas simples não são avaliadas pelo php!
print "$variavel<br/>";	// printa o conteudo da variavel
print '$variavel<br/>';	// printa $variavel
print "Ola: " . $vnome; // concatenação com ponto ou com tudo entre ""

// string varias linhas
$texto = <<<CHAVE
	String <br>
	varias <br>
	linhas <br>
CHAVE;

// funcoes para manipular strings
print strlen($uma_string); 		// tamanho string
print strtoupper($uma_string);	// converte em maiusculo
print strtolower($uma_string);	// converte em minusculo
print substr($uma_str, 0, 5);	// 0 = inicio, 5 = nº caracteres (opcional, pode ser negativo)

print strpos($uma_str, "aaa");	// posição de "aaa" em $uma_str. aceita argumento offset
print stripos($uma_str, "aaa");	// posição de "aaa" em $uma_str. aceita argumento offset - ignorando maiusc/minusc

print str_replace("aaa", "bbb", $uma_str);	// substitui aaa por bbb em $uma_str
print str_ireplace("aaa", "bbb", $uma_str);	// substitui aaa por bbb em $uma_str ignorando maiusculo/minusculo

$vetor = str_word_count( $uma_str, 1) ; // armazena string em vetor
$vetor = explode(" ", $uma_str); 		// armazena palavras de $frase em $vetor
$vetor = str_split($uma_str);			// armazena letras da string no vetor
print implode(" ", $vetor);				// transforma vetor em string

print ucfirst($uma_str); 				// upper case na primeira letra
print ucwords($uma_str);				// primeira letra de cada palavra em maiúscula
print substr_count($uma_str, "aaa"); 	// conta numero de ocorrencias de "aaa" na string
print str_word_count($uma_str, 0); 		// conta palavras da string
print str_repeat($uma_str, 5);						// retorna a string repetida 5 vezes
print str_pad($uma_str, $tam, "#", STR_PAD_LEFT); 	//$tam = tamanho string retornada, "#" = caractere de preenchimento, [STR_PAD_LEFT, STR_PAD_BOTH, STR_PAD_RIGHT] opcionais
print wordwrap($uma_str, 10, "<br/>\n", false ); 	//quebra linha a cada 10 caract, true = quebra palavra no meio, \n = quebra no fonte tambem

print chr(61);	// printa o caractere ASCII 61
print ord('a');	// printa o numero do caractere ASCII 'a'

print strrev($uma_str); //inverte string

~~~


# Arrays
~~~php
// nao precisa ter todos elementos do mesmo tipo

// criando um array
$vetor = array('Mauricio', 'Maria', 'Joana');					// jeito 1
$vetor = array(0 => 'Mauricio', 1 => 'Maria', 2 => 'Joana');	// jeito 2


// criando um array - outra forma
$vetor[] = 'maria';	// é o mesmo que array_push()
$vetor[] = 'jose';
$vetor[] = 'antonia';
print_r($vetor);


// array associativo - indice pode ser string ou int
$vetor = array('nome' => 'Mauricio', 'idade' => 28, 'peso' => 81.2 );


// array associativo - outra forma
$vetor['nome'] = 'Mauricio';
$vetor['idade'] = 28;
$vetor['peso'] = 81.2;


// arrays multidimensionais - inicialização - jeito 1
$pessoas = array(
					'pessoa1' => array('nome' => 'mauricio', 'idade' => 28),
					'pessoa2' => array('nome' => 'maria', 'idade' => 61),
					'pessoa3' => array('nome' => 'joana', 'idade' => 84) 
				);
print $pessoas['pessoa1']['nome'];	


// arrays multidimensionais - inicialização - jeito 2
$pessoas['pessoa1']['nome']	= 'mauricio';
$pessoas['pessoa1']['idade'] = 28;
$pessoas['pessoa2']['nome'] = 'maria';
$pessoas['pessoa2']['idade'] = 61;


// percorrendo array multidimensional
foreach($pessoas as $p => $atributos) {
	print "pessoa: $p <br>";
	foreach($atributos as $a => $valor )
		print "$a: $valor <br>";
}


// imprimindo o conteudo de um array
var_dump($vetor); 
print_r( $vetor ); 
var_export($vetor);


// funcoes para manipular arrays
print count($vetor); 				// quantidade de elementos do array
array_push($vetor, 10);				// add 10 ao fim de $vetor
array_pop($vetor);					// remove ultimo elemento
array_shift($vetor);				// remove primeiro elemento
array_unshift($vetor, 10);			// add 10 ao inicio de #vetor
$vetor = array_pad($vetor, 10, 1);	// preenche 10 posicoes vazias com 1
$vetor = array_reverse($vetor);		// inverte o array
$vetor = array_merge($vet1, $vet2);	// mescla 2 ou mais arrays (aceita n parametros)
$indices = array_keys($vetor);		// retorna os indices de um array - aceita segundo parametro
$ind = array_keys($vetor, 'aaa'); 	// retorna o indice do elemento 'aaa'
$valores = array_values($vetor);	// retorna um array contendo os valores de outro array
$vetor = array_slice($vetor, 2, 3);	// extrai porção do array: 3 elementos a partir do indice 2
print in_array(10, $vetor); 		// retorna true se  10 está no array $vetor
sort($vetor);						// ordena array sem manter a associacao de indices
rsort($vetor); 						// ordena array em ordem reversa sem manter a associacao de indices
asort($vetor);						// ordena array mantendo a associacao de indices
arsort($vetor);						// ordena array em ordem reversa mantendo a associacao de indices
ksort($vetor);						// ordena vetor pelos indices
krsort($vetor);						// ordena vetor na ordem reversa e pelos indices
$vetor = explode('/', $uma_string);	// converte string em vetor usando o separador '/'
$uma_string = implode('*', $vetor);	// converte vetor em string usando o separador '*'
$vetor = range(0, 1, 0.1); 			// preenche o vetor com 0, 0.1, 0.2, ..., 1
unset($vetor[2]); 					// desaloca a memoria do vetor de indice 2

~~~

# funcoes de data
~~~php
// obtendo a data num determinado formato - mais em: http://php.net/manual/pt_BR/function.date.php
gedgdate_default_timezone_set('America/Sao_Paulo'); 
$date = date("l - d / m / Y");  
$hour = date("H : i : s ");
echo "Data: $date <br/>";
echo "Hora: $hour"; 

~~~


# Outras funcoes prontas

~~~php
// POST
$artista = $_POST['artista'];

if(isset($artista)) { ... } // verifica se $artista foi preenchido corretamente??? pg 168 livro PHP Pablo Dall'Oglio

~~~