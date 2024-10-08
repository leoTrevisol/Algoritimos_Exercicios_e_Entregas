/*
 * Programa: ex1.c
 * Descrição: . Faça um algoritmo para:
a. Gerar e escrever todos os números inteiros do intervalo [0,100].
b. Gerar e escrever os números pares do intervalo [20,50].
c. Gerar e escrever os números inteiros do intervalo [25,70] em ordem decrescente.
d. Gerar e escrever os números ímpares do intervalo [25,95] em ordem decrescente.
e. Ler 15 números e escrever a soma e a média dos números lidos.
f. Ler 10 números inteiros e escrever a quantidade de números pares e a quantidade de números
ímpares lidos.
g. Sortear 20 números inteiros entre -10 e 10 e imprimi-los acompanhados da mensagem
“POSITIVO”, “NEGATIVO”, ou “NULO”, conforme o caso. No final, imprimir a quantidade de
números positivos e negativos lidos.
h. Ler n números e imprimir no final a soma dos números lidos (obs.: n é a quantidade de números
que deverão ser lidos e também deve ser lido do teclado)
 * Autor: Leonardo Trevisol
 * Data de criação: 7.10.2024
 * Última modificação: 7.10.2024
 *
 * Observações:
 * - Por que n eh possivel colocar a comando break em um laço if/else?(n consegui far isso).
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
srand(time(0));
//a)
    printf("\na) Gerar e escrever todos os numeros inteiros do intervalo [0,100].\n");
    for (int i = 0; i <= 100; i++)
    {
        printf("%d ",i);
    }
    printf("\n");
    
//b)
    printf("\nb) Gerar e escrever os numeros pares do intervalo [20,50].\n");
    for (int i = 20; i <= 50; i = i + 2)
    {
        printf("%d ",i);
    }
    printf("\n");

//c)
    printf("\nc) Gerar e escrever os numeros inteiros do intervalo [25,70] em ordem decrescente.\n");
    for (int i = 70; i >= 25; i--)
    {
        printf("%d ",i);
    }
    printf("\n");

//d)
    printf("\nd) Gerar e escrever os numeros impares do intervalo [25,95] em ordem decrescente.\n");
    for (int i = 95; i >= 25; i = i - 2)
    {
        printf("%d ",i);
    }
    printf("\n");
//e)
    int a[15],somaNumeros = 0;
    float media = 0;
    printf("\ne) Ler 15 numeros e escrever a soma e a media dos numeros lidos.\n");
    for (int i = 0; i < 15; i++)
    {
        a[i] = rand() % 100;
        somaNumeros += a[i];
    }
    media = somaNumeros/ 15;
    printf("Numeros lidos:\n");
    for (int i = 0; i < 15; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("Media dos 15 numeros: %.1f",media);
    printf("\n");
//f)
    printf("\nf) Ler 10 numeros inteiros e escrever a quantidade de numeros pares e a quantidade de numeros impares lidos.\n");
    int b[10];
    for (int i = 0; i < 11; i++)
    {
        b[i] = rand() % 100;
    }
    printf("Numeros lidos:\n");
    for (int i = 0; i < 10; i++)
    {
        if (b[i] % 2 == 0)
        {
            printf("%d - PAR.\n",b[i]);
        }else
        {
            printf("%d - IMPAR.\n",b[i]);
        }
    }
    printf("\n");
//g)
    printf("\ng) Sortear 20 numeros inteiros entre -10 e 10 e imprimi-los acompanhados da mensagem “POSITIVO”, “NEGATIVO”, ou “NULO”, conforme o caso. No final, imprimir a quantidade de numeros positivos e negativos lidos.\n");
    int c[20];
    for (int i = 0; i < 20; i++)
    {
        c[i] = - 10 + rand() % 100;
    }
    printf("Numeros lidos:\n");
    for (int i = 0; i < 20; i++)
    {
        if (c[i] == 0)
        {
            printf("%d - NULO.\n",c[i]);
        }else if(c[i] >= 0)
        {
            printf("%d - POSITIVO.\n",c[i]);
        }else
        {
            printf("%d - NEGATIVO.\n",c[i]);
        }
    }
    printf("\n");    
//h)
    printf("\nh) Ler n numeros e imprimir no final a soma dos numeros lidos (obs.: n eh a quantidade de numeros que deverao ser lidos e tambem deve ser lido do teclado)\n");
    int n; 
    n = rand() % 100;
    int d[n],soma = 0;
    printf("Numeros lidos:\n");
    for (int i = 0; i < n; i++)
    {
        d[i] = rand() % 100;
        soma += d[i];
        printf("%d ",d[i]);
    }
    printf("\nSoma: %d",soma);
    printf("\n");
    
   
   
    return 0;
}