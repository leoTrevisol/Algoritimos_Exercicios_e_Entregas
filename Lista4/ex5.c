/*
 * Programa: ex5.c
 * Descrição: Para x alunos da Unisinos, ler as notas do grau A e grau B e calcular a média considerando o sistema
de notas da Unisinos. Se o aluno estiver aprovado escrever “APROVADO”. Caso contrário, ler o grau C
e pedir qual o grau que deve ser substituído (A ou B, maiúsculo ou minúsculo), recalcular a média. Se
estiver aprovado, escrever “APROVADO”, caso contrário escrever “REPROVADO”. No final escrever a
média geral dos alunos.
 * Autor: Leonardo Trevisol
 * Data de criação: 11.09.2024
 * Última modificação: 11.09.2024
 *
 * Observações:
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 4

float grauC();
float **notaParcial(int numeroLinhas);
int main()
{
    int count = 1, qntAlunos;
    float **ponteiroMatriz, somaDaTurma = 0, mediaDaTurma;

    while (count)
    {
        printf("Quantidade de alunos na turma:");
        scanf("%d", &qntAlunos);

        if (qntAlunos <= 0)
        {
            printf("quantidade invalida.Tente novamente.\n");
        }
        else
        {
            ponteiroMatriz = notaParcial(qntAlunos);
            printf("| ALUNO | GRAU A | GRAU B | MEDIA FINAL |\n");

            for (int i = 0; i < qntAlunos; i++)
            {
                printf("| %5d | %6.2f | %6.2f | %6.2f |\n", i + 1, ponteiroMatriz[i][1], ponteiroMatriz[i][2], ponteiroMatriz[i][3]);
            }
            count = 0;
        }

        for (int i = 0; i < qntAlunos; i++)
        {
            somaDaTurma += ponteiroMatriz[i][3];
        }
        mediaDaTurma = somaDaTurma / qntAlunos;
        printf("Media da turma:%.2f\n", mediaDaTurma);

        for (int i = 0; i < qntAlunos; i++)
        {
            free(ponteiroMatriz[i]);
        }
        free(ponteiroMatriz);
    }

    return 0;
}
float **notaParcial(int numeroLinhas)
{

    float **matrizDeNotas = malloc(numeroLinhas * sizeof(float *));
    for (int i = 0; i < numeroLinhas; i++)
    {
        matrizDeNotas[i] = malloc(SIZE * sizeof(float *));
    }

    for (int i = 0; i < numeroLinhas; i++)
    {
        printf("%do ALUNO:\n", i + 1);
        int qualGrau, count2 = 1;
        matrizDeNotas[i][0] = i + 1;
        while (count2)
        {
            printf("Digite a nota do Grau A:");
            scanf("%f", &matrizDeNotas[i][1]);
            if (matrizDeNotas[i][1] < 0 || matrizDeNotas[i][1] > 10)
            {
                printf("Valor invalido.Tente novamente.\n");
            }
            else
            {
                count2 = 0;
            }
        }
        count2 = 1;
        while (count2)
        {
            printf("Digite a nota do Grau B:");
            scanf("%f", &matrizDeNotas[i][2]);
            if (matrizDeNotas[i][2] < 0 || matrizDeNotas[i][2] > 10)
            {
                printf("Valor invalido.Tente novamente.\n");
            }
            else
            {
                count2 = 0;
            }
        }

        count2 = 1;

        matrizDeNotas[i][3] = (matrizDeNotas[i][1] * 0.3333) + (matrizDeNotas[i][2] * 0.6666);
        printf("Nota final: %.2f\n", matrizDeNotas[i][3]);
        if (matrizDeNotas[i][3] < 5.99)
        {
            while (count2)
            {
                printf("Esse aluno necessitara fazer o grau C.\nQual grau desejas subtituir?\n1.Grau A.\n2.Grau B.\n");
                scanf("%d", &qualGrau);
                if (qualGrau != 1 && qualGrau != 2)
                {
                    printf("Opcao invalida.Digite novamente.\n");
                }
                else if (qualGrau == 1)
                {
                    matrizDeNotas[i][1] = grauC();
                    count2 = 0;
                }
                else
                {
                    matrizDeNotas[i][2] = grauC();
                    count2 = 0;
                }
            }
            count2 = 1;
            matrizDeNotas[i][3] = (matrizDeNotas[i][1] * 0.3333) + (matrizDeNotas[i][2] * 0.6666);
            printf("Nova nota final: %.2f\n", matrizDeNotas[i][3]);
            if (matrizDeNotas[i][3] >= 6.00)
            {
                printf("APROVADO.\n\n");
            }
            else
            {
                printf("REPROVADO.\n\n");
            }
        }
        else
        {
            printf("APROVADO.\n\n");
        }
    }

    return matrizDeNotas;
}
float grauC()
{
    float notaGrauC;

    printf("Digite a nota do Grau C:");
    scanf("%f", &notaGrauC);
    return notaGrauC * 0.8;
}