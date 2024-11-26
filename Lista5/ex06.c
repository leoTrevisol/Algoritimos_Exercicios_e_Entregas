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
#define JOGADORES 4

int sorteioPontos();
int main()
{
    srand(time(0));
    int pontuacaoJogadores[JOGADORES] = {0,0,0,0};
    printf("JOGO DOS PONTOS.\nPresione ENTER para iniciar.\n");
    getchar();
    for (int i = 0; i < RODADAS; i++)
    {
        int number[JOGADORES] = {0,0,0,0};
        for (int i = 0; i < JOGADORES; i++)
        {
            number[i] = sorteioPontos();
            pontuacaoJogadores[i] += number[i];
             
        }
        printf("Rodada %d:\n",i + 1);
        for (int i = 0; i < JOGADORES; i++)
        {
            printf("P%d: %d ",i + 1,pontuacaoJogadores[i]);
        }
        printf("\n");
        for (int i = 0; i < JOGADORES; i++)
        {
            if (number[i] > 80)
            {
                printf("Rodada destaque: P%d - %d pontos.\n",i + 1,number[i]);
            }
            
        }
        
        printf("\nPresione ENTER para continuar.\n");
        getchar();
    }

    printf("PONTUACAO FINAL:\n");
    for (int i = 0; i < JOGADORES; i++)
    {
        printf("Jogador %d: %d pontos.\n",i + 1,pontuacaoJogadores[i]);
    }

    int pontuacaoVencedor = 0,jogadorVencedor = 0;
    for (int i = 0; i < JOGADORES; i++)
    {
        if (pontuacaoVencedor < pontuacaoJogadores[i])
        {
            pontuacaoVencedor = pontuacaoJogadores[i];
            jogadorVencedor = i + 1;
        }
    }

    printf("JOGADOR VENCEDOR: P%d - %d pontos.\nFIM.\n",jogadorVencedor,pontuacaoVencedor);
    
   return 0;
}

int sorteioPontos()
{
    int number = rand() % 101;
    return number;
}