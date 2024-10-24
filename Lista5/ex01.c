/*
 * Programa: ex1.c
 * Descrição:Implemente um programa que sorteia um número de 1 a 10 e dá ao usuário 3 tentativas de acertá-lo.
A cada tentativa errada, o programa informa se o número a adivinhar está abaixo ou acima.
 * Autor: Leonardo Trevisol
 * Data de criação: 23.10.2024
 * Última modificação: 23.10.2024
 *
 * Observações:
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10
int main()
{
    srand(time(0));

    int v[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        v[i] = 10 + (rand() % 90);
    }

    // a)
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\n");

    // b)
    for (int i = 0; i < SIZE; i++)
    {
        if (v[i] == 50)
        {
            printf("Tem o numero 50!\n");
        }
    }
    // c)
    int vezes = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (v[i] == 50)
        {
            vezes++;
        }
    }
    if (vezes == 1)
    {
        printf("%d vez.\n", vezes);
    }
    else
    {
        printf("%d vezes.\n", vezes);
    }

    // d)
    int soma = 0;
    float media = 0;
    for (int i = 0; i < SIZE; i++)
    {
        soma += v[i];
    }
    printf("%d \n", soma);
    media = (float)soma / (float)SIZE;
    printf("Media do array: %.2f\n", media);

    // e)
    int maiorValor;
    for (int i = 0; i < SIZE; i++)
    {
        if (v[i] > maiorValor)
        {
            maiorValor = v[i];
        }
    }
    printf("Maior valor: %d\n", maiorValor);

    // f)
    long long int produto = 1;
    for (int i = 0; i < SIZE; i++)
    {
        produto *= v[i];
    }
    printf("SOMA: %d\nPRODUTO: %lld\n", soma, produto);
    // h)
    int vetorInverso[SIZE];
    int j = SIZE;
    for (int i = 0; i < SIZE; i++)
    {
        vetorInverso[j] = v[i];
        j--;
    }
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", vetorInverso[i]);
    }

    printf("\n");
    

    // i)
    int vPares[SIZE], vImpares[SIZE];
    int j = 0,k = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (v[i] % 2 == 0)
        {
            vPares[j] = v[i];
            j++;
        }
        else
        {
            vImpares[k] = v[i];
            k++;
        }
    }
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", vPares[i]);
    }
    printf("\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", vImpares[i]);
    }
    printf("\n");

    return 0;
}