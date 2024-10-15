/*
 * Programa: ex9.c
 * Descrição:Escrever um programa que produza a saída abaixo na tela, para n linhas e usando um caractere lido do
teclado.
Exemplo de tela de saída, para n = 5 e caracter = `*`:
Entre com um número: 5
Entre com um caracter: *
*
* *
* * *
* * * *
* * * * *
 * Autor: Leonardo Trevisol
 * Data de criação: 14.09.2024
 * Última modificação: 14.09.2024
 *
 * Observações:
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int numeroInteiro;
    char simbolo[10];

    printf("Entre com um numero: ");
    scanf("%d", &numeroInteiro);
    getchar();
    printf("Entre com um caracter: ");
    fgets(simbolo, sizeof(simbolo), stdin);
    simbolo[strcspn(simbolo, "\n")] = 0;

    for (int i = 1; i < numeroInteiro + 1; i++)
    {
        for (int j = 1; j < i + 1; j++)
        {
            fputs(simbolo,stdout);
        }
        printf("\n");
    }

    return 0;
}
