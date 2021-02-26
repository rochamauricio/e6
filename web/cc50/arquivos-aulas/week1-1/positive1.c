/****************************************************************************
 * positive1.c
 *
 * Ci�ncia da Computa��o 50
 * Gabriel Lima Guimar�es
 *
 * Pede ao usu�rio um n�mero positivo
 *
 * Demonstra o uso de do-while
 ***************************************************************************/

#include <cc50.h>
#include <stdio.h>

int
main(void)
{
    int n;
    do
    {
        printf("Eu ordeno que voc� me d� um inteiro positivo: ");
        n = GetInt();
    }
    while (n < 1);
    printf("Obrigado pelo %d!\n", n);
}
