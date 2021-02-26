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
    printf("Qual � a sua nota? ");
    char note = GetChar();

    switch (note)
    {
        case 'A':
        case 'a':
            printf("Voc� teve uma �tima nota!\n");
            break;

        case 'B':
        case 'b':
            printf("Voc� teve uma nota boa.\n");
            break;

        case 'C':
        case 'c':
            printf("Voc� teve uma nota m�dia.\n");
            break;

		case 'D':
        case 'd':
            printf("Voc� teve uma nota ruim.\n");
            break;

		case 'E':
        case 'e':
            printf("Essa � a nota que voc� vai tirar no CC50 se n�o entender o funcionameto desse programa!\n");
            break;
			
        default:
           printf("Voc� escolheu um n�mero inv�lido.\n");
    }
}

