/*
 * Programa: ex4.c
 * Descrição:Escreva um algoritmo que preenche uma matriz 4x6 com valores inteiros aleatórios entre -10 e
10. Calcule as somas:
a. dos elementos da segunda linha
b. dos elementos da quinta coluna
c. da multiplicação dos elementos da primeira linha pelos elementos da quarta linha
d. dos elementos só das colunas com índices pares
e. dos elementos só das linhas com índices ímpares

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

#define LINHA 4
#define COLUNA 6

int numeroSorteio();
int main()
{
    srand(time(0));

    int matriz[LINHA][COLUNA];
    for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COLUNA; j++)
        {
            matriz[i][j] = numeroSorteio();
        }
    }
    printf("Matriz:\n");
    for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COLUNA; j++)
        {
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    int soma2Linha = 0;
    for (int i = 0; i < LINHA; i++)
    {
        soma2Linha += matriz[1][i];
    }
    printf("Soma da segunda linha da matriz: %d.\n",soma2Linha);
    int soma5Coluna = 0;
    for (int i = 0; i < COLUNA; i++)
    {
        soma5Coluna += matriz[i][4]; 
    }
    printf("Soma da quinta coluna da matriz: %d.\n",soma5Coluna);
    int somaDaMult1lx4l = 0;
    for (int i = 0; i < LINHA; i++)
    {
        somaDaMult1lx4l += matriz[0][i] * matriz[4][i];;
    }
    printf("Soma da multiplicacao dos elementos da primeira linha pelos elementos da quarta linha da matriz: %d.\n",somaDaMult1lx4l);
    int somaColPar = 0, somaLinImpar = 0;
    for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COLUNA; j++)
        {
            if (j % 2 == 0)
            {
                somaColPar += matriz[i][j];
            }
            if (i % 2 != 0)
            {
                somaLinImpar += matriz[i][j];
            }
        }
    }
    printf("Soma dos elementos so das colunas com indices pares da matriz: %d.\n",somaColPar);
    printf("Soma dos elementos so das linhas com indices impares da matriz: %d.\n",somaLinImpar);
    
    
    

    return 0;
}

int numeroSorteio()
{
    int numero = -10 + rand() % 21;
    return numero;
}