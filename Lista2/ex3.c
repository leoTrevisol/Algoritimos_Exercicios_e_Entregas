/*
 * Programa: ex3.c
 * Descrição: Um restaurante de buffet a quilo cobra R$ 40,00 por quilo. Escreva um programa que leia o
peso do prato do cliente e calcule o valor a ser pago. 
 * Autor: Leonardo Trevisol
 * Data de criação: 05.09.2024
 * Última modificação: 05.09.2024
 *
 * Observações:
 * - Agrescentei um valor para buffet livre usando if/else.
 */

#include <stdio.h>
#include <string.h>

float coversor(float real);
int main()
{

    float valorConvertido, valorDaMassa;

    printf("Valores:\nBuffet livre: R$27,00\nBuffet a Quilo: R$40,00\n");
    printf("Digite o valor em gramas: ");
    scanf("%f", &valorDaMassa);
    printf("\n");

    valorConvertido = coversor(valorDaMassa);
    printf("Total a pagar: R$%.2f", valorConvertido);
    return 0;
}

float coversor(float massa)
{

    float valorKilo = 0.04;
    float conversao;
    int buffetLivre = 27;
    conversao = massa * valorKilo;

    if (conversao >= buffetLivre)
    {
        return buffetLivre;
    }
    else
    {
        return conversao;
    }
}