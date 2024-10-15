/*
 * Programa: ex7.c
 * Descrição:Descubra, dentre cinco nomes informados pelo usuário, qual o primeiro em ordem alfabética.
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

#define SIZE 3
#define MAXLINHAS 100
int main()
{
    char *strings[SIZE];
    char *maiorString = malloc(MAXLINHAS * sizeof(char));
    

    for (int i = 0; i < SIZE; i++)
    {
        strings[i] = malloc(MAXLINHAS * sizeof(char));
        printf("Digite o %do nome: ", i + 1);
        fgets(strings[i], MAXLINHAS, stdin);
        strings[i][strcspn(strings[i], "\n")] = 0;
        if (i == 0)
        {
            strcpy(maiorString, strings[i]);
        }
        else if (strcmp(strings[i], maiorString) < 0)
        {
            strcpy(maiorString, strings[i]);
        }
    }
    printf("Primeiro nome em ordem alfabetica: ");
    fputs(maiorString, stdout);

    for (int i = 0; i < SIZE; i++)
    {
        free(strings[i]);
    }
    free(maiorString);

    return 0;
}