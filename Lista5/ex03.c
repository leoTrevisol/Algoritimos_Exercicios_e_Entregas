/*
 * Programa: ex3.c
 * Descrição:Faça um programa para testar se um dado é viciado. Faça o lançamento N vezes (N é um número
lido pelo usuário, pode ser um número bem grande), armazene cada valor que for sorteado em um
array com 6 posições e ao final imprima o percentual do resultado de cada face.
 * Autor: Leonardo Trevisol
 * Data de criação: 27.10.2024
 * Última modificação: 27.10.2024
 *
 * Observações:
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 6

void percentagemDados(int qnt,int numb1,int numb2,int numb3,int numb4,int numb5,int numb6);
int sorteioDado();
int main()
{
 
int qntdDado;
printf("Digite a quantidade de vezes que desejas jogar o dado:");
scanf("%d",&qntdDado);
int d1 = 0,d2 = 0,d3 = 0,d4 = 0,d5 = 0,d6 = 0;
int vetorDados[SIZE] = {d1,d2,d3,d4,d5,d6};
for (int i = 0; i < qntdDado; i++)
{
   int valorDado = sorteioDado();
   if (valorDado == 1)
   {
    d1++;
   }else if (valorDado == 2)
   {
    d2++;
   }else if (valorDado == 3)
   {
    d3++;
   }else if (valorDado == 4)
   {
    d4++;
   }else if (valorDado == 5)
   {
    d5++;
   }else
   {
    d6++;
   }
}
percentagemDados(qntdDado,d1,d2,d3,d4,d5,d6);
return 0;
}
int sorteioDado()
{
    int numbSorteado = 1 + rand() % 6;
    return numbSorteado;
}
void percentagemDados(int qnt,int numb1,int numb2,int numb3,int numb4,int numb5,int numb6)
{
    


}