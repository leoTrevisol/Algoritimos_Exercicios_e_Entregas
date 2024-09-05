/*
 * Programa: ex8.c
 * Descrição: Um usuário deseja converter a temperatura de Celsius para Fahrenheit. Escreva um programa
que leia a temperatura em Celsius e exiba a temperatura equivalente em Fahrenheit. 
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

    float valorConvertido,valorCelsius;
    
    printf("Digite o valor em celcius(°C): ");
    scanf("%f",&valorCelsius);

    valorConvertido = coversor(valorCelsius);
    printf("Valor convertido para fahrenheit: %.1f°F",valorConvertido);
    return 0;
}

float coversor(float celcius){

    float fahrenheit;
    fahrenheit = 1.8 * celcius + 32;

    return fahrenheit; 
}