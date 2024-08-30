#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void compara(char *p)
{
    int tam=strlen(p),igual=1;
    for(int i=0;i<tam/2;i++)
    {
       if(p[i]!=p[tam-1-i])
       {
           igual=0;
       }
    }
    if(igual){
        printf("Eh um palindromo!");
    }
    else{
        printf("Nao eh um palindromo!");
    }
}
int main()
{
    char palavra[50];
    printf("Informe uma palavra qualquer: ");
    gets(palavra);
    compara(palavra);

    return 0;
}
