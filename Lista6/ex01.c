/*
 * Programa: ex1.c
 * Descrição: . Dados os vetores 𝑣1 = [1,5,9,2,5], 𝑣2 = [7,4,13,21,6] e 𝑣3 = [8, −3,5,7,12], faça um programa
    que copie o conteúdo dos vetores dados para uma matriz de tamanho 3x5 de forma a obter o
    seguinte resultado:
    𝑀 = [
    1 5 9 2 5
    7 4 13 21 6
    8 −3 5 7 12
    ]
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
#define SIZE2 3

int main()
{
   int v1[SIZE] = {1,5,9,2,5};
   int v2[SIZE] = {7,4,9,2,5};
   int v3[SIZE] = {8,-3,5,7,12};
    int M[SIZE2][SIZE];
   for (int i = 0; i < SIZE; i++)
   {
    M[0][i] = v1[i];
    M[1][i] = v2[i];
    M[2][i] = v3[i]; 
   }

   for (int i = 0; i < SIZE2; i++)
   {
    for (int j = 0; j < SIZE; j++)
    {
        printf("%d ",M[i][j]);
    }
    printf("\n");
   }
   
    return 0;
}