// Anotações sobre arquivos binários, de texto e recursividade



// Arquivos

"Arquivo é um conjunto de dados armazenados em memória secundária."
"Arquivos em C: Binário (estruturado) ou Texto (caracteres)."
"O sistema de E/S do C utiliza o conceito de streams."
"Um stream é um dispositivo lógico (um canal de manipulação) que representa um arquivo ou um dispositivo qualquer (monitor, teclado,etc)."
"Por exemplo: stdin (que já usamos)."
"Operações sobre streams são 'bufferizadas', ou seja, trabalham com uma área de memória intermediária (buffer) e não propriamente sobre o disco."
"Os streams arquivos são representados por uma estrutura chamada FILE, definida em stdio.h."
"Os programas que manipulam estas streams usam então um apontador para esta estrutura (FILE *)"

"Cada leitura/gravação em um arquivo causa um deslocamento da posição corrente do arquivo"


_____________________________________ARQUIVOS_BINÁRIOS______________________________________________________

// Arquivos Binários (estruturado)

"É um agregado de bytes."
"Dados estruturados e dados simples (cada elemento pode conter mais de 1 byte)
"Organizado em blocos, em bytes..."

"Comparação com arquivos de texto:"
	"O processamento é mais rápido, pois os dados não precisam de qualquer conversão."
	"Consomem menos espaço em bytes, o que os torna mais adequados para grandes volumes da dados."
	"Conteúdo não pode ser entendido sem a 'máscara' correspondente (struct utilizada)."
	"Só pode ser lido pelo programa que o criou."

"Modos de abertura:"
	" 'rb' - abre um arquivo binário para leitura"
	" 'wb' - cria/recria um arquivo binário para escrita"
	" 'ab' - acrescenta dados ao fim de um arquivo binário existente"
	" 'r+b' - abre um arquivo binário para leitura/escrita"
	" 'w+b'- cria/recria um arquivo binário para leitura/escrita"
	" 'a+b' - acrescenta em/cria um arquivo binário para leitura/escrita"

"Função fread (<&varbuffer>,<numbytes>,<quant>,<FILE *>)""
	"Lê dados do arquivo para a memória principal."
	"Retorna a quantidade efetivamente lida que poderá ser menor que o solicitado se o final do arquivo for alcançado previamente."
	"varbuffer armazena o dado lido corretamente. Pode ser do mesmo tamanho que numbytes."
	"numbytes é o tamanho da unidade a ser lida"
	"quant indica quantas unidades daquela serão lidas, Logo o número total de bytes que poderão ser lidos é igual a numbytes*quant;"
	"FILE * é o apontador para o arquivo" 
 
"Função fwrite (<&varbuffer>,<numbytes>,<quant>,<FILE *>)"
	"O funcionamento é similar a anterior, só que para escrita."
	"Retorna a quantidade efetivamente escrita se não houver erros."

"Função feof (<FILE *>)"
	"Indica se um arquivo chegou ao fim."
	"Retorna verdadeiro (não-zero) caso o final foi atingido, falso (zero) caso contrário."
	"Exemplo while( !feof( arq ) ){ ... } "

"Função fflush( <FILE *> )"
	"Descarrega o conteúdo em buffer para o arquivo sem fechar o stream."

"Função ferror(<FILE *>)"
	"Indica se a última operação com um arquivo produziu um erro"
	"Cada nova operação com o arquivo modifica a condição de erro."
	"Exemplo de uso:"
		"if( ferror( arq ) ) printf( 'Erro na Leitura!' );"

"Acesso Randômico
	"Acesso a pontos de um arquivo, sem percorrer o conteúdo que antecede o conteúdo desejado."

"Função fseek( <FILE *>, numbytesdesloc, origem )"
	"Move a posição corrente de leitura/escrita para a posição calculada."	
	"Só posiciona. Não lê nem grava!"
	"posição calculada: origem + numbytesdesloc"

	"numbytesdesloc: 1 * sizeof( struct estrutura )"
	"Valores para origem:"
		"SEEK_SET ou 0 = início do arquivo"
		"SEEK_CUR ou 1 = ponto corrente no arquivo"
		"SEEK_END ou 2 = fim do arquivo"

		"Exemplo que Volta uma posição"
		"fseek( arq, -sizeof(struct atleta), SEEK_CUR );" 

"Função fseek(<FILE *>,<numbytesdesloc>,<origem>)" //EXPLICADO DE OUTRA FORMA
"Move a posição corrente de leitura/escrita para a posição calculada como origem+numbytesdesloc"
"Os valores possíveis, definidos, para origem são:"
	"SEEK_SET ou 0 = Início do arquivo"
	"SEEK_CUR ou 1 = Ponto corrente no arquivo"
	"SEEK_END ou 2 = Fim do arquivo"

"Função rewind( <FILE *> )" 
	"Reposiciona o cursor no início do arquivo." 
	"Seta a posição corrente do arquivo para o início."

"Função ftell( <FILE *> )"
	"Indica, em bytes, a posição corrente do arquivo."

"Função rename( nomeantigo, novonome ) 
	"Renomeia um arquivo ou o move para um diretório destino."
	"Obs.: o arquivo deve estar fechado!"
	"ex rename('a.dat','b.dat');"

"Função remove( nomedoarquivo )  
	"Apaga arquivo."
	



//_____________________________________________________


// Programa de exemplo - arquivos binários
#include <stdio.h>
#include <string.h>

// Estrutura para armazenar um atleta
typedef struct atleta
{
	char nome[ 50 ];
	int idade;
	float altura;
}ATLETA;

// Lê uma estrutura "atleta"
void leAtleta( ATLETA *a )
{
	printf( "Digite o nome do atleta:\n" );
	scanf( "%s", a->nome );	// a->nome == (*a).nome

	printf( "Digite a idade do atleta:\n" );
	scanf( "%d", &a->idade );

	printf( "Digite a altura do atleta:\n" );
	scanf( "%f", &a->altura );
}

// Imprime um atleta na tela
void imprimeAtleta( ATLETA *a )
{
	printf( "\nNome:\t%s \nIdade:\t%d \nAltura:\t%.2f\n\n", a->nome, a->idade, a->altura );
}

// Grava um atleta em um arquivo binário
void gravaArquivoAtleta( ATLETA *a )
{

	FILE *arq;	// declaração de um arquivo: "ponteiro de arquivo"
	arq = fopen( "atletas.bin", "ab" ); // fopen retorna um ponteiro para FILE. Se houver erro retorna NULL

	if( arq == NULL )					
		printf( "Erro ao tentar abrir o arquivo." ); // aqui iria interagir com usuário para tratar o erro
	else
	{
		if ( fwrite( a, sizeof( ATLETA ), 1, arq ) != 1 ) // se 'a' não fosse ponteiro seria &a no primeiro argumento de fwrite!
			printf( "Erro na escrita.\n" );
		fclose( arq );	// fecha um stream de arquivo. Todos dados que ainda estavam em buffer serão salvos em disco.							
	}
}

void leArquivoAtleta()
{
	ATLETA buffer;

	FILE *arq;
	arq = fopen( "atletas.bin", "rb" );

	if( arq == NULL )
		printf( "Erro ao tentar abrir o arquivo.\n" );
	else
	{
		while( !feof( arq ) )
			if( fread( &buffer, sizeof( ATLETA ), 1, arq ) == 1 )	
				printf( "\n\nNome do atleta: %s \nIdade: %d \nAltura: %.2f\n", buffer.nome, buffer.idade, buffer.altura );
		fclose( arq );
	}
}

// Altera a idade de um atleta
void alteraIdade()
{
	ATLETA buffer;
	char procurado[ 30 ];
	int atletasContados = 0, encontrado = 0;;

	FILE *arq;
	arq = fopen( "atletas.bin", "r+b" );	// leitura e escrita

	if( arq == NULL )
		printf( "Erro ao tentar abrir o arquivo.\n" );
	else
	{
		printf( "Digite o nome do atleta procurado: \n" );
		scanf( "%s", procurado );

		while( !feof( arq ) )
		{
			if( fread( &buffer, sizeof( ATLETA ), 1, arq ) == 1 )
				if( !strcmp( buffer.nome, procurado ) )	// se atleta lido == atleta procurado
				{
					printf( "\n\nAtleta encontrado.\n" );
					printf( "Idade cadastrada: %d\n", buffer.idade );
					printf( "\nDigite a nova idade:\n" );	
					scanf( "%d", &buffer.idade );

					// posiciona cursor no lugar anterior à leitura, a partir do início do arquivo:
					// outra forma: fseek( arq, -sizeof( ATLETA ),SEEK_CUR ); // posiciona no lugar anterior à leitura, usando deslocamento negativo
					fseek( arq, atletasContados * sizeof( ATLETA ), SEEK_SET ); 	

					fwrite( &buffer, sizeof( ATLETA ), 1, arq );	// substitui
					fflush( arq );	// descarrega stream para o disco
					encontrado = 1;
				}
				atletasContados++;
		} // fim do while
		if( !encontrado )
			printf( "Nenhum atleta foi encontrado com esse nome.\n" );
		fclose( arq );		
	} // fim do else
}


// Lê somente o último atleta inserido
void lerUltimo()
{
	ATLETA buffer;

	FILE *arq;
	arq = fopen( "atletas.bin", "rb" )	;
	
	if( !arq )
		printf( "Erro ao tentar abrir o arquivo.\n" );
	else
	{

		fseek( arq, -1 * sizeof( ATLETA ), SEEK_END );	// posiciona cursor no final do arquivo e volta uma posição
	
		if( fread( &buffer, sizeof( ATLETA ), 1, arq ) == 1 )
			printf( "\n\nNome do atleta: %s \nIdade: %d \nAltura: %.2f\n", buffer.nome, buffer.idade, buffer.altura );		
		fclose( arq );
	}
}

int main()
{

	ATLETA a;
	int i, numAtletas, op;

	printf( "\nDigite a opção escolhida: \n1 - Inserir um atleta \n2 - Listar todos atletas \n3 - Modificar idade \n4 - Ler ultimo atleta da lista\n" );
	scanf( "%d", &op );

	switch( op )
	{
		case 1: 
			puts( "Quantos atletas desejas ler?" );
			scanf( "%d", &numAtletas );

			for( i = 0; i < numAtletas; i++ )		
			{
				leAtleta( &a );
				gravaArquivoAtleta( &a );
			}	

		break;
		case 2: 
			printf( "\nAtletas lidos do arquivo: \n" );
			leArquivoAtleta();
		break;
		case 3: 
			alteraIdade();
		break;
		case 4:
			lerUltimo();
		break;
		default: 
			printf( "Opção invalida.\n" ); 
		break;
	}

	return 0;
}





_____________________________________ARQUIVOS_DE_TEXTO______________________________________________________



// Arquivos de Texto (caracteres)

"Organizados em linhas, de tamanho variável."
"Cada caractere ocupa 1 byte ( 8 bits )."
	"Exemplo: "
	"pegando-se um número inteiro (de 32 bits), com 8 dígitos...
	"No arquivo texto terá:"
		"sizeof(char)*8 = 64 bits"
	"No arquivo binário terá:"
		"sizeof(int) = 32 bits ( do mesmo jeito que está na memória! )."

"Comparação com arquivos binários:"
	"Facilidade para a criação, visualização de conteúdo e de edição de arquivos texto, com qualquer editor de textos."
	"O processamento é lento porque os dados, ao serem gravados, devem ser convertidos para a representação de caracteres em ASCII."
	"Consomem bem mais área para armazenamento."
	"Caracteres numéricos precisam ser convertidos para permitir operações."

"marcador de final de arquivo: caractere EOF => é inserida pelo sistema."
"Caractere de final de linha:"
"No linux: '\n'"
"No windows: '\r\n'"

"A leitura ou gravação em um arquivo texto pode ser feita: linha a linha ou caractere a caractere."

"Uma linha em um arquivo texto é o conjunto dos caracteres que se encontram no arquivo entre:
	"o início do arquivo e a primeira marca de fim de linha."
	"o início do arquivo e a marca de fim de arquivo (no caso de arquivos com uma só linha)."
	"duas marcas de fim de linha."

"Internamente ao programa, nomes de arquivos que incluam \ devem ser escritos com duas \\"

"Algumas funções usadas também em arquivos binários:"
	" fopen( <nome do arquivo>, <modo de abertura> ) "
	" fclose( <apontador para FILE> ) "
	" fflush( <apontador para FILE> ) "
	" feof( <FILE *> ) "
	" ferror( <FILE *> ) "
	" rewind( <FILE *> ) "
	" fseek( <FILE *>, <numbytesdesloc>, <origem> ) "
	" rename( <NomeAntigo>, <NovoNome> ) "
	" remove( <NomeDoArquivo> ) "

"Funções específicas para arquivos de texto:"

"putc (<caractere>,<FILE *>)"
	"Escreve um caractere no arquivo"

"getc (<FILE *>)"
	"Retorna um caracter lido do arquivo"

"fgets (<&strbuffer>,<tamanho>,<FILE*>)"
	"Lê uma string/linha de um arquivo  Obs.: a função inclui um '\0' ao fim da string, 
	"logo a função lê até tamanho-1 ou até um caractere de nova linha (\n) ser lido, adicionando-o à string."
	"Retorna null se não leu nada"
	"vetorchar: onde conteúdo da linha será armazenado – até o \n"
	"sizevetor : número máximo de bytes em vetorchar"
	"point_arq : arquivo de onde será feito a leitura"

"fputs (<&strbuffer>,<FILE*>)"
	"Escreve uma string/linha num arquivo"

"fprintf (<FILE *>,<“txtE%cods”>,<var1,var2,...>)"
	"Escreve caracteres em um arquivo *similar a printf()"

"fscanf (<FILE *>,<“%cods”>,<&var1,&var2,...>)"
	"Lê caracteres de um arquivo *similar a scanf()"

"Função atoi(vetorchar);"
	"Transforma o conteúdo de um vetor de caracteres em inteiro."

"Função atof(vetorchar);"
	"Transforma o conteúdo de um vetor de caracteres em real."
	
"strtok(vetorchar, ”símbolo_separador” );"
	"Extrai substrings (tokens) sucessivos de uma string, desde que separados por um separador."
	"O nome do vetor é usado na função strtok apenas para extrair a primeira substring." 
	"Para a extração das demais substrings de uma mesma string , deve-se usar a constante NULL como primeiro
	"parâmetro das chamadas subsequentes de strtok ( enquanto a string base for a mesma, strtok segue avançando pelas posições da string )."
	// exemplo
	char buffertxt[50] = "batinha#quando#nasce#se#esparrama";
	printf( "%s\n", strtok( buffertxt, "#" ) );	// printa "batatinha"
	printf( "%s\n", strtok( NULL, "#" ) );		// printa "quando

"Modos de abertura:"
	" 'r' - abre um arquivo texto para leitura
	" 'w' - cria/recria um arquivo texto para escrita
	" 'a' - acrescenta ao fim de um arquivo texto existente, se não existe cria
	" 'r+' - abre um arquivo texto para leitura/escrita
	" 'w+' - cria/recria um arquivo texto para leitura/ escrita
	" 'a+' - acrescenta em/cria um arquivo texto para leitura/escrita



//_____________________________________________________


// Exemplo getc: Função que lê texto contido em um arquivo de texto - caractere por caractere usando getc
void le_texto (char nomeArq[])
{   
	char caract = 'a';
    FILE *arq;
    arq = fopen( nomeArq, "r" );
    if( arq == NULL )
        printf( "Erro ao tentar abrir arquivo" );
    else
    {  
	while( caract != EOF )
        {   
			caract = getc( arq );
            printf( "%c", caract );
        }
        fclose( arq );
    }
}


// Exemplo putc: Função que insere uma nova linha no final de um arquivo usando putc
void insereLinhNoFim()
{
	FILE *arq;
	arq = fopen( "saida.txt", "a" );

	if( !arq )
		printf( "Erro ao tentar abrir o arquivo.\n" );
	else
	{
		putc( '\n', arq );
		fclose( arq );
	}
}


// Exemplo fgets: Função que lê texto contido em um arquivo de texto - linha por linha usando fgets
void le_texto()
{
	FILE *arq;
	char buffer[ 255 + 1 ];
	
	arq = fopen( "arquivo.txt", "r" );
	if( !arq )
		printf( "Erro ao tentar abrir o arquivo.\n" );
	else
	{
		while( fgets( buffer, sizeof( buffer ), arq )  ) //outra forma: while (!feof(arq)) { if (fgets(linha, sizeof(linha), arq) != NULL ) ... }	
			printf( "%s", buffer );			
		fclose( arq );
	}
}


// Exemplo fputs: Função que escreve uma linha em um arquivo de texto usando fputs
void insereStringNoFim()
{
	FILE *arq;
	char buffer[] = "Texto inserido na ultima linha.\n";
	
	arq = fopen( "arquivo.txt", "a" );
	if( !arq )
		printf( "Erro ao tentar abrir o arquivo.\n" );
	else
	{
		fputs( buffer, arq );
		fclose( arq );
	}
}



// Exemplo fscanf: Lê uma linha de um arquivo com fscanf
void leLinha()
{
	char nome[ 255 ];
	FILE *arq;
	arq = fopen( "arquivo.txt", "r" );
	if( arq == NULL )
		printf( "Erro ao tentar abrir / criar o arquivo.\n" );
	else
	{
		while( !feof( arq ) )
		{
			fscanf( arq, "O nome do cara é: %s\n", nome );
			printf( "%s\n", nome );
		}
	}
	fclose( arq );
}



// Exemplo fprintf: Escreve uma linha em um arquivo com fprintf
void escreveLinha()
{
	char nome[ 30 ] = "Mauricio Rocha";
	FILE *arq;
	arq = fopen( "arquivo.txt", "a" );
	if( arq == NULL )
		printf( "Erro ao tentar abrir / criar o arquivo.\n" );
	else
	{
		fprintf( arq, "O nome do cara é: %s\n", nome );		
	}
	fclose( arq );
}






//_____________________________________________________

// Exemplo putc e getc
// Substitui num arquivo um caractere por outro. Nome do arquivo, caractere substituído e caractere substituto
// são passados como argumento utilizando argv
// uso: programa.exe <arquivotexto> <caractere> <substituto>
#include <stdio.h>

int main( int argc, char *argv[] ) // ou **argv
{

	FILE *arq;
	char caractere; // caractere que será substituído
	char temp;

	arq = fopen( argv[ 1 ], "r+" );

	if( !arq )
		printf( "Erro ao tentar abrir arquivo" );
	else
	{	
		caractere = *( argv[ 2 ] ); // caractere que será substituído é o conteúdo apontado por argv[2] 

		while( !feof( arq ) )
		{
			temp = getc( arq );
			if( temp == caractere )
			{
				fseek( arq, -1*sizeof( char ), SEEK_CUR ); // volta a posição do caractere procurado
				putc( *( argv[ 3 ] ), arq );
				fflush( stdin );	// escreve mudanças
			}
		}
		fclose( arq );
	}

	return 0;
}

//_____________________________________________________


// Programa Exemplo - arquivos de texto - usando o fgets - lê linha inteira
// Copia o conteúdo de um arquivo de texto para outro. Ambos devem existir e seus nomes devem ser passados por argv
#include <stdio.h>

int main( int argc, char *argv[] ) // ou **argv
{

	FILE *entrada, *saida;
	char buffer[ 255 + 1 ];


	entrada = fopen( argv[ 1 ], "r" );
	if( entrada == NULL )
		printf("Erro ao tentar abrir o arquivo: %s.\n", argv[ 1 ] );
	else
	{
		saida = fopen( argv[ 2 ], "w" );
		if( saida == NULL )
		{
			printf( "Erro ao tentar abrir o arquivo: %s.\n", argv[ 2 ] );
			fclose( entrada );
		}
		else
		{
			//copia uma linha ou 255 (256-1) caracteres e fecha "buffer" com o caractere nulo ('\0')
			while( fgets( buffer, sizeof( buffer ), entrada ) ) //outra forma: while (!feof(arq1)) { if (fgets(linha, sizeof(linha), arq1) != NULL ) ... }
				fputs( buffer, saida ); //escreve no arquivo de saida
			
			fclose( entrada );
			fclose( saida );
		}
	}

	return 0;
}





_____________________________________RECURSIVIDADE__________________________________________________________

"Técnica de programação, na qual um subprograma (função) chama a si mesmo."
"Importante: todas as funções recursivas devem encerrar a recursão a partir de um teste de valor ou condição!"
"sempre pode ser substituído por programação com comandos iterativos"


"Vantagens da Recursividade"
	"código mais compacto;"
	"especialmente conveniente para estruturas de dados definidas recursivamente, tais como árvores;
	"código pode ser mais fácil de entender.
	"implementação mais imediata de funções matemáticas que já são definidas recursivamente.


"Desvantagens da Recursividade"
	"maior ocupação de memória;"
	"maior tempo de processamento"


// Fatorial sem recursão
int fatorial( int n )
{   
	int fat = 1, i;
	for( i = n; i > 1; i-- )
		fat = fat * i;
	return fat;
}

// Fatorial com recursão
// Regra de recursão: se n=0 fat=1,  se n>0 fat de n=  n * (fat de n-1)
int fatorial( int n )
{   
	int fat = 1;
	if( n == 0 )
		fat = 1;
	else
		fat = n * fatorial( n - 1 );
	return fat;
}

// Sequencia de Fibonacci com recursão 
unsigned int fib_rec( unsigned int n )
{   
	if( n < 2 )
		return n;
	else 
		return ( fib_rec( n - 1 ) + fib_rec( n - 2 ) );
}

// Função recursiva se passar num=0 imprime 4 3 2 1 0
void recursive( int num )
{    
	if( num < 5 )
	{
		recursive( num + 1 );
		printf( "%d ", num );     
	}
}



