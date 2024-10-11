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

#define SIZE 3

float notaParcial();
int main()
{
    int count = 1, qntAlunos;

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
            int  notasAlunos[qntAlunos][SIZE];
            for (int i = 0; i < qntAlunos; i++)
            {
                printf("%do ALUNO:\n\n", i + 1);
                for (int i = 0; i < count; i++)
                {
                    /* code */
                }
                

            }
        }
    }

    return 0;
}
