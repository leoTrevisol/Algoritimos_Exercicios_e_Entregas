/*
 * Programa: ex6.c
 * Descrição:Em um jogo com 5 rodadas e 4 jogadores, cada jogador começa com 0 pontos. Escreva um
programa que:
a. Crie um vetor de 4 elementos, onde cada posição do vetor representa a pontuação
acumulada de um jogador.
b. A cada rodada, sorteie a pontuação para cada jogador (valores entre 0 e 100).
c. Atualize o vetor de pontuação acumulada com a soma da pontuação de cada rodada.
d. Ao final de cada rodada, verifique se algum jogador fez mais de 80 pontos e exiba uma
mensagem de "Rodada de Destaque" para esse jogador.
e. Ao final das 5 rodadas, exiba a pontuação total de cada jogador.
f. Informe qual jogador venceu, ou se houve empate (o jogador com a maior pontuação).
 * Autor: Leonardo Trevisol
 * Data de criação: 06.11.2024
 * Última modificação: 06.11.2024
 *
 * Observações:
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RODADAS 5

struct player
{
    char playerName[50];
    char playerTag[3];
};

int main()
{

    int count = 1;

    while (count)
    {
        int option;
        int qntPlayers;
        printf("Jogo dos Pontos!\n1.Iniciar\n2.Sair\n");
        scanf("%d", &option);
        if (option != 1 && option != 2)
        {
            printf("Opcao invalida!Tente novamente.\n");
        }
        else if (option == 1)
        {
            int count2 = 1;
            while (count2)
            {
                printf("Escolha a quantidade de jogadores(1 a 4): ");
                scanf("%d ", &qntPlayers);
                if (qntPlayers <= 0 && qntPlayers > 4)
                {
                    printf("Opcao invalida!Tente novamente.\n");
                }
                else
                {
                    int *somaPontos = malloc(qntPlayers* sizeof(int));
                    for (int i = 0; i < qntPlayers; i++)
                    {
                        somaPontos[i] = 0;
                    }
                    printf("Digite o nome do player 1:");
                    fgets()

                    free(somaPontos);
                }
            }
        }
        else
        {
            printf("Adeus!\n");
            count = 0;
        }
    }    
    return 0;
}