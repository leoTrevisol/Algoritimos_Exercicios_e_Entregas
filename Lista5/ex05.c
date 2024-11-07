/*
 * Programa: ex5.c
 * Descrição:Uma empresa está monitorando o consumo de água em uma residência ao longo de um mês (30
dias). Para agilizar o preenchimento dos dados, faça o sorteio de valores entre 100 e 500 litros por
dia. Escreva um programa que:
a. Sorteie e armazene o consumo diário de água (em litros) em um vetor.
b. Calcule o consumo total do mês.
c. Calcule a média de consumo diário.
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

#define SIZE 30

int sorteioLitros();
int main()
{
    srand(time(0));

    int count = 1,option;
    int *vetorDiasMes = malloc(SIZE * sizeof(int));
    long int somaLitros = 0;
    int mediaLitros;
    while (count)
    {
        int maiorDia = 0,numbDia = 0;
        printf("Calculadora de consumo mensal de agua:\n1.Iniciar contagem.\n2.Sair.\n");
        scanf("%d",&option);
        getchar();
        if (option == 1)
        {
            for (int i = 0; i < SIZE; i++)
            {
                vetorDiasMes[i] = sorteioLitros();
                if (i == 0)
                {
                    maiorDia = vetorDiasMes[i];
                }
                if (vetorDiasMes[i] > maiorDia)
                {
                    maiorDia = vetorDiasMes[i];
                    numbDia = i + 1;
                }
                
                somaLitros += vetorDiasMes[i];
                printf("Dia %d:\n%d litros.\nPressione ENTER para o proximo dia.\n", i + 1,vetorDiasMes[i]);
                getchar();
            }
            mediaLitros = somaLitros/SIZE;
            printf("Leitura mensal realizada!\nTotal de litros gastos: %ld litros.\nMedia mensal: %d litros.\n", somaLitros,mediaLitros);
            printf("Maior consumo: DIA %d",numbDia);
            count = 0;
            
        }else if (option == 2)
        {
            printf("Vc saiu do programa.\n");
            count = 0;
        }else
        {
            printf("Opcao invalida.Digite novamente.");
        }
    }
free(vetorDiasMes);        

return 0;
}

int sorteioLitros(){
    int sorteio = 100 + rand() % 401;
    return sorteio;
}