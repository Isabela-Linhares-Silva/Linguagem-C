#include <stdio.h>
#include <stdlib.h>
void cont_vogais(char *p)
{
    int cont=0, tam=strlen(p);
    for(int i=0;i<tam;i++)
    {
        if(tolower(p[i])=='a')
        {
            cont++;
        }
        else if(tolower(p[i])=='e')
        {
            cont++;
        }
        else if(tolower(p[i])=='i')
        {
            cont++;
        }
        else if(tolower(p[i])=='o')
        {
            cont++;
        }
        else if(tolower(p[i])=='u')
        {
            cont++;
        }
    }
    printf("A palavra digitada tem %d vogais!",cont);
}

int main()
{
    char palavra[50];
    printf("Digite uma palavra: ");
    gets(palavra);
    cont_vogais(palavra);
    return 0;
}
