/*
 * Programa: ex3.c
 * Descrição: Escreva um programa em C que realize o seguinte procedimento:
a. Imprima na tela a seguinte questão: Qual é o verdadeiro nome do super-herói Batman?
b. Apresente cinco alternativas para o usuário, cada uma em uma linha: a) Bruce Wayne b)
Clark Kent c) Peter Parker d) Tony Stark e) Steve Rogers
c. Armazene a letra correspondente à resposta correta (‘a’) em uma variável.
d. Solicite ao usuário que digite sua resposta, e a armazene em uma variável.
e. Ao final, o programa deve exibir na tela a resposta do usuário e a resposta correta. Por
exemplo, se o usuário digitou como resposta a alternativa ‘d’, a mensagem seria esta:
Você respondeu alternativa d. A resposta correta é a alternativa a.
 * Data de criação: 28.08.2024
 * Última modificação: 29.08.2024
 *
 * Observações:
 * - Realizei algumas modificacoes no projeto base para treinar algumas ferramentas que eu ja havia aprendido.
 */

#include <stdio.h>

int escolha(char valor);
int main()
{
    char valor;
    do
    {
        printf(": Qual eh o verdadeiro nome do super-heroi Batman?\n");
        printf("a) Bruce Wayne\nb)Clark Kent\nc) Peter Parker\nd) Tony Stark\ne) Steve Rogers\n");
        printf("faca sua escolha: ");
        scanf("%1c", &valor);
        getchar();
    } while (valor != 'a' && valor != 'b' && valor != 'c' && valor != 'd' && valor != 'e');

    escolha(valor);
    return 0;
}

int escolha(char valor)
{
    char certa = 'a';
    if (valor == certa)
    {
        printf("\nEsta correto!\n");
    }
    else
    {
        printf("\nEsta errado.\n");
        printf("A resposta certa eh: %c", certa);
    }
    return 0;
}
