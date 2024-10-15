/*
 * Programa: ex8.c
 * Descrição:Fazer um programa que calcule e imprima o fatorial de um número fornecido pelo usuário. Repetir a
execução do programa tantas até o usuário responder não. O fatorial de um número inteiro positivo é
definido como o número multiplicado por ele menos 1, menos 2, etc até o valor 1.
Por exemplo, o fatorial de 4 é 4x3x2x1=24.
Exemplo de tela de saída:
Entre com um número: 5
O fatorial de 5 é 120
Calcular outro número (s/n)? n
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

int calculoFatorial(int n);
int main()
{
    int count = 1, count2 = 1, numeroFatorial, fatorial;
    char opcao[2];

    while (count)
    {
        printf("Entre com um numero:");
        scanf("%d", &numeroFatorial);
        fatorial = calculoFatorial(numeroFatorial);
        printf("O fatorial de %d eh %d\n", numeroFatorial, fatorial);
        while (count2)
        {
            getchar();
            printf("Calcular outro numero? (s/n) ");
            if (fgets(opcao, sizeof(opcao), stdin) != NULL)
            {
                opcao[strcspn(opcao, "\n")] = 0;
                if (strcmp(opcao, "s") == 0)
                {
                    count2 = 0;
                }
                else if (strcmp(opcao, "n") == 0)
                {
                    count2 = 0;
                    count = 0;
                }
                else
                {
                    printf("Opcao invalida.Tente novamente.\n");
                }
            }
            else
            {
                printf("ERRO.tente novamente.\n");
            }
        }
    count2 = 1;
    }
    count = 1;
    
    return 0;
}

int calculoFatorial(int n)
{
    int resultadoFatorial = 1;
    for (int i = 1; i < n + 1; i++)
    {
       resultadoFatorial *= i;
    }
    return resultadoFatorial;
}