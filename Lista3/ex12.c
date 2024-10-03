/*
 * Programa: ex12.c
 * Descrição:A confederação brasileira de natação irá promover eliminatórias para o próximo mundial. Fazer um
algoritmo que receba a idade de um nadador e imprima a sua categoria segundo a tabela a seguir:
Categoria Idade
Infantil A 5-7 anos
Infantil B 8-10 anos
Juvenil A 11-13 anos
Juvenil B 14-17 anos
Sênior Maiores de 18 anos
 * Autor: Leonardo Trevisol
 * Data de criação: 25.09.2024
 * Última modificação: 25.09.2024
 *
 * Observações:
 *
 */

#include <stdio.h>

void verificadorIdade(int ageAth);
int main()
{
    int count = 1, idadeAtleta;
    while(count){
    printf("CADASTRO PARA ELIMINATORIAS DO MUNDIAL DE NATACAO.\n\n");
    printf("Digite a idade do nadador: ");
    scanf("%d",&idadeAtleta);
    if (idadeAtleta <= 4)
    {
        printf("Idade indisponivel.\n");
    }else{ 
    verificadorIdade(idadeAtleta);
    printf("\nPara sair digite 0.\nPara realizar outro cadastro digite 1.\n");
    scanf("%d",&count);
    }
    }

    return 0;
}

void verificadorIdade(int ageAth){

    if (ageAth <= 7)
    {
        printf("A categoria do atleta eh Infantil A.");
    }
    else if (ageAth <= 10)
    {
        printf("A categoria do atleta eh Infantil B.");
    }
    else if (ageAth <= 13)
    {
        printf("A categoria do atleta eh Juvenil A.");
    }
    else if (ageAth <= 17)
    {
        printf("A categoria do atleta eh Juvenil B.");
    }
    else
    {
        printf("A categoria do atleta eh Sênior.");
    }
    
}
