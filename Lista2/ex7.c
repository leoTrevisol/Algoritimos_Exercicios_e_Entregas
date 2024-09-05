/*
 * Programa: ex7.c
 * Descrição: Um criador de pássaros deseja saber a quantidade de ração diária necessária para alimentar
seus pássaros. Cada pássaro consome 30 gramas de ração por dia. Escreva um programa que
leia o número de pássaros que o criador possui e calcule a quantidade total de ração
necessária por dia.
 * Autor: Leonardo Trevisol
 * Data de criação: 05.09.2024
 * Última modificação: 05.09.2024
 *
 * Observações:
 * - (null)
 */

#include <stdio.h>
#include <string.h>


float coversor(float real);
int main(){

    float totalDeRacao;
    int quantidadeDePassaros;
    
    printf("Digite a quantidade de passsaros: ");
    scanf("%d",&quantidadeDePassaros);

    totalDeRacao = coversor(quantidadeDePassaros);
    printf("Quantidade total de racao em gramas: %.2fg.",totalDeRacao);
    return 0;
}

float coversor(float passaros){

    float valorPorPassaro = 30;
    float conversao;
    conversao = passaros * valorPorPassaro;

    return conversao; 
}