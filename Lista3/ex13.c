/*
 * Programa: ex6.c
 * Descrição:Faça um programa que leia a nota do Grau A e do Grau B do aluno e calcule a média final conforme
as regras da Unisinos. Imprima a média final na tela e diga se o aluno passou por média ou se ficou
em recuperação (grau C). Se o aluno ficou em recuperação, pergunte se ele quer substituir o Grau
A ou o Grau B (ele deve digitar ‘a’ ou ‘b’). Leia a nota do Grau C, recalcule a média de acordo com o
grau substituído e imprima na tela o resultado, informando se ele foi aprovado ou reprovado.
 * Autor: Leonardo Trevisol
 * Data de criação: 25.09.2024
 * Última modificação: 25.09.2024
 *
 * Observações:
 *  VOU TENTAR USAR PONTEIROS.
 */

#include <stdio.h>


int main()
{
    char notaGrau[3],tipoGrau[3] = {'A','B','C'};
    int count = 1;

    while (count)
    {
        
        printf("Calculadora de notas da Unisinos.\n\n");
        printf("Grau %c: ",tipoGrau[i]);
        scanf("%f",&notaGrau);
        if (notaGrau < 0 || notaGrau > 10)
        {
            printf("Valor nao permitido!");
            count = 0;
        }else
        {
            
        }
        
        
    }
    

    return 0;
}