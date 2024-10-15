/*
 * Programa: ex6.c
 * Descrição:Crie um algoritmo que sorteie 5 valores entre 0 e 100 e depois imprima o menor, o maior e a média
dos valores sorteados.
 * Autor: Leonardo Trevisol
 * Data de criação: 14.09.2024
 * Última modificação: 14.09.2024
 *
 * Observações:
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 5
int main()
{
    srand(time(0));

    int *vetorSorteio = malloc(SIZE * sizeof(int *));
    int somaSorteio = 0,maiorValor = 0,menorValor = 100;
    float mediaSorteio = 0;

    printf("Numeros sorteados: ");
    for (int i = 0; i < SIZE; i++)
    {
        vetorSorteio[i] = rand() % 100;
        somaSorteio += vetorSorteio[i];
        if (vetorSorteio[i] > maiorValor)
        {
            maiorValor = vetorSorteio[i];
        }
        if (vetorSorteio[i] < menorValor)
        {
            menorValor = vetorSorteio[i];
        }
        printf("%d ",vetorSorteio[i]);
    }
    printf("\n");
    mediaSorteio = (float)somaSorteio / (float)SIZE;
    printf("Menor valor: %d\nMaior Valor: %d\nMedia: %.2f\n",menorValor,maiorValor,mediaSorteio);
    
    free(vetorSorteio);

    return 0;
}