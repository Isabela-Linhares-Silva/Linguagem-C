#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j;
    float nota[3]={0},media=0,soma=0;
    char gaba[5],resp[5],aluno[3][100];
    printf("----------------------------------\n");
    printf("   PASSO 1- Cadastro Gabarito\n");
    printf("----------------------------------\n");
    for(i=1;i<6;i++)
    {
        printf("Questao %d: ",i);
        scanf("%c",&gaba[i]);
        fflush(stdin);
    }
    for(j=1;j<4;j++)
    {
        printf("-----------------\n");
        printf("     ALUNO %d\n",j);
        printf("-----------------\n");
        printf("Nome: ");
        scanf("%s",&aluno[j]);

        printf("RESPOSTAS DADAS\n");
        for(i=1;i<6;i++)
        {
            fflush(stdin);
            printf("Questao %d: ",i);
            scanf("%c",&resp[i]);
        }
         for(i=1;i<6;i++)
        {
            if (resp[i] == gaba[i])
            {
                nota[j]+=1;
            }
        }
         printf("Nota do aluno %s: %.2f\n",aluno[j],nota[j]*2);
         soma+= nota[j]*2;
    }

    media = soma/3;
    printf("\nA media da tuma foi: %.2f",media);
    return 0;
}
