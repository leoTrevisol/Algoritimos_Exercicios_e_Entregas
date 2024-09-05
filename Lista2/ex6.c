/*
 * Programa: ex6.c
 * Descrição: A loja de eletrônicos TechMundo vende uma certa quantidade de smartphones e uma
quantidade de tablets a cada dia. Cada smartphone custa R$ 1000,00 e cada tablet custa R$
1500,00. Ao final do dia, o dono quer saber quanto arrecadou com a venda dos smartphones
e dos tablets. Escreva um programa que leia o número de smartphones e tablets vendidos em
um dia e calcule o total arrecadado.
 * Autor: Leonardo Trevisol
 * Data de criação: 05.09.2024
 * Última modificação: 05.09.2024
 *
 * Observações:
 * - (null)
 */

#include <stdio.h>
#include <string.h>

float coversorCelular(int celular);
float coversorTablet(int tablet);
int main()
{

    int numeroCelulares, numeroTablets;
    float valorTotal;

    printf("Digite o numero de smartphones vendidos: ");
    scanf("%d", &numeroCelulares);

    printf("Digite o numero de tablets vendidos: ");
    scanf("%d", &numeroTablets);

    valorTotal = coversorTablet(numeroTablets) + coversorCelular(numeroCelulares);
    printf("Receita total: R$%.2f", valorTotal);
    return 0;
}

float coversorCelular(int celular)
{

    float valorCelular = 1000;
    float conversao;
    conversao = celular * valorCelular;

    return conversao;
}
float coversorTablet(int tablet)
{

    float valorTablet = 1500;
    float conversao;
    conversao = tablet * valorTablet;

    return conversao;
}