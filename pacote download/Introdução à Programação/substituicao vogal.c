#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
void troca(char *f)
{
    int tam= strlen(f);
    for(int i=0;i<tam;i++)
    {
        char letra=tolower(f[i]);
        if(letra=='a'||letra=='e'||letra=='i'||letra=='o'||letra=='u')
        {
            f[i]='*';
        }
    }

}
int main()
{
    char frase[100];
    printf("Digite uma frase: ");
    gets(frase);
    troca(frase);
    printf("%s\n",frase);

}
