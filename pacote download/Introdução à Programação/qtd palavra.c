#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int palavras(char *f)
{
    int cont=0,tam=strlen(f);
    for(int i=0;i<tam;i++)
    {
        if(f[i]==' ')
        {
            cont++;
        }
    }
    return cont+1;

}
int main()
{
    char frase[100];
    printf("Digite uma frase: ");
    gets(frase);

    printf("%d\n",palavras(frase));
    return 0;
}
