/*
 * Programa: ex4.c
 * Descrição: Jogo de perguntas e respostas - JogoDoQuiz -.
 * Data de criação: 28.08.2024
 * Última modificação: 31.08.2024
 *
 * Observações:
 * - Fiz um algoritmo organizador de prova, o qual - em primeiro momento - pede para eleborar a prova e apos a aplica,
 * produzindo um score final. Estou atualizando algumas features para otimizar o codigo e evitar problemas - conforme vou aprendendo
 * aplicacoes novas. Fiz uso do ChatGPT para sanar algumas duvidas e acabei aprendendo muita coisa nova nesse processo.
 * COISAS A SEREM APRIMORADAS:
 * - prevencao de ultrapassagem de caracteres(tentei mas ainda nao consegui fazer);
 * 
 *  - Estou pensando em fazer uma competicao onde cada player elabora um teste e depois
 * responde os teste elaborados pelos outros; 
 * 
 * -OBS.2: peguei a tematica dessa questao e acabei fazendo esse projeto.
 * 
 * - DICA: Use o chatGPT para elaborar as perguntas mais rapidamente afim de testar o algoritmo.
 */


#include <stdio.h>
#include <string.h>

#define COLUNA 1000

void gaba(int number, char provaReal[number]);
void questoes(int number, char questao[number][COLUNA]);
int teste(int number, char provaReal[number], char questao[number][COLUNA]);
float nota(float acertos, float totalDeQuestoes);

int main()
{
    // Define o numero de questoes//
    int numeroDeQuestoes;
    printf("PARTE 1: Elebore o teste a ser aplicado.\nO teste de ser de multipla escolha(de 'a' ate 'e') e com no maximo 1000 caracteres,inlcuindo as alternativas.\n");
    printf("Digite o numero de questoes que desejas colocar no teste: ");
    scanf("%d", &numeroDeQuestoes);
    getchar();
    printf("\n");
    char gabarito[numeroDeQuestoes], question[numeroDeQuestoes][COLUNA];

    // digita a questao//
    questoes(numeroDeQuestoes, question);

    // digita o gabarito para cada questaog//
    gaba(numeroDeQuestoes, gabarito);

#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif

    // aplica a prova e contabiliza os acertos//
    printf("PARTE 2: Execute a prova.Boa Sorte!\n");
    int cont = teste(numeroDeQuestoes, gabarito, question);
    printf("Seu numero de acertos foram: %d/%d\n", cont, numeroDeQuestoes);
    float notaFinal = nota(cont, numeroDeQuestoes);
    printf("NOTA FINAL: %.2f/10.\n", notaFinal);
    printf("Gabarito:\n");
    for (int i = 0; i < numeroDeQuestoes; i++)
    {
        printf("Questao %d: ", i + 1);
        printf("%c\n", gabarito[i]);
    }

    return 0;
}

void questoes(int number, char questao[number][COLUNA])
{

    for (int i = 0; i < number; i++)
    {
        printf("Questao %d:\n", i + 1);
        if (fgets(questao[i], sizeof(questao[i]), stdin) == NULL)
        {
            printf("Erro ao ler a entrada.\n");
            break;
        }
    }
}

void gaba(int number, char provaReal[number])
{

    for (int i = 0; i < number; i++)
    {
        int confirmacao;
        do
        {
            do
            {
                printf("Gabarito questao %d:\n", i + 1);
                scanf("%c", &provaReal[i]);
                getchar();
            } while (provaReal[i] != 'a' && provaReal[i] != 'b' && provaReal[i] != 'c' && provaReal[i] != 'd' && provaReal[i] != 'e');
            printf("Para CONFIRMAR o gabarito da questao %d, LETRA %c,digite 1.\nPara CORRIGIR pressione 2.\n", i + 1, provaReal[i]);
            scanf("%d", &confirmacao);
            getchar();
        } while (confirmacao != 1);
    }
}

int teste(int number, char provaReal[number], char questao[number][COLUNA])
{
    char alternativas[number];
    int contador = 0;

    for (int i = 0; i < number; i++)
    {
        printf("Questao %d:\n", i + 1);
        fputs(questao[i], stdout);
        do
        {
            printf("Digite a resposta da questao %d:\n", i + 1);
            scanf("%c", &alternativas[i]);
            getchar();
        } while (alternativas[i] != 'a' && alternativas[i] != 'b' && alternativas[i] != 'c' && alternativas[i] != 'd' && alternativas[i] != 'e');
    }

    for (int i = 0; i < number; i++)
    {
        if (alternativas[i] == provaReal[i])
        {
            contador++;
        }
    }
    return contador;
}

float nota(float acertos, float totalDeQuestoes)
{

    if (acertos == 0)
    {
        return 0.0;
    }
    return (acertos / totalDeQuestoes) * 10;
}