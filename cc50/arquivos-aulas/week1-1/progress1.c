/****************************************************************************
 * progress1.c
 *
 * Ci�ncia da Computa��o 50
 * Gabriel Lima Guimar�es
 *
 * Simula uma barra de progresso
 *
 * Demonstra o uso de sleep
 ***************************************************************************/

#include <stdio.h>
#include <unistd.h>

int
main(void)
{
    for (int i = 0; i <= 100; i++)
    {
        printf("Porcentagem completa: %d%%\n", i);
        sleep(1);
    }
    printf("\n");
}
