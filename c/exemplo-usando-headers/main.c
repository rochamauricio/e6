/* arquivo main.c
Aplicação que usa a Interface - basta compilar esse arquivo.

Modo correto de compilar: 
	gcc data.c main.c -o main
*/

#include <stdio.h>
#include <stdlib.h>
#include "data.h"	// o arquivo data.c já precisa estar compilado!

int main ()
{
	Data d;
	le_data( &d );
	
	if ( valida_data( d ) )
		printf( "data valida.\n" );
	else 
		printf( "data invalida.\n" );

	return 0;
}
