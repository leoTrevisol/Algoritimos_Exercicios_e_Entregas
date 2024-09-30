/*
 * Programa: ex10.c
 * Descrição: Dados não precisam ser tão “quadrados”, ou cúbicos para ser mais exato. Faça um programa que
simule dados de 4, 6, 8, 10, 12 ou 16 faces (apenas estes valores). Peça para o usuário informar no
começo do programa quantas faces quer, para depois fazer o sorteio.
 * Autor: Leonardo Trevisol
 * Data de criação: 21.09.2024
 * Última modificação: 21.09.2024
 *
 * Observações:
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sorteioDados(int dado);
int main()
{
    srand(time(0));
    int tipoDeDado = -1;
    while (tipoDeDado)
    {
        printf("Digite o dado que desejas jogar(D4,D6,D8,D10,D12 ou D16),digite 0 para sair:\nD");
        scanf("%d", &tipoDeDado);
        if (tipoDeDado == 0)
        {
            printf("Vc saiu!\n");
            break;
        }
        else if (tipoDeDado != 4 && tipoDeDado != 6 && tipoDeDado != 8 && tipoDeDado != 10 && tipoDeDado != 12 && tipoDeDado != 16)
        {
            printf("ERRO!Valor indisponivel.Tente novamente\n");
        }

        sorteioDados(tipoDeDado);
    }
    return 0;
}
void sorteioDados(int dado)
{

    int sorteio;
    switch (dado)
    {
    case 4:
        sorteio = rand() % 4;
        printf("O dado D4 caiu o valor %d\n", sorteio);
        break;
    case 6:
        sorteio = rand() % 6;
        printf("O dado D6 caiu o valor %d\n", sorteio);
        break;
    case 10:
        sorteio = rand() % 10;
        printf("O dado D10 caiu o valor %d\n", sorteio);
        break;
    case 12:
        sorteio = rand() % 12;
        printf("O dado D12 caiu o valor %d\n", sorteio);
        break;
    case 8:
        sorteio = rand() % 8;
        printf("O dado D8 caiu o valor %d\n", sorteio);
        break;
    case 16:
        sorteio = rand() % 16;
        printf("O dado D16 caiu o valor %d\n", sorteio);
        break;

    default:
        break;
    }
}