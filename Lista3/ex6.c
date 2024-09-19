/*
 * Programa: ex6.c
 * Descrição:Brincadeira do PAR ou ÍMPAR. Pergunte para o usuário se ele aposta em PAR ou ÍMPAR. Depois
disso, peça para ele digitar um número de 0 a 5 (como se fosse mostrar os dedos da mão. Sorteie
um número de 0 a 5 e some com o que o usuário digitou. Se o usuário escolheu PAR e o valor da
soma for par OU se ele escolheu ÍMPAR e o valor da soma é ímpar, diga que ele venceu. Senão, diga
que o programa venceu
 * Autor: Leonardo Trevisol
 * Data de criação: 18.09.2024
 * Última modificação: 18.09.2024
 *
 * Observações:
 *
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 6

// fputs(parOuImpar,stdout);
int jogoPar(int valor);
int jogoImpar(int valor);
int main()
{
    srand(time(0));
    char parOuImpar[SIZE];
    int trueOrFalse = 1, n;

    while (trueOrFalse)
    {
        printf("Escolha ente PAR ou IMPAR: ");
        if (fgets(parOuImpar, SIZE, stdin) != NULL)
        {
            parOuImpar[strcspn(parOuImpar, "\n")] = '\0';

            if (strcmp(parOuImpar, "PAR") != 0 && strcmp(parOuImpar, "IMPAR") != 0)
            {
                printf("Entrada inválida. Tente novamente.\n");
            }
            else
            {
                trueOrFalse = 0;
            }
        }
        else
        {
            printf("Erro na leitura.\n");
        }
    }
    int cont = -1;
    while (cont > 5 || cont < 0)
    {
        printf("Digite um numero entre 1 e 5: ");
        scanf("%d", &cont);
    }
    if (strcmp(parOuImpar, "PAR") == 0)
    {
        n = jogoPar(cont);
        if (n == 1)
        {
            printf("Vc Perdeu!");
        }
        else
        {
            printf("Vc Ganhou!");
        }
    }
    else
    {
        n = jogoImpar(cont);
        if (n == 1)
        {
            printf("Vc Perdeu!");
        }
        else
        {
            printf("Vc Ganhou!");
        }
    }

    return 0;
}
int jogoImpar(int valor)
{

    int ganhaOuPerde;
    int numberMachine = rand() % 6;

    if ((valor + numberMachine) % 2 == 0)
    {
        ganhaOuPerde = 1;
    }
    else
    {
        ganhaOuPerde = 0;
    }
    printf("O adversario jogou o numero %d\nVc jogou %d\nA soma eh %d\n", numberMachine, valor, valor + numberMachine);
    return ganhaOuPerde;
}
int jogoPar(int valor)
{
    int ganhaOuPerde;
    int numberMachine = rand() % 6;

    if ((valor + numberMachine) % 2 != 0)
    {
        ganhaOuPerde = 1;
    }
    else
    {
        ganhaOuPerde = 0;
    }
    printf("O adversario jogou o numero %d\nVc jogou %d\nA soma eh %d\n", numberMachine, valor, valor + numberMachine);
    return ganhaOuPerde;
}