/****************************************************************************
 * switch1.c
 *
 * Ci�ncia da Computa��o 50
 * Gabriel Lima Guimar�es
 *
 * Julga o tamanho do input de um usu�rio
 *
 * Demonstra o uso de switchs
 ***************************************************************************/
       
#include <cc50.h>
#include <stdio.h>

int
main(void)
{
    printf("Me d� um inteiro entre 1 e 10: ");
    int n = GetInt();

    switch (n)
    {
        case 1:
        case 2:
        case 3:
            printf("Voc� escolheu um n�mero pequeno.\n");
            break;

        case 4:
        case 5:
        case 6:
            printf("Voc� escolheu um n�mero m�dio.\n");
            break;

        case 7:
        case 8:
        case 9:
        case 10:
            printf("Voc� escolheu um n�mero grande.\n");
            break;

        default:
           printf("Voc� escolheu um n�mero inv�lido.\n");
    }
}
