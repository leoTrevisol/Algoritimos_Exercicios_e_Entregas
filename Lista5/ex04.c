/*
 * Programa: ex4.c
 * Descrição:Uma pessoa está monitorando quantos passos ela dá por dia em uma semana. Escreva um
programa que:
a. Leia e armazene o número de passos dados em cada um dos 7 dias da semana.
b. Calcule o total de passos dados na semana.
c. Calcule a média diária de passos.
d. Verifique se a pessoa conseguiu atingir a meta de 10.000 passos em algum dos dias. Se sim,
informe quais dias a meta foi alcançada.
 * Autor: Leonardo Trevisol
 * Data de criação: 30.10.2024
 * Última modificação: 30.10.2024
 *
 * Observações:
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 7

int medicaoDiaria();
int main()
{
    int count = 1;

    while (count)
    {
        int count2 = 1, option;
        int *vetorDiasSemana = malloc(SIZE * sizeof(int));
        char nomeDias[SIZE][4] = {"SEG", "TER", "QUA", "QUI", "SEX", "SAB", "DOM"};

        while (count2)
        {
            printf("Bem vindo ao contador de passos 2000!\n1.Comecar a contagem semanal.\n2.Sair.\n");
            scanf("%d", &option);
            getchar();
            if (option == 1)
            {
                int diasMeta = 0;
                for (int i = 0; i < SIZE; i++)
                {
                    vetorDiasSemana[i] = medicaoDiaria();
                    printf("%s: %d passos.\n", nomeDias[i], vetorDiasSemana[i]);
                    if (vetorDiasSemana[i] >= 10000)
                    {
                        printf("Vc alcancou a meta diaria de 10k passos!\n");
                        diasMeta++;
                    }
                    if (i == 5)
                    {
                        printf("Pressione ENTER para continuar para o ultimo dia.\n");
                    }else if (i == 6)
                    {
                        printf("Fim da semana!Pressione ENTER Para os resultados finais.\n");
                    }
                    else
                    {
                        printf("Pressione ENTER para continuar para o proximo dia.\n");
                    }
                    getchar();
                }
                long long int totalPassos = 0;
                long int mediaPassos;

                for (int i = 0; i < SIZE; i++)
                {
                    totalPassos += vetorDiasSemana[i];
                }
                mediaPassos = totalPassos / SIZE;
                printf("Total de passos dados na semana: %lld passos.\n", totalPassos);
                printf("Media diaria de passos: %ld passos.\n", mediaPassos);
                printf("Dias que a meta de passos foi batida: %d dias\nFIM!\n",diasMeta);
            }
            else if (option == 2)
            {
                printf("Vc encerrou a contagem!");
                count2 = 0;
                count = 0;
            }
        }
        free(vetorDiasSemana);
    }
    
    return 0;
}

int medicaoDiaria()
{
    int contagemPassos = rand();
    return contagemPassos;
}