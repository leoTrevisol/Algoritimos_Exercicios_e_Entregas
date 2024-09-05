/*
 * Programa: ex1.c
 * Descrição: Faça um algoritmo que leia uma quantidade de tempo em minutos e escreva o tempo
equivalente em segundos na tela. 
 * Autor: Leonardo Trevisol
 * Data de criação: 05.09.2024
 * Última modificação: 05.09.2024
 *
 * Observações:
 * - (null)
 */
#include <stdio.h>
#include <string.h>

int coversor(float real);
int main()
{

    float valorMinutos;
    int valorConvertido;

    printf("Digite o valor em minutos: ");
    scanf("%f", &valorMinutos);
    printf("\n");

    valorConvertido = coversor(valorMinutos);
    printf("Valor convertido para segundos: %dseg.", valorConvertido);
    return 0;
}

int coversor(float minutos)
{

    int valorUmMinuto = 60;
    float conversao;
    conversao = minutos * valorUmMinuto;

    return conversao;
}