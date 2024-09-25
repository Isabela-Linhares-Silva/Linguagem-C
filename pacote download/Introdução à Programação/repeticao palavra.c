#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
void contapalavra(*f)
{
    int tam=strlen(f);
    char aux='AULA';
    for(int i=0;i<tam;i++)
    {
        if(f[i]=' ')
        {
            strcmp(f[i],aux);
        }
    }
}
int main()
{
    char frase[100];
    printf("Digite uma frase: ");
    gets(frase);

    return 0;
}
