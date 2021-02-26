/****************************************************************************
 * progress3.c
 *
 * Ci�ncia da Computa��o 50
 * Gabriel Lima Guimar�es
 *
 * Simula uma barra de progresso melhorada
 *
 * Demonstra o uso de um loop while
 ***************************************************************************/

#include <stdio.h>
#include <unistd.h>

int
main(void)
{
    int i = 0;

    while (i <= 100)
    {
        printf("\rPorcentagem completa: %d%%", i);
        fflush(stdout);
        sleep(1);
        i++;
    }
    printf("\n");
}
