/*
 * Programa: ex5.c
 * Descrição: Um motorista deseja encher o tanque do seu carro com gasolina. Escreva um algoritmo para
ler o preço do litro da gasolina e o valor que o motorista tem disponível para abastecer.
Calcule quantos litros ele conseguiu colocar no tanque e exiba na tela.
 * Autor: Leonardo Trevisol
 * Data de criação: 05.09.2024
 * Última modificação: 05.09.2024
 *
 * Observações:
 * - (null)
 */

#include <stdio.h>
#include <string.h>


float coversor(float valorGasolina,float valorDisponivel);
int main(){

    float valorDisponivel,valorConvertido,valorGasolina;
    
    printf("Digite o valor do litro da gasolina: ");
    scanf("%f",&valorGasolina);
    printf("Digite o valor - em reais - disponivel: ");
    scanf("%f",&valorDisponivel);

    valorConvertido = coversor(valorGasolina,valorDisponivel);
    printf("Vc pode colocar: %.2f litros.",valorConvertido);
    return 0;
}

float coversor(float valorGasolina,float valorDisponivel){

    float conversao;
    conversao = valorDisponivel / valorGasolina;

    return conversao; 
}
