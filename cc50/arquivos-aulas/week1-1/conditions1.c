/****************************************************************************
 * conditions1.c
 *
 * Ci�ncia da Computa��o 50
 * Gabriel Lima Guimar�es
 *
 * Diz ao usu�rio se o seu input � positivo ou negativo (com um bug!)
 *
 * Demonstra o uso da constru��o if-else
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
    else
        printf("Voc� escolheu um n�mero negativo!\n");
}
