/*
 * Programa: ex4.c
 * Descrição: Crie um programa que verifica se um número inteiro informado pelo usuário é divisível por 3.
 * Autor: Leonardo Trevisol
 * Data de criação: 17.09.2024
 * Última modificação: 17.09.2024
 *
 * Observações:
 *
 */

#include <stdio.h>

void divisorPorTres(int number);
int main()
{
    int numeroInteiro;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numeroInteiro);
    divisorPorTres(numeroInteiro);
    return 0;
}

void divisorPorTres(int number)
{

    if (number % 3 == 0)
    {
        printf("O numero %d eh divisivel por 3.", number);
    }
    else
    {
        printf("O numero %d  nao eh divisivel por 3.", number);
    }
}