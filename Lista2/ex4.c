/*
 * Programa: ex4.c
 * Descrição: Faça um algoritmo que permita ao aluno calcular a sua média final na Unisinos. Leia a nota do
grau A e do grau B e escreva o resultado na tela. Lembrando que o Grau A vale 1/3 e o Grau
B 2/3.
 * Autor: Leonardo Trevisol
 * Data de criação: 30.09.2024
 * Última modificação: 30.09.2024
 *
 * Observações:
 * - (null)
 */

#include <stdio.h>
#include <string.h>

float calculoNota(float grauA, float grauB);
int main()
{

    float notaGrauA, notaGrauB, notaFinal;
    printf("Digite sua nota do Grau A:");
    scanf("%f", &notaGrauA);

    printf("Digite sua nota do Grau B:");
    scanf("%f", &notaGrauB);

    notaFinal = calculoNota(notaGrauA, notaGrauB);
    printf("Sua nota final eh: %.2f", notaFinal);
    return 0;
}

float calculoNota(float grauA, float grauB)
{
    float mediaFinal = 0;

    mediaFinal = (grauA * 0.3333) + (grauB * 0.6666);
    return mediaFinal;
}