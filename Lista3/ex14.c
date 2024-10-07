/*
 * Programa: ex14.c
 * Descrição:Criar um programa para identificar o valor a ser pago por um plano de saúde dada a idade do
conveniado considerando que todos pagam R$ 300 e mais um adicional (se tiver dependentes)
conforme a seguinte tabela:
a) crianças com menos de 10 anos pagam R$100;
b) dependentes com idade entre 10 e 30 anos pagam R$220;
c) dependentes com idade entre 31 e 60 anos pagam R$ 395; e
d) dependentes com mais de 60 anos pagam R$ 480.
 * Autor: Leonardo Trevisol
 * Data de criação: 06.10.2024
 * Última modificação: 06.10.2024
 *
 * Observações:
 *
 */

#include <stdio.h>
#include <stdlib.h>

int planoDeConvenio(int idadeDoConv);
int main()
{
    int idadeConv, valorToal;

    printf("PlanoMed - Cadastro:\n");

    printf("O valor fixo do plano eh R$300,00.\n");
    valorToal = planoDeConvenio(idadeConv);
    printf("O valor total a ser pago pelo convencionado eh: R$%d,00.\nFIM.\n", valorToal);

    return 0;
}
int planoDeConvenio(int idadeDoConv)
{
    int qntDependentes, valorTotalPlano = 300;
    printf("Quantos dependentes voce tem?");
    scanf("%d", &qntDependentes);

    int idadeDependentes[qntDependentes];

    for (int i = 0; i < qntDependentes; i++)
    {
        printf("Idade do %do depentente: ",i + 1);
        scanf("%d", &idadeDependentes[i]);
        if (idadeDependentes[i] < 0)
        {
            printf("Idade invalida, digite novamente.\n");
        }
        else if (idadeDependentes[i] < 10)
        {
            valorTotalPlano += 100;
        }
        else if (idadeDependentes[i] >= 10 && idadeDependentes[i] <= 30)
        {
            valorTotalPlano += 220;
        }
        else if (idadeDependentes[i] < 30 && idadeDependentes[i] <= 60)
        {
            valorTotalPlano += 395;
        }
        else if (idadeDependentes[i] > 60)
        {
            valorTotalPlano += 480;
        }
    }
    return valorTotalPlano;
}