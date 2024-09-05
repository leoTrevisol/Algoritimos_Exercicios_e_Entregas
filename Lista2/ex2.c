/*
 * Programa: ex2.c
 * Descrição: Um turista deseja comprar dólares em uma casa de câmbio. Escreva um programa que leia a
cotação do dólar para real, a quantidade de dólares que o turista deseja comprar, e calcule o
valor total em reais que ele precisará pagar. 
 * Autor: Leonardo Trevisol
 * Data de criação: 05.09.2024
 * Última modificação: 05.09.2024
 *
 * Observações:
 * - (null)
 */

#include <stdio.h>
#include <string.h>


float coversor(float real);
int main(){

    float valorConvertido,valorReal;
    
    printf("Digite o valor em real: ");
    scanf("%f",&valorReal);
    printf("\n");

    valorConvertido = coversor(valorReal);
    printf("Valor convertido para dolar: %.2f",valorConvertido);
    return 0;
}

float coversor(float real){

    float valorDolar = 5.64;
    float conversao;
    conversao = real / valorDolar;

    return conversao; 
}