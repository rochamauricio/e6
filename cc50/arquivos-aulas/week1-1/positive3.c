/****************************************************************************
 * positive3.c
 *
 * Ci�ncia da Computa��o 50
 * Gabriel Lima Guimar�es
 *
 * Pede ao usu�rio um n�mero positivo
 *
 * Demonstra o uso de !
 ***************************************************************************/

#include <cc50.h>
#include <stdio.h>

int
main(void)
{
    bool agradecido = false;
    do
    {
        printf("Eu ordeno que voc� me d� um inteiro positivo: ");
        if (GetInt() > 0)
            agradecido = true;
    }
    while (!agradecido);
    printf("Obrigado pelo inteiro positivo!\n");
}
