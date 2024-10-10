/*
 * Programa: ex3.c
 * Descrição:Elabore um programa que lê um número de 1 a 9 e mostra a tabuada de multiplicação do número.
Exemplo de tela de saída:
Entre com um número: 5
5 x 1 = 5
5 x 2 = 10
...
5 x 10 = 50
Calcular outro número (s/n)? n
 * Autor: Leonardo Trevisol
 * Data de criação: 9.10.2024
 * Última modificação: 9.10.2024
 *
 * Observações:
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n = 1, n2 = 1, numeroEscolido, n1, count = 10;
    while (n)
    {
        n = 1;
        n2 = 1;
        printf("Digite o numero que desejas ver a tabuada:");
        scanf("%d", &numeroEscolido);

        printf("TABUADA DO %d:\n", numeroEscolido);
        for (int i = 1; i <= count; i++)
        {
            printf("%d * %d = %d\n", numeroEscolido, i, numeroEscolido * i);
        }
        while (n2)
        {
            printf("Dejesas continuar?\n1.SIM\n2.NAO.\n");
            scanf("%d", &n1);
            if (n1 != 1 && n1 != 2)
            {
                printf("Opcao invalida.Tente Novamente.\n");
            }
            else if (n1 == 2)
            {
                n = 0;
                n2 = 0;
            }
            else if (n1 == 1)
            {
                n2 = 0;
            }
        }
    }
    printf("FIM.");

    return 0;
}