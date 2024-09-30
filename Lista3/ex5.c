/*
 * Programa: ex5.c
 * Descrição: Faça um algoritmo para receber um número qualquer do usuário e informar na tela se é par ou se
é ímpar.
 * Autor: Leonardo Trevisol
 * Data de criação: 17.09.2024
 * Última modificação: 17.09.2024
 *
 * Observações:
 *
 */

#include <stdio.h>

void parOuImpar(int number);
int main()
{
    int numeroInteiro;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numeroInteiro);
    parOuImpar(numeroInteiro);
    return 0;
}
void parOuImpar(int number)
{

    if (number == 0)
    {
        printf("Numero zero!");
    }
    else if (number % 2 == 0)
    {
        printf("O numero %d eh par.", number);
    }
    else
    {
        printf("O numero %d eh impar.", number);
    }
}
