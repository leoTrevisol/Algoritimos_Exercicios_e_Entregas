/*
 * Programa: ex8.c
 * Descrição: Faça um conversor de câmbio de reais/dólar/euro. O usuário deve informar inicialmente a cotação
de cada moeda em relação ao real. Depois apresente o seguinte menu:
1) Converter de Real para Euro
2) Converter de Real para Dólar
3) Converter de Euro para Dólar
4) Converter de Euro para Real
5) Converter de Dólar para Euro
6) Converter de Dólar para Real
Leia o valor a ser convertido na moeda de origem e imprima na tela a quantidade na moeda
destino.
 * Autor: Leonardo Trevisol
 * Data de criação: 21.09.2024
 * Última modificação: 21.09.2024
 *
 * Observações:
 *
 */

#include <stdio.h>

void conversorMoeda(float valorConverter, int metodoDeConversao);
int main()
{
    float valorReal;
    int medotoConversao = -1;
    printf("Digite um valor em real:R$");
    scanf("%f", &valorReal);
    float valorEuro = valorReal / 6.05;
    float valorDolar = valorReal / 5.42;
    printf("R$%.2f = %.2f Euros.\nR$%.2f = %.2f Dolares.\n", valorReal, valorEuro, valorReal, valorDolar);
    while (medotoConversao)
    {
        printf("Digite o metodo de conversao:\n1) Converter de Real para Euro\n2) Converter de Real para Dolar\n3) Converter de Euro para Dolar\n4) Converter de Euro para Real\n5) Converter de Dolar para Euro\n6) Converter de Dolar para Real\nDIGITE ZERO PARA SAIR.\n");
        scanf("%d", &medotoConversao);
        if (medotoConversao == 0)
        {
            printf("VC saiu!");
            break;
        }
        conversorMoeda(valorReal,medotoConversao);
    }
    return 0;
}

void conversorMoeda(float valorConverter, int metodoDeConversao)
{

    float valorEuro = valorConverter / 6.05;
    float valorDolar = valorConverter / 5.42;

    switch (metodoDeConversao)
    {
    case 1:
        printf("R$%.2f = %.2f Euros.\n", valorConverter, valorEuro);
        break;
    case 2:
        printf("R$%.2f = %.2f Dolares.\n", valorConverter, valorDolar);
        break;
    case 3:
        printf("%.2f Euros = %.2f Dolares.\n", valorEuro, valorDolar);
        break;
    case 4:
        printf("%.2f Euros = R$%.2f.\n", valorEuro, valorConverter);
        break;
    case 5:
        printf("%.2f Dolares = %.2f Euros.\n", valorDolar, valorEuro);
        break;
    case 6:
        printf("%.2f Dolares = R$%.2f.\n", valorDolar, valorConverter);
        break;

    default:
        break;
    }
}