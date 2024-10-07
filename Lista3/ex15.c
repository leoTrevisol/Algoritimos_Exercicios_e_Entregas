/*
 * Programa: ex15.c
 * Descrição:Elabore um algoritmo que calcule o que deve ser pago por um produto, considerando o preço
normal de etiqueta e a escolha da condição de pagamento. Utilize os códigos da tabela a seguir
para ler qual a condição de pagamento escolhida e efetuar o cálculo adequado.
1 - À vista em dinheiro, recebe 15% de desconto
2 - À vista no cartão de crédito, recebe 10% de desconto
3 - Em duas vezes, preço normal de etiqueta sem juros
4 - Em três vezes, preço normal de etiqueta mais juros de 10%
 * Autor: Leonardo Trevisol
 * Data de criação: 07.10.2024
 * Última modificação: 07.10.2024
 *
 * Observações:
 *
 */

#include <stdio.h>
#include <stdlib.h>

float tiposDePagamento(float valorProd,int tipoPag);
int main()
{
    float valorProduto,valorFinal;
    int count = 1,menuOpcoes,metodoPagamento,count2 = 1;

    while (count)
    {
        printf("1.Iniciar venda\n2.Sair\n\n");
        scanf("%d",&menuOpcoes);
        if ( menuOpcoes != 1 && menuOpcoes != 2)
        {
            printf("Opcao invalida.Digite novamente.\n");
        }else if (menuOpcoes == 1)
        {
        while (count2)
        {
            printf("Digite o valor do produto:R$");
            scanf("%f",&valorProduto);
            if (valorProduto < 0)
            {
                printf("Valor invalido.Tente novamente.");
            }else
            {
                count2 = 0;
            }
        }
        count2 = 1;
        while (count2)
        {
            printf("Metodo de pagamento:\n1.Dinheiro\n2.Credito - 1 vez\n3.Credito - 2 vezes\n4.Credito - 3 vezes.\n");
            scanf("%d",&metodoPagamento);
            if (metodoPagamento < 1 || metodoPagamento > 4)
            {
                printf("Opcao invalida.Digite novamente.");
            }else
            {
                count2 = 0;
            }
        }
        count2 = 1;
        valorFinal = tiposDePagamento(valorProduto,metodoPagamento);
        printf("Valor final da venda foi de:R$%.2f\n\n",valorFinal);
        }else
        {
            printf("Voce saiu!\nFIM.\n");
            count = 0;
        }    
    }

    return 0;
}

float tiposDePagamento(float valorProd,int tipoPag){

    float valorComDesconto;

    if (tipoPag == 1)
    {
        valorComDesconto = valorProd * (1 - 0.15);
    }else if (tipoPag == 2)
    {
        valorComDesconto = valorProd * (1 - 0.10);
    }else if (tipoPag == 3)
    {
        valorComDesconto = valorProd;
    }else
    {
        valorComDesconto = valorProd * 1.1;
    }
    
    return valorComDesconto;
}