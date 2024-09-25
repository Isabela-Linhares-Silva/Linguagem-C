#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
void qtd_consoante(char *p)
{
    int tam=strlen(p);
    int cont=0;
    for (int i=0;i<tam;i++)
    {
        char letra=tolower(p[i]);

        if(letra != 'a' && letra != 'e' && letra != 'i' && letra != 'o'&& letra != 'u')
        {
            cont++;
        }
    }
    printf("A palavra digitada tem %d consoantes!",cont);
}
int main()
{
    char palavra[100];
    printf("Digite uma palavra: ");
    gets(palavra);
    qtd_consoante(palavra);
    return 0;
}
