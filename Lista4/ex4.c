/*
 * Programa: ex4.c
 * Descrição:Escrever um programa que calcule todos os números divisíveis por certo valor indicado pelo usuário (o
resto da divisão por este número deve ser igual a zero), compreendidos em um intervalo também
especificado pelo usuário. O usuário deve entrar com um primeiro valor correspondente ao divisor e
após ele vai fornecer o valor inicial do intervalo, seguido do valor final deste intervalo.
 Exemplo de tela de saída:
Entre com o valor do divisor: 3
Início do intervalo: 17
Final do intervalo: 29
Números divisíveis por 3 no intervalo de 17 a 29:
18 21 24 27
 * Autor: Leonardo Trevisol
 * Data de criação: 9.10.2024
 * Última modificação: 9.10.2024
 *
 * Observações:
 * - Usei ponteiros para treinar.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *calculoDivisiveis(int numero, int intervMenor, int intervMaior, int *size);
int main()
{
   int numeroDivisor, intervalo1, intervalo2;
   int *listaDivisores;
   int tamanho;

   printf("Entre com o valor do divisor:");
   scanf("%d", &numeroDivisor);
   printf("Inicio do itervalo:");
   scanf("%d", &intervalo1);
   printf("Fim do itervalo:");
   scanf("%d", &intervalo2);
   listaDivisores = calculoDivisiveis(numeroDivisor, intervalo1, intervalo2, &tamanho);
   printf("Numero divisiveis por %d no intervalo de %d a %d:\n", numeroDivisor, intervalo1, intervalo2);
   for (int i = 0; i < tamanho; i++)
   {
      printf("%d ", listaDivisores[i]);
   }
   free(listaDivisores);
   return 0;
}
int *calculoDivisiveis(int numero, int intervMenor, int intervMaior, int *size)
{

   int count = 0;
   for (int i = intervMenor; i <= intervMaior; i++)
   {
      if (i % numero == 0)
      {
         count++;
      }
   }

   int *vetorDivisores = (int *)malloc(count * sizeof(int));
   *size = count;
   int j = 0;
   for (int i = intervMenor; i <= intervMaior; i++)
   {

      if (i % numero == 0)
      {
         vetorDivisores[j++] = i;
      }
   }

   return vetorDivisores;
}