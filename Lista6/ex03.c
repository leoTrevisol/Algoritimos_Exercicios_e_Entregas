/*
 * Programa: ex3.c
 * Descrição:Matriz identidade, na matemática, também conhecida como matriz 𝐼 ou matriz unitária, é uma
matriz quadrada em que a diagonal principal contém apenas elementos 1 (um) e todos os outros
elementos são 0 (zero). Crie uma função que gere uma matriz identidade 4x4.
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
#define SIZE 4

int main()
{
   int matrizID[SIZE][SIZE];

   for (int i = 0; i < SIZE; i++)
   {
    for (int j = 0; j < SIZE; j++)
    {
        if (i == j)
        {
            matrizID[i][j] = 1;
        }else
        {
            matrizID[i][j] = 0;
        }
    }
   }
   for (int i = 0; i < SIZE; i++)
   {
    for (int j = 0; j < SIZE; j++)
    {
        printf("%d ",matrizID[i][j]);
    }
    printf("\n");
   }
   
    return 0;
}