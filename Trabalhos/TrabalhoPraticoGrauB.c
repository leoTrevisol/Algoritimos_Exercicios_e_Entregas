/*
 * Programa: TrabalhoPraticoGrauB.c
 * Descrição: Sistema de gerenciamento de pocoes.
 * Autor: Leonardo Trevisol
 * Data de criação: 23.11.2024
 * Última modificação: 23.11.2024
 *
 * Observações:
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define INGREDIENTES 7
#define POCOES 5

typedef struct
{
    char nome[30];
    int quantidade;
} Ingrediente;

typedef struct
{
    char nome[30];
    int ingredientes[7];
    int quantidades[7];
} Pocao;

int main()
{
    int count = 1;
    Ingrediente tipo[INGREDIENTES];

    strcpy(tipo[0].nome, "Po de Fenix(g)");
    tipo[0].quantidade = 100;

    strcpy(tipo[1].nome, "Essencia Celestial(ml)");
    tipo[1].quantidade = 50;

    strcpy(tipo[2].nome, "Raiz de Dragao(g)");
    tipo[2].quantidade = 45;

    strcpy(tipo[3].nome, "Orvalho Lunar(ml)");
    tipo[3].quantidade = 30;

    strcpy(tipo[4].nome, "Flores secas(g)");
    tipo[4].quantidade = 200;

    strcpy(tipo[5].nome, "Elixir amargo(ml)");
    tipo[5].quantidade = 20;

    strcpy(tipo[6].nome, "Lagrimas de unicornio(ml)");
    tipo[6].quantidade = 15;

    Pocao potion[POCOES];

    strcpy(potion[0].nome, "Pocao de Cura ");

    potion[0].quantidades[0] = 30;
    potion[0].quantidades[1] = 20;
    potion[0].quantidades[2] = 0;
    potion[0].quantidades[3] = 0;
    potion[0].quantidades[4] = 20;
    potion[0].quantidades[5] = 0;
    potion[0].quantidades[6] = 10;

    strcpy(potion[1].nome, "Pocao Forca da Floresta");

    potion[1].quantidades[0] = 0;
    potion[1].quantidades[1] = 0;
    potion[1].quantidades[2] = 30;
    potion[1].quantidades[3] = 20;
    potion[1].quantidades[4] = 30;
    potion[1].quantidades[5] = 0;
    potion[1].quantidades[6] = 0;

    strcpy(potion[2].nome, "Pocao Sabedoria da Riqueza");

    potion[2].quantidades[0] = 50;
    potion[2].quantidades[1] = 30;
    potion[2].quantidades[2] = 0;
    potion[2].quantidades[3] = 0;
    potion[2].quantidades[4] = 0;
    potion[2].quantidades[5] = 0;
    potion[2].quantidades[6] = 0;

    strcpy(potion[3].nome, "Pocao Sorte no Amor");

    potion[3].quantidades[0] = 0;
    potion[3].quantidades[1] = 0;
    potion[3].quantidades[2] = 0;
    potion[3].quantidades[3] = 10;
    potion[3].quantidades[4] = 50;
    potion[3].quantidades[5] = 0;
    potion[3].quantidades[6] = 5;

    strcpy(potion[4].nome, "Pocao Malvada");

    potion[4].quantidades[0] = 0;
    potion[4].quantidades[1] = 0;
    potion[4].quantidades[2] = 15;
    potion[4].quantidades[3] = 0;
    potion[4].quantidades[4] = 0;
    potion[4].quantidades[5] = 10;
    potion[4].quantidades[6] = 0;

    while (count)
    {
        int option, count2 = 1, option2, option3, count3 = 1, count4 = 1, option4, reposicaoIngs = 0, count5 = 1;
        printf("\nBem-vindo ao PotionSysten3000,seu gerenciador de pocoes.\n");
        printf("MENU PRINCIPAL\n1.Consultar ingredientes disponiveis.\n2.Preparar pocao\n3.Reabastecer ingredientes.\n4.Sair.\n");
        scanf("%d", &option);
        if (option != 1 && option != 2 && option != 3 && option != 4)
        {
            printf("\nOpcao invalida.Tente novamente.\n");
        }
        else
        {
            switch (option)
            {
            case 1:
                printf("\nIngredientes disponiveis:\n");
                for (int i = 0; i < INGREDIENTES; i++)
                {
                    printf("Nome: %s\n", tipo[i].nome);
                    printf("Quantidade: %d\n", tipo[i].quantidade);
                }
                printf("\nPressione ENTER para ir ao Menu Principal.\n");
                getchar();
                getchar();
#ifdef _WIN32
                system("cls");
#else
                system("clear");
#endif
                break;
            case 2:
                while (count3)
                {
                    printf("|     | Pocao                      | Ingredientes Requeridos                                                                        |\n");
                    printf("\n");
                    printf("| 1   | Pocao de Cura              | Po de Fenix (30g), Essencia Celestial (20ml), Flores secas (20g), Lagimas de unicornio (10ml)  |\n");
                    printf("| 2   | Pocao Forca da Floresta    | Orvalho Lunar (20ml), Raiz de Dragao (30g), Flores secas (30g)                                 |\n");
                    printf("| 3   | Pocao Sabedoria da Riqueza | Essencia Celestial (30ml), Po de Fenix (50g)                                                   |\n");
                    printf("| 4   | Pocao Sorte no Amor        | Orvalho Lunar (10ml), Flores secas (50g), Lagimas de unicornio (5ml)                           |\n");
                    printf("| 5   | Pocao Malvada              | Elixir amargo (10ml), Raiz de Dragao (15g)                                                     |\n");
                    printf("\nQual pocao desejas criar?\nPara SAIR digite 6.\n");
                    scanf("%d", &option3);
                    if (option3 < 1 || option3 > 6)
                    {
                        printf("\nOpcao invalida.Tente novamente.\n");
                    }
                    else
                    {
                        switch (option3)
                        {
                        case 1:

                            for (int i = 0; i < INGREDIENTES; i++)
                            {
                                tipo[i].quantidade -= potion[0].quantidades[i];
                                if (tipo[i].quantidade < 0)
                                {

                                    count4 = 0;
                                }
                            }
                            if (count4 == 0)
                            {
                                printf("Nao foi possivel preparar a pocao. Ingredientes em falta:\n");
                                for (int i = 0; i < INGREDIENTES; i++)
                                {
                                    if (tipo[i].quantidade < 0)
                                    {
                                        tipo[i].quantidade += potion[0].quantidades[i];
                                        printf("%s: necessario %d, disponivel %d.\n", tipo[i].nome, potion[0].quantidades[i], tipo[i].quantidade);
                                    }
                                    else
                                    {
                                        tipo[i].quantidade += potion[0].quantidades[i];
                                    }
                                }
                            }
                            else
                            {
                                printf("\nPocao realizada com sucesso!\n\nEstoque atualizado:\n");
                                for (int i = 0; i < INGREDIENTES; i++)
                                {
                                    printf("%s: ", tipo[i].nome);
                                    printf("%d.\n", tipo[i].quantidade);
                                }
                            }
                            count4 = 1;
                            printf("\nPressione ENTER para voltar ao criador de pocoes.\n");
                            getchar();
                            getchar();
#ifdef _WIN32
                            system("cls");
#else
                            system("clear");
#endif
                            break;
                        case 2:

                            for (int i = 0; i < INGREDIENTES; i++)
                            {
                                tipo[i].quantidade -= potion[1].quantidades[i];
                                if (tipo[i].quantidade < 0)
                                {

                                    count4 = 0;
                                }
                            }
                            if (count4 == 0)
                            {
                                printf("Nao foi possivel preparar a pocao. Ingredientes em falta:\n");
                                for (int i = 0; i < INGREDIENTES; i++)
                                {
                                    if (tipo[i].quantidade < 0)
                                    {

                                        printf("%s: necessario %d, disponivel %d.\n", tipo[i].nome, potion[1].quantidades[i], tipo[i].quantidade);
                                    }
                                    else
                                    {
                                        tipo[i].quantidade += potion[0].quantidades[i];
                                    }
                                }
                            }
                            else
                            {
                                printf("\nPocao realizada com sucesso!\n\nEstoque atualizado:\n");
                                for (int i = 0; i < INGREDIENTES; i++)
                                {
                                    printf("%s: ", tipo[i].nome);
                                    printf("%d.\n", tipo[i].quantidade);
                                }
                            }
                            count4 = 1;
                            printf("\nPressione ENTER para voltar ao criador de pocoes.\n");
                            getchar();
                            getchar();
#ifdef _WIN32
                            system("cls");
#else
                            system("clear");
#endif
                            break;
                        case 3:

                            for (int i = 0; i < INGREDIENTES; i++)
                            {
                                tipo[i].quantidade -= potion[2].quantidades[i];
                                if (tipo[i].quantidade < 0)
                                {

                                    count4 = 0;
                                }
                            }
                            if (count4 == 0)
                            {
                                printf("Nao foi possivel preparar a pocao. Ingredientes em falta:\n");
                                for (int i = 0; i < INGREDIENTES; i++)
                                {
                                    if (tipo[i].quantidade < 0)
                                    {

                                        printf("%s: necessario %d, disponivel %d.\n", tipo[i].nome, potion[2].quantidades[i], tipo[i].quantidade);
                                    }
                                    else
                                    {
                                        tipo[i].quantidade += potion[0].quantidades[i];
                                    }
                                }
                            }
                            else
                            {
                                printf("\nPocao realizada com sucesso!\n\nEstoque atualizado:\n");
                                for (int i = 0; i < INGREDIENTES; i++)
                                {
                                    printf("%s: ", tipo[i].nome);
                                    printf("%d.\n", tipo[i].quantidade);
                                }
                            }
                            count4 = 1;
                            printf("\nPressione ENTER para voltar ao criador de pocoes.\n");
                            getchar();
                            getchar();
#ifdef _WIN32
                            system("cls");
#else
                            system("clear");
#endif
                            break;
                        case 4:

                            for (int i = 0; i < INGREDIENTES; i++)
                            {
                                tipo[i].quantidade -= potion[3].quantidades[i];
                                if (tipo[i].quantidade < 0)
                                {

                                    count4 = 0;
                                }
                            }
                            if (count4 == 0)
                            {
                                printf("Nao foi possivel preparar a pocao. Ingredientes em falta:\n");
                                for (int i = 0; i < INGREDIENTES; i++)
                                {
                                    if (tipo[i].quantidade < 0)
                                    {

                                        printf("%s: necessario %d, disponivel %d.\n", tipo[i].nome, potion[3].quantidades[i], tipo[i].quantidade);
                                    }
                                    else
                                    {
                                        tipo[i].quantidade += potion[0].quantidades[i];
                                    }
                                }
                            }
                            else
                            {
                                printf("\nPocao realizada com sucesso!\n\nEstoque atualizado:\n");
                                for (int i = 0; i < INGREDIENTES; i++)
                                {
                                    printf("%s: ", tipo[i].nome);
                                    printf("%d.\n", tipo[i].quantidade);
                                }
                            }
                            count4 = 1;
                            printf("\nPressione ENTER para voltar ao criador de pocoes.\n");
                            getchar();
                            getchar();
#ifdef _WIN32
                            system("cls");
#else
                            system("clear");
#endif
                            break;
                        case 5:

                            for (int i = 0; i < INGREDIENTES; i++)
                            {
                                tipo[i].quantidade -= potion[4].quantidades[i];
                                if (tipo[i].quantidade < 0)
                                {

                                    count4 = 0;
                                }
                            }
                            if (count4 == 0)
                            {
                                printf("Nao foi possivel preparar a pocao. Ingredientes em falta:\n");
                                for (int i = 0; i < INGREDIENTES; i++)
                                {
                                    if (tipo[i].quantidade < 0)
                                    {

                                        printf("%s: necessario %d, disponivel %d.\n", tipo[i].nome, potion[4].quantidades[i], tipo[i].quantidade);
                                    }
                                    else
                                    {
                                        tipo[i].quantidade += potion[0].quantidades[i];
                                    }
                                }
                            }
                            else
                            {
                                printf("\nPocao realizada com sucesso!\n\nEstoque atualizado:\n");
                                for (int i = 0; i < INGREDIENTES; i++)
                                {
                                    printf("%s: ", tipo[i].nome);
                                    printf("%d.\n", tipo[i].quantidade);
                                }
                            }
                            count4 = 1;
                            printf("\nPressione ENTER para voltar ao criador de pocoes.\n");
                            getchar();
                            getchar();
#ifdef _WIN32
                            system("cls");
#else
                            system("clear");
#endif
                            break;
                        case 6:
                            count3 = 0;
#ifdef _WIN32
                            system("cls");
#else
                            system("clear");
#endif
                            break;
                        default:
                            break;
                        }
                    }
                }
                printf("\nPressione ENTER para ir ao Menu Principal.\n");
                getchar();
                getchar();
#ifdef _WIN32
                system("cls");
#else
                system("clear");
#endif
                break;

            case 3:
                while (count5)
                {
                    printf("\nReabastecimento de Ingredientes.\nQuantidades restantes:\n");
                    for (int i = 0; i < INGREDIENTES; i++)
                    {
                        printf("%d. %s\n", i + 1, tipo[i].nome);
                        printf("Quantidade: %d\n", tipo[i].quantidade);
                    }
                    printf("Digite o numero do ingrediente que desejas repor:");
                    scanf("%d", &option4);
                    if (option4 < 1 || option4 > 7)
                    {
                        printf("\nOpcao invalida.Tente novamente.\n");
                    }
                    else
                    {
                        printf("Digite a quantidade que desejas repor:\n%s: +", tipo[option4 - 1].nome);
                        scanf("%d", &reposicaoIngs);
                        tipo[option4 - 1].quantidade += reposicaoIngs;
                        printf("\nReposicao realizada com sucesso!\n\nEstoque atualizado:\n");
                        for (int i = 0; i < INGREDIENTES; i++)
                        {
                            printf("%s: ", tipo[i].nome);
                            printf("%d.\n", tipo[i].quantidade);
                        }
                    }

                    printf("\nDesejas repor algo a mais?\n1.Sim\n2.Nao.\n");
                    scanf("%d", &option2);
                    if (option2 != 1 && option2 != 2)
                    {
                        printf("\nOpcao invalida.Tente novamente.\n");
                    }
                    else if (option2 == 1)
                    {
#ifdef _WIN32
                        system("cls");
#else
                        system("clear");
#endif
                    }
                    else
                    {
                        count5 = 0;
#ifdef _WIN32
                        system("cls");
#else
                        system("clear");
#endif
                    }
                }
                break;

            case 4:
                while (count2)
                {
                    printf("\nTem certeza que desejas sair?\n1.Sim\n2.Nao.\n");
                    scanf("%d", &option2);
                    if (option2 != 1 && option2 != 2)
                    {
                        printf("\nOpcao invalida.Tente novamente.\n");
                    }
                    else if (option2 == 1)
                    {
                        count2 = 0;
                        count = 0;
#ifdef _WIN32
                        system("cls");
#else
                        system("clear");
#endif
                    }
                    else
                    {
                        count2 = 0;
#ifdef _WIN32
                        system("cls");
#else
                        system("clear");
#endif
                    }
                }

                break;
            default:
                break;
            }
        }
    }
    return 0;
}