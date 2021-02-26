/****************************************************************************
 * nonswitch.c
 *
 * Ci�ncia da Computa��o 50
 * Gabriel Lima Guimar�es
 *
 * Julga o tamanho do input do usu�rio
 *
 * Demonstra o uso de express�es booleanas com AND.
 ***************************************************************************/
       
#include <cc50.h>
#include <stdio.h>

int
main(void)
{
    printf("Me d� um inteiro entre 1 e 10: ");
    int n = GetInt();

    if (n >= 1 && n <= 3)
        printf("Voc� escolheu um n�mero pequeno.\n");
    else if (n >= 4 && n <= 6)
        printf("Voc� escolheu um n�mero m�dio.\n");
    else if (n >= 7 && n <= 10)
        printf("Voc� escolheu um n�mero grande.\n");
    else 
        printf("Voc� escolheu um n�mero inv�lido.\n");
}
