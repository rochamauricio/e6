/****************************************************************************
 * conditions2.c
 *
 * Ci�ncia da Computa��o 50
 * Gabriel Lima Guimar�es
 *
 * Diz ao usu�rio se o seu input � positivo ou negativo
 *
 * Demonstra o uso da constru��o if-else if-else
 ***************************************************************************/
       
#include <cc50.h>
#include <stdio.h>

int
main(void)
{
    printf("Um inteiro por favor: ");
    int n = GetInt();

    if (n > 0)
        printf("Voc� escolheu um n�mero positivo!\n");
    else if (n == 0)
        printf("Voc� escolheu zero!\n");
    else
        printf("Voc� escolheu um n�mero negativo!\n");
}
