/* arquivo data.C
Contém a Implementação da Interface */

#include <stdio.h>
#include <stdlib.h>
#include "data.h"

/* lê data */
void le_data( Data *d ) 
{
	printf( "Dia:" ); scanf( "%d", &d->dia );
	printf( "Mes:" ); scanf( "%d", &d->mes );
	printf( "Ano:" ); scanf( "%d", &d->ano );
}

/* Valida data */
int valida_data( Data d ) 
{
	if (( d.dia > 31 ) || ( d.ano > 2100 ) || ( d.mes > 12 ))
		return 0;
	else
		return 1;
}

/* Imprime data */
void imprime_data( Data d )
{
	printf( "%d/%d/%d\n", d.dia, d.mes, d.ano );
}




