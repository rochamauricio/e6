/* arquivo data.h: 
Contém a Interface, chamada protótipo */

// TAD DATA (dd,mm,aaaa)

// TIPO DE DADO exportado 
struct data 
{
	int dia;
	int mes;
	int ano;
};
typedef struct data Data;


// OPERAÇÕES Exportadas

// lê data 
void le_data(Data *d);

// Valida data 
int valida_data( Data d );

// Imprime data 
void imprime_data( Data d );
