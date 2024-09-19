#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void compara(char *p1,char *p2)
{
    int tam1=strlen(p1),tam2=strlen(p2),cont=1;
    if(tam1==tam2)
    {
        for(int i=0;i<=tam1;i++)
        {
            if(tolower(p1[i])!=tolower(p2[i]))
            {
                cont=0;
            }
        }
    }
    if(cont){
        printf("As palavras sao iguais!");
    }
    else{
        printf("As palavras sao diferentes!");
    }
}
int main()
{
    char pala1[50],pala2[50];
    printf("Digite uma primeira palavra: ");
    gets(pala1);
    printf("Digite uma segunda palavra: ");
    gets(pala2);
    compara(pala1,pala2);
    return 0;
}
