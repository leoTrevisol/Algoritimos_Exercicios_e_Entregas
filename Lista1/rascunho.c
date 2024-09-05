#include <stdio.h>
#include <string.h>

#define LINHA 3

int frase();
int main()
{
    char frase[LINHA][11];
    

    for (int i = 0; i < LINHA; i++)
    {
        printf("Frase %d:\n",i + 1);
        if(fgets(frase[i],sizeof(frase[i]),stdin) == NULL){
            printf("ERRO NA LEITURA.");
            return 1;
        }
    }
    
    for (int i = 0; i < LINHA; i++)
    {
        printf("Frase %d:\n",i + 1);
        
        char *ponteiro = frase[i];
        
        while (*ponteiro != '\0')
        {
            printf("%c",*ponteiro);
            ponteiro++;
        }
        
    }
    
    

    return 0;
}