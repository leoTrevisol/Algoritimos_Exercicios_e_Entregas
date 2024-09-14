/*
 * Programa: ex1.c
 * Descrição: Encontrar o dobro de um número caso ele seja positivo e o seu triplo caso seja negativo, imprimindo
o resultado.
 * Autor: Leonardo Trevisol
 * Data de criação: 11.09.2024
 * Última modificação: 11.09.2024
 *
 * Observações:
 *
 */

#include <stdio.h>


int contador(int valor);
int main()
{

    int valorInteiro, valorFinal;

    printf("Digite um inteiro: ");
    scanf("%d", &valorInteiro);

    contador(valorInteiro);
    
    return 0;
}

int contador(int valor)
{

    int valor2;

     valor2 = (valor >= 0) ? valor*2 : valor*3;
    printf("%d",valor2);
}