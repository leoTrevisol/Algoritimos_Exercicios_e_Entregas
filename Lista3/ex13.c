/*
 * Programa: ex13.c
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
 *  Usei ponteiros para praticar.
 */

#include <stdio.h>
#include <stdlib.h>
#define tamanho 3

void notaGrauC(float *vetorNotas);
float calculadorNota(float *vetorNotas);
int main()
{
    char tipoGrau[tamanho] = {'A', 'B', 'C'};
    float notaGrau[tamanho], mediaParcial;
    float *pontGrau = notaGrau;
    // ou float *notaGrau = (float *)malloc(tamanho * sizeof(float));
    //  a diferenca eh que no primeiro eu ja tenho meu espaco de memoria preenchido com os dados que eu quero
    //  e no segundo caso, mais otimizado, eu limpo o espaco de memoria antes de utiliza-lo, oq evita problemas de sobreescrever dados.
    int count = 1;

    while (count)
    {

        printf("Calculadora de notas da Unisinos.\n\n");

        for (int i = 0; i < 2; i++)
        {
            printf("Grau %c: ", tipoGrau[i]);
            scanf("%f", &notaGrau[i]);
            if (notaGrau[i] < 0 || notaGrau[i] > 10)
            {
                printf("Valor nao permitido!\n");
                i--;
            }
        }
        count = 0;
    }

    mediaParcial = calculadorNota(pontGrau);
    if (mediaParcial >= 6.0)
    {
        printf("\nSua media foi: %.2f\n\nParabens!\nVOCE PASSOU.\n", mediaParcial);
    }
    else
    {
        printf("\nSua media foi: %.2f\n\nVoce devera usar o Grau C.\n", mediaParcial);
        notaGrauC(pontGrau);
        mediaParcial = calculadorNota(pontGrau);
        printf("Nota Final: %.2f\n", mediaParcial);
        if (mediaParcial >= 6.0)
        {
            printf("Voce PASSOU!\n\nFIM.");
        }
        else
        {
            printf("Voce REPROVOU.\n\nFIM.");
        }
    }

    return 0;
}

float calculadorNota(float *vetorNotas)
{
    float notaMedia = (vetorNotas[0] * 0.3333) + (vetorNotas[1] * 0.6666);
    return notaMedia;
}

void notaGrauC(float *vetorNotas)
{
    int escolhaSubstGrau, count = 1;

    while (count)
    {
        printf("Escolha qual nota o grau C ira substiur:\n1.Grau A;\n2.Grau B.\n");
        scanf("%d", &escolhaSubstGrau);
        if (escolhaSubstGrau == 1 || escolhaSubstGrau == 2)
        {
            int count2 = 1;
            while (count2)
            {
                printf("Digite a nota do grau C: ");
                scanf("%f", &vetorNotas[2]);
                if (vetorNotas[2] < 0 || vetorNotas[2] > 10)
                {
                    printf("Valor nao permitido!\n");
                }
                else
                {
                    count2 = 0;
                }
            }

            if (escolhaSubstGrau == 1)
            {
                vetorNotas[0] = vetorNotas[2] * 0.8;
            }
            else
            {
                vetorNotas[1] = vetorNotas[2] * 0.8;
            }
            count = 0;
        }
        else
        {
            printf("Escolha indisponivel!Tente novamente.\n");
        }
    }
}