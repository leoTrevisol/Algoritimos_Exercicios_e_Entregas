/*
 * Programa: ex9.c
 * Descrição: Durante uma liquidação uma loja resolveu dar quinze por cento de desconto nas compras
feitas pelos clientes. Faça um programa que leia o valor da compra e escreva o valor da
compra com o desconto.  
 * Autor: Leonardo Trevisol
 * Data de criação: 05.09.2024
 * Última modificação: 05.09.2024
 *
 * Observações:
 * - (null)
 */

#include <stdio.h>
#include <string.h>


float desconto(float valor,float desconto);
int main(){

    float descontoPorcentagem,valorComDesconto,valorDoProduto;
    
    printf("Digite o valor do produto: ");
    scanf("%f",&valorDoProduto);
    printf("Digite o valor do desconto (em porcentagem):");
    scanf("%f",&descontoPorcentagem);

    valorComDesconto = desconto(valorDoProduto,descontoPorcentagem);
    printf("Valor com o desconto de %.2f%% eh: R$%.2f",descontoPorcentagem, valorComDesconto);
    return 0;
}

float desconto(float valor,float desconto){

    float valorConvertido;
    valorConvertido = valor - (valor * desconto)/100;

    return valorConvertido; 
}