/*
 * Programa: ex2.c
 * Descrição: Faça um algoritmo que leia os valores A, B, C e imprima na tela se a soma de A + B é menor que A
+ C.
 * Autor: Leonardo Trevisol
 * Data de criação: 11.09.2024
 * Última modificação: 11.09.2024
 *
 * Observações:
 *
 */

#include <stdio.h>
#include <string.h>

int somatorio(int a, int b, int c);
int main()
{

    int valorA, valorB, valorC;

    printf("Digite o valor A: ");
    scanf("%d", &valorA);

    printf("Digite o valor B: ");
    scanf("%d", &valorB);

    printf("Digite o valor C: ");
    scanf("%d", &valorC);

    somatorio(valorA, valorB, valorC);

    return 0;
}

int somatorio(int a, int b, int c)
{

    if (a + b < a + c)
    {
        printf("%d + %d eh menor que %d + %d.", a, b, a, c);
    }
    else
    {
        printf("%d + %d eh maior ou igual a %d + %d.", a, b, a, c);
    }
}
