/*
 * Programa: ex11.c
 * Descrição: Crie um programa para informar quais e quantas notas são necessárias para entregar o mínimo de
cédulas para um determinado valor informado pelo usuário considerando notas de R$ 100, R$ 50,
R$ 20, R$ 10 e R$ 5 e R$ 1. Seu programa deve mostrar apenas as notas utilizadas. Por exemplo, ao
solicitar R$18, o programa deve informar apenas a seguinte informação (note que não foram
exibidas informações sobre as demais cédulas):
1 nota(s) de R$ 10.
1 nota(s) de R$ 5.
3 nota(s) de R$ 1.
 * Autor: Leonardo Trevisol
 * Data de criação: 22.09.2024
 * Última modificação: 22.09.2024
 *
 * Observações:
 *  - Acabei fazendo um "caixa completo", com todas as cedulas inteiras possiveis.
 * 
 */

#include <stdio.h>
#include <stdlib.h>

void calculoDeTroco(int valorDeTroco);

int main()
{
    int valorBruto, valorTroco, valorConta;
    printf("Digite o valor da conta: R$");
    scanf("%d", &valorConta);
    printf("Digite o valor fornecido pelo cliente: R$");
    scanf("%d", &valorBruto);

    valorTroco = valorBruto - valorConta;

    if (valorTroco < 0)
    {
        printf("Valor fornecido eh menor que o valor da conta.\n");
        return 1;
    }

    printf("O troco eh de R$%d.\n", valorTroco);
    calculoDeTroco(valorTroco);
    return 0;
}

void calculoDeTroco(int valorDeTroco)
{
    int qntDeCedulas;

    qntDeCedulas = valorDeTroco / 100;
    valorDeTroco = valorDeTroco - (qntDeCedulas * 100);

    printf("%d notas de R$100.\n", qntDeCedulas);

    qntDeCedulas = valorDeTroco / 50;
    valorDeTroco = valorDeTroco - (qntDeCedulas * 50);
    printf("%d notas de R$50.\n", qntDeCedulas);

    qntDeCedulas = valorDeTroco / 20;
    valorDeTroco = valorDeTroco - (qntDeCedulas * 20);
    printf("%d notas de R$20.\n", qntDeCedulas);

    qntDeCedulas = valorDeTroco / 10;
    valorDeTroco = valorDeTroco - (qntDeCedulas * 10);
    printf("%d notas de R$10.\n", qntDeCedulas);

    qntDeCedulas = valorDeTroco / 5;
    valorDeTroco = valorDeTroco - (qntDeCedulas * 5);
    printf("%d notas de R$5.\n", qntDeCedulas);

    qntDeCedulas = valorDeTroco / 2;
    valorDeTroco = valorDeTroco - (qntDeCedulas * 2);
    printf("%d notas de R$2.\n", qntDeCedulas);

    qntDeCedulas = valorDeTroco;
    printf("%d moedas de R$1.\n", qntDeCedulas);
}
