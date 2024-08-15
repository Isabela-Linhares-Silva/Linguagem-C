#include<stdio.h>
#include<stdlib.h>
int main()
{
    char aluno[8][50];
    float notas[8],soma=0;
    for(int i=0;i<8;i++)
    {
        printf("Digite o nome do %d aluno: ",i+1);
        fflush(stdin);
        gets(aluno[i]);
        printf("Digite a nota de %s: ",aluno[i]);
        scanf("%f",&notas[i]);
        soma+=notas[i];
    }

    printf("Relatorio de notas\n");
    for(int i=0;i<8;i++)
    {
        printf("%s %.1f\n",aluno[i],notas[i]);
    }
    printf("Media da classe: %.1f",soma/8);

    return 0;
}
