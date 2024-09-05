/*
 * Programa: ex2.c
 * Descrição: Escreva um programa em linguagem C que solicite o nome do usuário e, em seguida,
imprima uma mensagem de boas-vindas na tela, utilizando o nome fornecido. 
 * Autor: Leonardo Trevisol
 * Data de criação: 28.08.2024
 * Última modificação: 29.08.2024
 *
 * Observações:
 * - (null)
 */

#include <stdio.h>

int main()
{
    char nome[31];
    printf("Digite seu nome: ");
    printf("\n");
    scanf("%30s",nome);
    printf("Seja bem-vindo %s.",nome);

}