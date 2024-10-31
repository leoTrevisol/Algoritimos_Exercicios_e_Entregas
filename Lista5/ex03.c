/*
 * Programa: ex3.c
 * Descrição:Faça um programa para testar se um dado é viciado. Faça o lançamento N vezes (N é um número
lido pelo usuário, pode ser um número bem grande), armazene cada valor que for sorteado em um
array com 6 posições e ao final imprima o percentual do resultado de cada face.
 * Autor: Leonardo Trevisol
 * Data de criação: 27.10.2024
 * Última modificação: 27.10.2024
 *
 * Observações:
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 6

int sorteioDado();
int main()
{
    srand(time(0));

    int nVezes;

    int vetorDado[SIZE] = {0, 0, 0, 0, 0, 0};
    printf("Digite o numero de vezes para o dado ser jogado:");
    scanf("%d", &nVezes);

    for (int i = 0; i < nVezes; i++)
    {
        int numeroSorteado = sorteioDado();
        if (numeroSorteado == 1)
        {
            vetorDado[0]++;
        }
        else if (numeroSorteado == 2)
        {
            vetorDado[1]++;
        }
        else if (numeroSorteado == 3)
        {
            vetorDado[2]++;
        }
        else if (numeroSorteado == 4)
        {
            vetorDado[3]++;
        }
        else if (numeroSorteado == 5)
        {
            vetorDado[4]++;
        }
        else
        {
            vetorDado[5]++;
        }
    }

    int percentualDado[SIZE];
    printf("Porcentagem do total de jogadas:\n");
    for (int i = 0; i < SIZE; i++)
    {
        percentualDado[i] = (vetorDado[i] * 100 / nVezes);
        printf("Numero %d: %d%%\n",i + 1,percentualDado[i]);
    }
    return 0;
}

int sorteioDado()
{
    int numeroDado = 1 + (rand() % 6);
    return numeroDado;
}