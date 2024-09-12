/*
 * Programa: ex1.c
 * Descrição: Escreva um programa que leia dois números e efetue uma divisão, mas somente se o divisor for
diferente de zero; quando isto ocorrer, é mostrada uma mensagem de erro apropriada.
 * Autor: Leonardo Trevisol
 * Data de criação: 11.09.2024
 * Última modificação: 11.09.2024
 *
 * Observações:
 * - Por que n eh possivel colocar a comando break em um laço if/else?(n consegui far isso).
 */

#include <stdio.h>
#include <string.h>

float divisao(float dividendo, float divisor);
int main()
{

    float n1, n2, valorFinal;

    printf("Digite um dividendo: ");
    scanf("%f", &n1);

    printf("Digite um divisor: ");
    scanf("%f", &n2);

    valorFinal = divisao(n1, n2);
    if (n2 == 0)
    {
        printf("Erro, essa divisao eh impossivel!");
    }
    else
    {
        printf("A difisao de %.2f por %.2f eh: %.2f", n1, n2, valorFinal);
    }

    return 0;
}

float divisao(float dividendo, float divisor)
{

    float resultado;
    resultado = dividendo / divisor;
    return resultado;
}