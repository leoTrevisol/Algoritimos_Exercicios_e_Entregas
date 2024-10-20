/*
 * Programa: CorridaDeHamsters.c
 * Descrição: Corrida de hamsters.
 * Autor: Leonardo Trevisol
 * Data de criação: 19.10.2024
 * Última modificação: 19.10.2024
 *
 * Observações:
 * - Usei o auxilio do chatgpt para entender o funcinamento da funcao memset, que preenche uma determinada qntde do array pelo caracter desejado.
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 12

void corridaPrincipal();
int posicaoA();
int posicaoB();
int main()
{
    srand(time(0));

    int count = 1, option;

    while (count)
    {
        printf("1.Iniciar Corrida\n2.Sair\n");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            corridaPrincipal();
            break;
        case 2:
            printf("FIM.");
            count = 0;
            break;
        }
    }
    return 0;
}

void corridaPrincipal()
{
    int count = 1, rodada = 1;
    int posicaoHamsterA = 0, posicaoHamsterB = 0;
    char *posicaoHA = (char *)malloc(SIZE * sizeof(char));
    char *posicaoHB = (char *)malloc(SIZE * sizeof(char));
    
    while (count)
    {
        int nextRound;
        printf("Rodada %d:\n", rodada);
        posicaoHamsterA += posicaoA();
        posicaoHamsterB += posicaoB();
        if (posicaoHamsterA >= SIZE)
        {
            printf("O hamster A venceu!\n");

            break; // ou count = 0;
        }
        else if (posicaoHamsterB >= SIZE)
        {
            printf("O hamster B venceu!\n");

            break; // ou count = 0;
        }
        memset(posicaoHA,' ', SIZE);
        memset(posicaoHB,' ', SIZE);
        for (int i = 0; i < posicaoHamsterA; i++)
            posicaoHA[i] = '*';

        for (int i = 0; i < posicaoHamsterB; i++)
            posicaoHB[i] = '*';
        printf("Hamster A: ");
        printf("%.*s\n", SIZE, posicaoHA);
        
        printf("Hamster B: ");
        printf("%.*s\n", SIZE, posicaoHB);
        rodada++;
        
        printf("1.Proxima rodada\n(qualquer outro inteiro).Sair\n");
        scanf("%d", &nextRound);
        if (nextRound == 1)
        {
            continue;
        }else
        {
            break;
        }
        
        
    }
    free(posicaoHA);
    free(posicaoHB);
}

int posicaoA()
{
    int posicao = 0;
    int sorteio = 1 + (rand() % 5);
    if (sorteio == 1)
    {
        posicao = 1;
    }
    else if (sorteio == 2)
    {
        posicao = 2;
    }
    else if (sorteio == 3)
    {
        posicao = 0;
    }
    else if (sorteio == 4)
    {
        posicao = -1;
    }
    else if (sorteio == 5)
    {
        posicao = -2;
    }
    return posicao;
}

int posicaoB()
{
    int posicao = 0;
    int sorteio = 1 + (rand() % 5);
    if (sorteio == 1)
    {
        posicao = 1;
    }
    else if (sorteio == 2)
    {
        posicao = 2;
    }
    else if (sorteio == 3)
    {
        posicao = 0;
    }
    else if (sorteio == 4)
    {
        posicao = -1;
    }
    else if (sorteio == 5)
    {
        posicao = -2;
    }
    return posicao;
}