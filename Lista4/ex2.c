/*
 * Programa: ex2.c
 * Descrição:Implemente um programa que sorteia um número de 1 a 10 e dá ao usuário 3 tentativas de acertá-lo.
A cada tentativa errada, o programa informa se o número a adivinhar está abaixo ou acima.
 * Autor: Leonardo Trevisol
 * Data de criação: 9.10.2024
 * Última modificação: 9.10.2024
 *
 * Observações:
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));

    int numeroSorteado, numeroEscolido, count = 3;

    numeroSorteado = rand() % 10;

    printf("JOGO DO SORTEIO\n");
    for (int i = 0; i < count; i++)
    {
        printf("%do tentativa.\n", i + 1);
        printf("Digite um numero:");
        scanf("%d", &numeroEscolido);
        if (numeroEscolido == numeroSorteado)
        {
            printf("VOCE ACERTOU!\n");
            break;
        }
        else if (numeroEscolido > numeroSorteado)
        {
            printf("O numero sorteado eh menor.\n");
        }
        else
        {
            printf("O numero sorteado eh maior.\n");
        }
    }
    printf("FIM.\n");
    if (numeroSorteado == numeroEscolido)
    {
        printf("VOCE VENCEU!");
    }
    else
    {
        printf("VOCE PERDEU.");
    }
    return 0;
}