/*
 * Programa: ex8.c
 * Descrição: Um comerciante comprou um produto e quer vendê-lo com lucros diferentes dependendo do valor
da compra. Ele quer um lucro de 45% se o valor da compra for menor que R$ 20,00, 35% se o preço
for de até 50 reais e lucro de 25% se valor for maior. Entrar com o valor do produto e imprimir na
tela o valor de venda.
 * Autor: Leonardo Trevisol
 * Data de criação: 21.09.2024
 * Última modificação: 21.09.2024
 *
 * Observações:
 *
 */

#include <stdio.h>

float lucroPerc(float custoDoProd);
int main()
{
    float valorDoProduto, valorLucroFinal;
    printf("Digite o valor do produto:R$");
    scanf("%f", &valorDoProduto);
    valorLucroFinal = lucroPerc(valorDoProduto);
    printf("Esse produto de R$%.2f deve ser vendido a R$%.2f.\n", valorDoProduto, valorLucroFinal);
    return 0;
}

float lucroPerc(float custoDoProd)
{

    float valorDeVenda;

    valorDeVenda = custoDoProd < 20 ? custoDoProd * 1.45 : custoDoProd >= 20 && custoDoProd < 50 ? custoDoProd * 1.35 : custoDoProd * 1.25;
    return valorDeVenda;
}