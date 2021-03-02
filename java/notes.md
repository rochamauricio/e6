# compilando um .java no shell do ubuntu:
~~~shell
   javac nomeArquivo.java
~~~

# executando o arquivo compilado:
~~~shell
   java nomeArquivo	# sem o ".java" e sem o ".class"
~~~


# anotações

   Dentro do arquivo o nome da classe precisa ter o mesmo nome do arquivo '.java' em que a classe está.


# java

~~~java
//  comentário de uma linha
/*  comentário de várias linhas  */
/** comentário estilo javadoc    */ 


// Operadores Aritméticos:  
+	-	*	/	% 

// Operadores de (pré ou pós) incremento e decremento:  
++a		a++		--a		a-- 

// Operadores de atribuição compostos: 
+=	-=	*=	/=	%=

// Operadores de igualdade:  
==	!=

// Operadores relacionais:  
>	<	>=	<= 

// Operadores lógicos:  
&&	||	!	&	|	^

// Especificadores de formato:
%s	// string
%d	// inteiro
%f	// float	ex.: %.2f  --- contas com float (precisa do 'f'): media = ( 2.0f * a + 3.0f * b  + 5.0f * c ) / 10.0f;


// Sequências de escape:  
\n	\t	\r	\\	 

// Tipos primitivos de dados:  
boolean, byte, char, short, int, long, float, double

// Conversão de tipos (uso de "casts"):
variavelDouble = ( double ) variavelInt1 * variavelInt1;

// Modificadores de acesso:
public 		// o método pode ser chamado fora do escopo de declaração de classe. 
private	 	// a variável só pode ser modificada por métodos da classe que a contém. 
protected


// Estrutura condicional if:
if ( nota >= 6)
   instruções
else
   instruções


// Operador condicional:  
System.out.println( nota >= 6 ? "Aprovado" : "Reprovado");


// Estrutura condicional switch:
switch( notas ) {
   case 1: instruções break;
   case 2: instruções break;
   default: instruções break; 
}


// Comando de repetição while:
while ( count <= 100) { 
	System.out.printf("%d /n", count); count++; 
} 


// Comando de repetição do... while:
do
{	instruções
}while( counter <= 10 ); 


// Comando de repetição for:
for( int counter = 1; counter <= 10; counter++ )
	instruções

//Outros comandos
break; 		//termina o loop ou sai do laço
continue;  	//pula o código restante no loop


// Arrays
// Arrays não alteram automaticamente seu tamanho em tempo de execução para acomodar dados adiconais. 
int [] c = new int [ 12 ]; 		//inicializa com zero 
int c[]  = new int [ 12 ];		//outra forma
String [] nomes = { "Mauricio", "Maria", "Joana", "Cleusa" };
int [] n = { 10, 20, 30  }; 	
tam = n.length;					//tamanho do array


// Constantes
// com a palavra final


// Enumerações
// As constantes enum são implicitamente final, static e qualquer tentativa de criar um tipo enum com o operador new resulta em erro. 

// Coleções
// São estruturas de dados predefinidas da API do Java utilizadas para armazenar grupos de objetos relacionados. Exemplo de classe de coleção: ArrayList < TipoNãoPrimitivo > do pacote java.util, onde TipoNãoPrimitivo pode ser uma String ou uma classe. 

// Campos static
// Cada objeto tem sua própria cópia de todas as variáveis de instância da classe. Em certos casos apenas uma cópia de uma variável particular deve ser compartilhada por todos objetos de uma classe. Um campo static é chamado de variável de classe e é utilizado nesse casos.


// Escrevendo na tela
System.out.print( "Texto" );
System.out.println( "Texto em nova linha" );
System.out.println(); 						// Gera linha em branco
System.out.printf( "Idade: %d", idade );	// Formatado


// Ler texto a partir do teclado
// Classe Scanner
Scanner input = new Scanner ( System.in ); 	// Para usar o objeto input abaixo
int numero = input.nextInt();
double valor = input.nextDouble();			// por algum motivo usa ',' como  separador decimal na leitura. 
String nome = input.nextLine(); 			// Lê uma linha até pressionar enter
String nome = input.next(); 				// Lê uma palavra até presisonar espaço

~~~

AGLUTINAR COM O NOTES DO WORKSPACE ANTIGO!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!




