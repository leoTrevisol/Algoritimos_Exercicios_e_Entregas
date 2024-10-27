/*
 * Programa: ex2.c
 * Descrição:Faça um programa que leia 5 valores para dentro de um vetor e imprima o resultado de cada
valor multiplicado pela sua posição no vetor. Por exemplo: 1, 2, 3, 4 e 5 imprimirá na tela 0, 2, 6,
12 e 20.
 * Autor: Leonardo Trevisol
 * Data de criação: 23.10.2024
 * Última modificação: 23.10.2024
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
    int vetor[SIZE];

    printf("Vetor:\n");
    for (int i = 0; i < SIZE; i++)
    {
        vetor[i] = rand() % 101;
        printf("%d ",vetor[i]);
    }
    printf("\n");
    printf("Vetor multiplicado:\n");
    for (int i = 0; i < SIZE; i++)
    {
        vetor[i] *= i;
        printf("%d ",vetor[i]);
    }
return 0;
}