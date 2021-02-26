//Anotações - Geral

"Criadores: Ken Thompson & Dennis Ritchie"
"C é uma linguagem estruturada e não se pode criar uma função dentro de outra."
"Não utilizar variáveis globais em programação estruturada."
"Variáveis globais restringem a modularidade do programa. Não usar!"
"Cada módulo do programa deve realizar UMA ÚNICA TAREFA."
"Decomposição do algoritmo total em módulos = dividir para conquistar."

"'A arte de programar consiste na arte de organizar e dominar a complexidade dos sistemas.' Dijkstra, 1972"


//Modelos e Paradigmas de Linguagens

"Modelo imperativo: Programa é uma sequências de comandos que efetuam transformações sobre dados."
	"Paradigmas:" 
		"Procedural(ou Imperativo)"
			"Programação Estruturada"
		"orientado a objetos"

"Modelo Declarativo: Linguagens não possuem o conceito de sequências de comandos."
 	"Paradigmas: Funcional, lógico"



_____________________________________GERAL__________________________________________________________________

//Compilar no Linux - jeito 1:

gcc nomeArq.c  	//vai gerar a saída no padrao a.out 
./a.out			//executar no prompt de comando


//Compilar no Linux - jeito 2:

gcc hello.c -o hello  	//gera a saída no arquivo hello
./hello 				//executar no prompt de comando


//Tipos de dados, depende da arquitetura, para saber: sizeof( tipo )

char 	1 byte
int 	4 bytes	
float 	4 bytes
double 	8 bytes
void
x = sizeof( int ); //retorna numero de bytes da variavel x. Vale 4 na minha arquitetura atual


//Modificadores: 

long, short


//Formatos scanf:

%d, %f, %ld, %lf, %e, %c, %s, %x, %p
%4d 	// inteiro com 4 espaços
%03d	// se variável == 2 printa 002
%.2f 	// número real com 2 casas após a vírgula
%c		// utilizar um espaço antes para limpar o buffer, ex.: scanf( " %c", &caractere ); É o mesmo que fflush(stdin).
%x		// escreve endereço do ponteiro em hexadecimal
%p 		// para imprimir ponteiro (endereço apontado)
%ld		// long int
%lf		// long float

//Caracteres especiais:

\n // quebra linha		
\0 // fim string, caractere nulo


//Operadores Aritméticos:
 
+	-	*	/	++	--
%	// resto da divisão
^	// operação xor bit a bit
/	// inteiro / inteiro = divisão inteira


//Operadores lógicos / booleanos:

&&	||	!


//Operadores relacionais:

==	!=	<	>	<=	>=


//Valores booleanos em C:

"0 = falso, qualquerOutroValor = verdadeiro"


//Declaração de variáveis:

"Tipos: int, char, float, double (e modificadores long, short para todas)"
int x = 2, y = 4, z = 4;

//Constantes criadas pelo usuário:
#define TAMANHO 10 	// sem ; e maiúcula sempre. Inserimos após os #includes das bibliotecas


//Constantes pré existentes:

NULL	// constante nula (para ponteiros)
EOF		// marcador de fim de arquivo


//Comando de seleção condicional dupla:  if… else:

if( x >= 0 )  
   //comando, ou { comandos }
else	
   //comando, ou { comandos }


//Comando de seleção condicional múltipla: switch: Só com variável do tipo int, long, char

switch ( variavel ) {  
   case 1: /*comandos*/ break;
   case 2: /*comandos*/ break;
   default: /*comandos*/   break; 
}


//Comando de repetição para um número indeterminado de repetição: while:

while( num >= 0 ) {  
   //comandos
   num--;	
}


//Comando de repetição para um número indeterminado de repetições: do.. while:

do { 
   //comandos
} while( num >= 0 ); 



//Comando de repetição para um número determinado de repetições: for: A variável de controle do FOR só deve ser alterada pela operação do cabeçalho. Nunca usar break para interromper o laço

for( i = 0; i <= num; i++) {
   //comandos ou {comandos}
}


/* Programa que trabalha com números aleatórios */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int faceDado;
    srand( time( NULL ) ); 		// na biblioteca time.h a cada nova exec o numero aleatorio será diferente.
    faceDado = rand() % 6 + 1; 	// função rand na biblioteca stdlib.h
    printf( "Face do dado = %d\n\n", faceDado ); 
    return 0;
}




/* Programa que utiliza argc (quantidade de argumentos) e argv (vetor de argumentos) */
// chamar o programa: ./nomeBinario abacate tomate
// argumento 0 == ./nomeBinario, argumento 1 == abacate, argumento 2 == tomate
// argv é um ponteiro pra ponteiro! também podemos usar **argv
#include <stdio.h>
int main( int argc, char *argv[ ] ) {
	int i;
	for( i = 0; i < argc; i++ )
		printf( "Parametro %d = %s\n", i, argv[ i ] );	
	return 0;
}


_____________________________________ARRANJOS_______________________________________________________________


// Arranjos de uma dimensão: Vetores

"Primeira posição do arranjo é 0".

int idades[ 5 ];				// sem inicialização: contém lixo (valor inesperado)
idades[ 0 ] = 27;				// inicializando apenas o primeiro elemento por atribuição
int idades[ 3 ] = { 1, 2, 3 };	// declarando e inicializando ao mesmo tempo
int x[ 50 ] = { 0 }; 			// zera elementos de índice 0 a 49
int x[ 5 ] = { 10, 20, 30 };  	// posições não inicializadas são preenchidas com zero



// Vetores de caracteres: Strings

"Strings em C são vetores de caracteres."
"Cada caractere é um char."
"O último caractere deve ser obrigatóriamente o delimitador de fim de String: \0"
"O caractere \0 é o primeiro da tabela ASCII."
"As strings são representadas entre aspas duplas e os caracteres entre apóstrofos. "A" e 'A' NÃO são a mesma coisa!! "A" é um vetor de 2 caracteres: 'A' e '\0' e 'A' é um único caractere."

char nome[ 15 ] = "Mauricio";			// inicializando string
char nome[ 15 ] = { 'A', 'n', 'a' };	// inicializando string.
char nome[ ] = { 'A', 'n', 'a' };		// automaticamente nome é criado com tamanho 4 (3 letras + \0)
char nome[ 15 ]; scanf( "%s", nome );	// leitura de String com scanf é sem o '&'. Não pega espaços!
char nomes[ 2 ][ 50 ] = { "Mauricio", "Joana" } ;	// printf( "%s\n", nomes[ 1 ] );



// Strings - Funções de manipulação

char caractere = getchar();		// lê um caractere do teclado
gets( nome );					// lê uma String declarada, por ex. como char nome[ 15 ];
puts( "muito legal\n" );		// escreve na tela
strcpy( nome, "Mauricio" );		// da biblio <string.h> copia Maurício para a string nome 
strcpy( strDest, strOrigem );	// da biblio <string.h> copia a string para strDest
strcat( nome, " Barbosa" );		// da biblio <string.h> concatena barbosa no fim de nome
int tam = strlen( nome );		// da biblio <string.h> obtém o tamanho da string
strcmp( s1, s2 );				// Compara as strings s1 e s2. Se s1 e s2 forem iguais, retorna zero. Se s1 for maior que s2, retorna um valor maior que zero. Se s1 for menor que s2, retorna um valor menor que zero.
strstr( frase, palavra )		// retorna "true" se string "palavra" estiver contida na string "frase"

// exemplo de strcmp
if( !strcmp( nome, "Mauricio" ) )
	printf( "Esse é o cara\n" );
else 
	puts( "Esse não é o cara\n" );


// exemplo de strtok
#include <stdio.h>
#include <string.h>
int main()
{   
	char texto[] = { "Frase1#Frase2#Frase3#" };
    printf( "%s\n", strtok( texto, "#" ) ); 	//só primeiro tem nome string
    printf( "%s\n", strtok( NULL, "#" ) );
    printf( "%s\n", strtok( NULL, "#" ) );

    return 0;
}






// Arranjos de várias dimensões

"Os elementos da diagonal principal da matriz quadrada são os que temos a linha i igual a coluna j."
"Uma matriz esparsa é uma matriz que tem aproximadamente 2/3 de seus elementos iguais a zero."

float notas[ 2 ][ 3 ];								// matriz de 2 linhas e 3 colunas
float notas[ 2 ][ 3 ][ 5 ];							// matriz com 3 dimensões
char nomes[ 2 ][ 20 ] = { "Mauricio", "Maria" };	// inicializando o arranjo. Uso: printf( "nome = %s\n", nomes[0] );  -> imprime Maurício
char y[ 2 ][ 2 ] = { { 'a', 'h' } , { 'e', 'h'} };	// outra forma de inicializar o arranjo de caracteres (isso não é uma string - não tem o \0)
int x[ 2 ][ 3 ] = { { 1, 2, 3 } , { 4, 5, 6 } };	// inicializando o arranjo

// Exemplo percorrendo o arranjo x
for( i = 0; i < 2; i++ )
	for( j = 0; j < 3; j++ )
		printf( "%d ", x[i][j] );





_____________________________________FUNÇÕES________________________________________________________________


"Uma função deve executar apenas uma tarefa específica." 
"Protótipo de funções antes da main ou no arquivo .h" 
"Implementação da função após a main." 
"Parâmetros formais: os que aparecem entre () na declaração/implementação da função."
"Parâmetros reais (argumentos): os que aparecem entre () quando chamamos a função."
"Parâmetros reais (ou argumentos) devem concordar em número e tipo com os formais, na ordem definida."
"Variáveis declaradas dentro do subprograma são chamadas variáveis locais."


// Funções sem retorno void: (com ou sem parâmetros) Se inserirmos um 'return;' ele apenas encerra a função void.
void uppercase( char c ) { // obs.: parâmetro passado por valor. 
   printf( "%c", c - 32 );
} 


// Funções com retorno (tipada): (com ou sem parâmetros)
int soma( int a, int b ) {
   int result; 
   result = a + b; 
   return result;  // return; Provoca a saída imediata da função.
}
 

// Passagem de parâmetros por referência, exemplo de Ponteiros: Passa o endereço do parâmetro (variável).
void troca( int *x, int *y ) { // chamar a função: troca( &a, &b );
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;	
}  



_____________________________________PONTEIROS______________________________________________________________


"Ponteiros são variáveis que apontam para uma posição na memória."
"Um ponteiro contém o endereço da posição de memória."
"O asterisco indica que a variável armazena um endereço de memória, cujo conteúdo é do tipo especificado."
"'*' é um operador unário que devolve o valor da variável localizada no endereço que o segue."
"'&' é um operador unário que devolve o endereço de memória de seu operando."
"Se uma variável 'a' armazena o endereço de uma variável 'b', dizemos que 'a' aponta para 'b'."
"O endereço de uma variável é sempre o MENOR dos endereços de seus bytes, isto é, o endereço inicial."

"Alguns exemplos:"
"**&p é o mesmo que *p"

"Aritmética de Ponteiros:"
"Ao serem incrementados, os ponteiros passam a apontar para a posição de memória do próximo elemento do seu tipo base."
"O quanto o valor do ponteiro irá aumentar ou diminuir depende do número de bytes que o tipo base ocupa."
"Quando um ponteiro é declarado o compilador aloca um ponteiro para apontar para a memória, sem que espaço seja reservado."

"Ponteiros e Vetores:" 
"Há uma estreita relação entre ponteiros e vetores."
"Vetores são SEMPRE passados por referência, pois são ponteiros que apontam para o primeiro elemento do vetor."
"O nome de um vetor é um ponteiro que aponta para a primeira posição do vetor."

" *v é a mesma coisa que v[ 0 ]"
" v é a mesma coisa que &v[0]" // somente se v é um ponteiro
" *( v + 1 ) é a mesma coisa que v[ 1 ]"
" *( v + i ) é a mesma coisa que v[ i ]"
" v + i é a mesma coisa que &v[i]"
" **v é a mesma coisa que v[][]"
" *( *(v + i) + j ) é a mesma coisa que v[ i ][ j ]"



// exemplo
int *a, *b, *c;			// declaraçã de ponteiro
c = NULL; 				// faz com que ponteiro não aponte para lixo.
a = &b;    				// 'a' aponta para 'b' ('a' recebe o endereço de 'b')
c = a;					// 'c' recebe 'a' e também passa a apontar para 'b'
a = *b; 				// 'a' recebe o conteúdo apontado por 'b' (a recebe o valor que está no endereço b)
printf( "%p\n", a );	// imprime o endereço contido no ponteiro 'a'

// exemplo
int *a, b;
b = 10;
a = &b;
*a = 20;
printf("%d\n", b );	// imprime 20

//exemplo aritmética de ponteiros
int *a, b;
a = &b;
printf( "%p\n", a );	// imprime o endereço de 'a'
a++;					// aritmética de ponteiros, incrementa 'a' em 4 (tamanho do int na minha arquitetura)
printf( "%p\n", a );	// imprime endereço de 'a' (incrementado em 4 unidades)

// exemplo prototipo de função que recebe matriz como parâmetro por referência
void somaUm( int matriz[], int tam  );	// exemplo de chamada: somaUm( minhaMatriz, tamanho );

// exemplo prototipo de função que recebe string como parâmetro por referência: protótipo de função que recebe uma string por referência como parâmetro, o tamanho pode ser obtido com a função strlen( nomeString )
void trocaEspaco( char nome[] );	// exemplo de chamada: trocaEspaco( nomeString );		

// exemplo vetores e ponteiros
char nome[ 9 ] = "Mauricio";
printf( "%c\n", *nome );			// printa M
printf( "%c\n", *( nome + 1 ) );	// printa a


// exemplo matriz e ponteiros 
int mat[ 2 ][ 3 ] = { { 15, 25, 35 }, { 10, 20, 30 } };
printf( "%d ", *( *( mat + 0 ) + 0 ) ); 	//imprime 15
printf( "%d ", *( *( mat + 0 ) + 1 ) ); 	//imprime 25
printf( "%d ", *( *( mat + 1 ) + 2 ) ); 	//imprime 30


// função que troca os valores de x e y
void troca( int *x, int *y ) { // chamar a função: troca(&a, &b); 
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;	
} 


// função que soma 1 em todos os valores de uma matriz
void somaUm( int matriz[], int tam  ) {	// chamar a função: somaUm( nomeMatriz, tamanho )
	int i;
	for( i = 0; i < tam; i++ )
		matriz[ i ] += 1;
}


// função que troca os espaços de uma string por asteríscos
void trocaEspaco( char nome[] ) {		// chamar a função: trocaEspaco( nomeString );
	int i, tam;	
	tam = strlen( nome );
	for( i = 0; i < tam; i++ )
		if( nome[ i ] == ' ' )
			nome[ i ] = '*';
}









_____________________________________ESTRUTURAS_____________________________________________________________



"Tipos simples em C: char, int, float, double, ponteiros."
"Tipos estruturados em C: arranjos, estruturas, arquivos."

"typedef permite ao usuário criar tipos personalizados. Usar sempre visibilidade global para typedef."
"Exemplo: typedef unsigned int NATURAL;"
"Novos tipos são declarados como globais. Dados heterogêneos."

"Obs: atribuições com estrutura: p1 = p2;"

"usamos (*p).nome pois o operador Ponto tem maior precedência do que o * do Ponteiro."
"Operador seta: Para funções com parâmetro do tipo estrutura, onde ponteiros devem ser utilizados."
	"p->nome é o mesmo que (*p).nome"



// Declaração de uma estrutura
typedef struct pessoa {
	int idade;
	char nome[ 60 ];
} PESSOA;	// nome da estrutura


// Inicializações de uma estrutura
PESSOA p1 = { 25, "Maurício" };		// outra forma: struct pessoa p1 = { 25, "Maurício" }; 	
			

// Acesso aos dados da estrutura
p1.idade = 25;
scanf( "%d", &p1.idade ); 
scanf( "%s", p1.nome );  //string não recebe &


// Vetores de estruturas
PESSOA p[ 2 ] = { { 25, "Mauricio Rocha" } , { 30, "Mauricio Fera" } };  
printf( "%d\n%s\n", p[ 0 ].idade, p[ 0 ].nome );



// Recebendo estrutura como parâmetro por referência - exemplo 1
void printaPessoa( PESSOA *p ) {	// chamanda printaPessoa( &p1 );
	printf( "%d\n", p->idade );		// outra forma printf( "%d\n", (*p).idade );
	printf( "%s\n", p->nome );  	// outra forma printf( "%s\n", (*p).nome );
}


// Recebendo estrutura como parâmetro por referência - exemplo 2
void lePessoa( PESSOA *p ) {	// chamanda printaPessoa( &p1 );
	scanf( "%d", &p->idade );	// Lê-se "p seta idade" é o mesmo que scanf( "%d", &(*p).idade );
	scanf( "%s", p->nome );		// é o mesmo que scanf( "%s", (*p).nome );
}



// Estrutura dentro de estrutura

typedef struct data {
	int dia, mes, ano;
}DATA;

typedef struct pessoa {
	char nome[ 50 ];
	DATA dataNasc;
}PESSOA;

// Inicializando
PESSOA p1 = { "Mauricio", { 15, 01, 1992 }  };






_____________________________________COISAS_INTERESSANTES___________________________________________________


//_____________________________________________________  

// Função lê_texto - do professor Anderson
/* A função le_texto.h recebe como parâmetros uma variável string a ser preenchida por leitura e o sizeof desta variável. O conteúdo digitado é lido em uma variável dummy, contendo 1 caractere a mais que a variável parâmetro. Assim, se o penúltimo caractere lido não for o '\n' isto significa que o número de caracteres digitados ultrapassou o tamanho da variável a ser lida */
#include <stdio.h>
#include <string.h>
void le_texto ( char texto[ ], int size_texto ) { // string: ponteiro implícito
	char dummy[ size_texto + 1 ]; 		// cabe um caractere a mais do que no texto
	fflush( stdin ); 					// limpa o buffer
	fgets( dummy, sizeof( dummy ), stdin ); // lê caracteres

	// O último caractere tem que ser '\n' para estar correto:
	while( dummy[ strlen( dummy ) -1 ] != '\n' ) {
		printf( "\nNumero de caracteres digitados excedeu tamanho do campo.\n" );
		printf( "Numero maximo de caracteres eh %d.\n", size_texto - 1 );
		printf( "Digite o conteudo novamente.\n" );
		fflush( stdin ); // limpa o buffer
		fgets( dummy, sizeof( dummy ), stdin ); // lê caracteres novamente
	}
	dummy[ strlen( dummy ) - 1 ] = '\0'; // sempre precisa substituir o '\n'
	strcpy( texto, dummy ); // transfere conteúdo digitado e sem o '\n' para texto
}

// exemplo de chamada da função
int main() {
	char nome[500];	
	le_texto( nome, 10 );
	printf( "%s\n", nome );
	return 0;
}




//_____________________________________________________

// Exemplo simples de estruturas

#include <stdio.h>

typedef struct pessoa {
	int idade;	
	char nome[ 30 ];	
}PESSOA;

void lePessoa( PESSOA *p ) {
	scanf( "%d", &p->idade );	// Lê-se "p seta idade" é o mesmo que scanf( "%d", &(*p).idade );
	scanf( "%s", p->nome );		// é o mesmo que scanf( "%s", (*p).nome );
}

void printaPessoa( PESSOA *p ) {
	printf( "%d\n", p->idade );	// outra forma printf( "%d\n", (*p).idade );
	printf( "%s\n", p->nome );  // outra forma printf( "%s\n", (*p).nome );
}

int main() {
	PESSOA p; 
	lePessoa( &p );
	printaPessoa( &p );
	return 0;
}

//_____________________________________________________

// programa com exemplos matrizes usando ponteiros


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LINHAS  3
#define COLUNAS 4

void imprime( int v[ ][ COLUNAS ] ) {

	int i,j;

	// Imprime arranjo jeito 1
	for (i = 0; i < ( LINHAS*COLUNAS ); i++ )
	    printf( "i= %d ", *( *v + i ) );

	printf( "\n\n" );

	// Imprime arranjo jeito 2
	for ( i = 0; i < ( LINHAS ); i++ )
		for ( j = 0; j < ( COLUNAS ); j++ )
	    	printf( "i= %d ", *( *( v + i ) + j ) );

	printf("\n\n");
}


void imprimeP( int *v ) {
    int i,j;

    // Imprime arranjo
    for ( i = 0; i < ( LINHAS * COLUNAS ); i++ )
            printf("i= %d ", *( v + i ) );

    printf("\n\n");

}


int main() {
	int v[ LINHAS ][ COLUNAS ] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8  }, { 9, 10, 11, 12 } };
	int i=1, j=0;
	
	printf( "%d \n%d \n", *( *(v + i) +j ), v[i][j] );

	return 0;
}




//_____________________________________________________


// Algumas diretivas de compilação

//São comandos que não são compilados. 
//São dirigidos ao pré-processador, executado pelo compilador antes da execução do processo de compilação propriamente dito. Veja mais em https://pt.wikibooks.org/wiki/Programar_em_C/Pr%C3%A9-processador
//São elas:

#include<>
#define
	//#define nome_do_símbolo
	//#define nome_da_constante valor_da_constante
	//#define nome_da_macro(parâmetros) expressão_de_substituição

	//Exemplo de macro:
	//#define max(A, B) ((A > B) ? (A) : (B))
	//#define min(A, B) ((A < B) ? (A) : (B))
	//...
	//x = max(i, j);
	//y = min(t, r);
#undef

#ifdef
  //O código entre as duas diretivas só será compilado se o símbolo (ou constante) nome_do_símbolo já tiver sido definido

#ifndef
/*Um uso muito comum das diretivas de compilação é em arquivos-cabeçalho, que só precisam/devem ser incluídos uma vez. Muitas vezes incluímos indiretamente um arquivo várias vezes, pois muitos cabeçalhos dependem de outros cabeçalhos. Para evitar problemas, costuma-se envolver o arquivo inteiro com um bloco condicional que só será compilado se o arquivo já não tiver incluído. Para isso usamos um símbolo baseado no nome do arquivo. Por exemplo, se nosso arquivo se chama "cabecalho.h", é comum usar um símbolo com o nome CABECALHO_H:

#ifndef CABECALHO_H
#define CABECALHO_H
.
.
.
#endif

Se o arquivo ainda não tiver sido incluído, ao chegar na primeira linha do arquivo, o pré-processador não encontrará o símbolo CABECALHO_H, e continuará a ler o arquivo, o que lhe fará definir o símbolo. Se tentarmos incluir novamente o arquivo, o pré-processador pulará todo o conteúdo pois o símbolo já foi definido. */

#if
#else
#elif
#endif


















