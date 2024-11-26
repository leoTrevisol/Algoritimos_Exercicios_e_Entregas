/*
 * Programa: ex2.c
 * Descrição:Faça a multiplicação de todos os elementos da matriz acima por 7.
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
    M[0][i] = 7 * v1[i];
    M[1][i] = 7 * v2[i];
    M[2][i] = 7 * v3[i]; 
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