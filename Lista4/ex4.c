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
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void calculoDivisiveis(int numero,int intervMenor,int intervMaior);
int main()
{
   int numeroDivisor,intervalo1,intervalo2;

   printf("Entre com o valor do divisor:");
   scanf("%d",&numeroDivisor);
   printf("Inicio do itervalo:");
   scanf("%d",&intervalo1);
   printf("Fim do itervalo:");
   scanf("%d",&intervalo2);
   calculoDivisiveis(numeroDivisor,intervalo1,intervalo2);
return 0;
}
void calculoDivisiveis(int numero,int intervMenor,int intervMaior){

   
}