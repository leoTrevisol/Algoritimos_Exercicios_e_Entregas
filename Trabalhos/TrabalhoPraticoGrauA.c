/*
 * Programa: TrabalhoPraticoGrauA.c
 * Descrição: Simulacao de crescimento bacteriano.
 * Autor: Leonardo Trevisol
 * Data de criação: 15.10.2024
 * Última modificação: 15.10.2024
 *
 * Observações:
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float variavelDeAmbiente();
void simulacaoCrescimento(int popInicial, int txCresc, int ciclos);
int main()
{
    srand(time(0));

    int count = 1;

    while (count)
    {
        int count2 = 1, opcao;
        while (count2)
        {
            int populacaoInicial = -1, taxaCrescimento = -1, numeroCiclos = -1;
            printf("\nMENU INICIAL.\n\n1.Nova Simulacao\n2.Sair do Programa\n");
            scanf("%d", &opcao);
            if (opcao == 1)
            {
                while (populacaoInicial < 0)
                {
                    printf("Populacao inicial de bacterias(inteiro positivo):");
                    scanf("%d", &populacaoInicial);
                }
                while (taxaCrescimento < 0)
                {
                    printf("Taxa de crescimento(inteiro positivo):");
                    scanf("%d", &taxaCrescimento);
                }
                while (numeroCiclos < 0)
                {
                    printf("Numero de ciclos(inteiro positivo):");
                    scanf("%d", &numeroCiclos);
                }

                simulacaoCrescimento(populacaoInicial, taxaCrescimento, numeroCiclos);
            }
            else if (opcao == 2)
            {
                count = 0;
                count2 = 0;
            }
            else
            {
                printf("Opcao invalida.Tente novamente.");
            }
        }
        count2 = 1;
    }
    count = 1;
    return 0;
}

void simulacaoCrescimento(int popInicial, int txCresc, int ciclos)
{
    int populacaoFinal = 0;
    float variavelAmbiental = 1;
    for (int i = 0; i < ciclos; i++)
    {
        populacaoFinal = popInicial + (popInicial * (txCresc / 100));
        popInicial += populacaoFinal;
        variavelAmbiental = variavelDeAmbiente();
        populacaoFinal *= variavelAmbiental;
        if (variavelAmbiental == 1)
        {
            printf("Ciclo %d: Populacao = %d\n", i + 1, populacaoFinal);
        }
        else if (variavelAmbiental == 0.3)
        {
            printf("Ciclo %d: Populacao = %d (condicao adversa: Alta Temperatura!)\n", i + 1, populacaoFinal);
        }
        else if (variavelAmbiental == 0.25)
        {
            printf("Ciclo %d: Populacao = %d (condicao adversa: Falta de Nutrientes!)\n", i + 1, populacaoFinal);
        }
        else if (variavelAmbiental == 0.2)
        {
            printf("Ciclo %d: Populacao = %d (condicao adversa: Excesso de Umidade!)\n", i + 1, populacaoFinal);
        }
        else if (variavelAmbiental == 0.5)
        {
            printf("Ciclo %d: Populacao = %d (condicao adversa: Radiacao Ultravioleta!)\n", i + 1, populacaoFinal);
        }
        else
        {
            printf("Ciclo %d: Populacao = %d (Condicoes Favoraveis!)\n", i + 1, populacaoFinal);
        }
        if (populacaoFinal <= 0)
        {
            break;
        }
    }
    printf("\nSimulacao concluida. Populacao final: %d\n", populacaoFinal);
}

float variavelDeAmbiente()
{
    float altaTemp = 0.3, faltNutr = 0.25, excUmid = 0.2, radUlt = 0.5, condFav = 1.2, nada = 1;
    int numeroSorteado = rand() % 100;

    if (numeroSorteado < 40)
    {
        return nada;
    }
    else if (numeroSorteado >= 40 && numeroSorteado < 60)
    {
        return altaTemp;
    }
    else if (numeroSorteado >= 60 && numeroSorteado < 70)
    {
        return excUmid;
    }
    else if (numeroSorteado >= 70 && numeroSorteado < 80)
    {
        return condFav;
    }
    else if (numeroSorteado >= 80 && numeroSorteado < 95)
    {
        return faltNutr;
    }
    else
    {
        return radUlt;
    }
}