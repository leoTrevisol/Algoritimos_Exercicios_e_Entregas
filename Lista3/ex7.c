/*
 * Programa: ex7.c
 * Descrição: Implementar um programa que calcula o desconto previdenciário de um funcionário. O programa
deve, dado um salário retornar o valor do desconto proporcional ao mesmo. O cálculo de desconto
segue a regra: o desconto deve 11% do valor do salário. Entretanto, o valor máximo de desconto é
318,20. Sendo assim, ou o método retorna 11% sobre o salário ou 318,20.
 * Autor: Leonardo Trevisol
 * Data de criação: 21.09.2024
 * Última modificação: 21.09.2024
 *
 * Observações:
 *
 */

#include <stdio.h>

float descontoPrev(float salarioIn);
int main()
{
    float salario, descPrevFinal;

    printf("Digite o valor do salario:R$");
    scanf("%f", &salario);
    descPrevFinal = descontoPrev(salario);
    printf("Seu salario eh de R$%.2f\nSeu desconto previdenciario eh de R$%.2f\n", salario, descPrevFinal);

    return 0;
}

float descontoPrev(float salarioIn)
{

    float descontoPorc = salarioIn * 0.11;
    float descFinal;

    descFinal = descontoPorc >= 318.2 ? 318.2 : descontoPorc;

    return descFinal;
}
