/*
 * Programa: ex10.c
 * Descrição: O lojista gostou tanto do seu programa anterior que encomendou outro. Dessa vez ele quer
que você calcule quanto cada cliente gastou na loja apenas informando o número de
camisetas, calças e cintos comprados. As camisetas custam R$ 25,00, as calças cem reais e os
cintos 40 reais. Some o valor da compra e ao final dê um desconto de 10 por cento sobre o
total. Exiba na tela o valor do desconto e o valor da compra. 
 * Autor: Leonardo Trevisol
 * Data de criação: 05.09.2024
 * Última modificação: 05.09.2024
 *
 * Observações:
 * - (null)
 */

#include <stdio.h>
#include <string.h>

float valorTotal(int camisetas,int calca,int cinto);
int main(){

    int camisetas,calca,cinto;
    float total;
    printf("Digite o numero de camisetas compradas: ");
    scanf("%d",&camisetas);
    printf("Digite o numero de calcas compradas: ");
    scanf("%d",&calca);
    printf("Digite o numero de cintos compradas: ");
    scanf("%d",&cinto);

    total = valorTotal(camisetas,calca,cinto);
    printf("VALOR GASTO: R$%.2f",total); 
    return 0;
}

float valorTotal(int camisetas,int calca,int cinto){

    int valorCamisetas = 25,valorCalca = 100,valorCinto = 40;
    float valorTotal;
    valorTotal = (camisetas*valorCamisetas) + (calca*valorCalca) + (cinto*valorCinto);

    return valorTotal;
}