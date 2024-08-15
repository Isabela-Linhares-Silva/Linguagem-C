#include<stdio.h>
#include<stdlib.h>
#define tam 3
int main()
{
    char alunos[tam][50];
    float n1[tam],n2[tam],media[tam],soma=0,media_classe;
    int contap=0,contrepro=0,contexam=0;

    for(int i=0;i<tam;i++)
    {
        printf("Nome do %d aluno: ",i+1);
        gets(alunos[i]);
        printf("Informe a primeira nota de %s: ",alunos[i]);
        scanf("%f",&n1[i]);
        printf("Informe a segunda nota de %s: ",alunos[i]);
        scanf("%f",&n2[i]);
        media[i]=(n1[i]+n2[i])/2;
        soma+=media[i];
    }
    media_classe = soma/tam;
    for(int i=0;i<tam;i++)
    {
        if(media[i]>=7){
            contap++;
        }
        else if(media[i]>=5){
            contexam++;
        }
        else{
            contrepro++;
        }
    }
    printf("RELATORIO\n");
    for(int i=0;i<tam;i++)
    {
        printf("%s");
        printf("Nota 1: %.1f",n1[i]);
        printf("Nota 2: %.1f",n2[i]);
        printf("Media: %.1f",media[i]);
        if(media[i]>=7){
            printf("Situacao: Aprovado\n\n");
        }
        else if(media[i]>=5){
            printf("Situacao: Exame\n\n");
        }
        else{
            printf("Situacao: Reprovado\n\n");
        }

    }

    printf("\nMedia da classe: %.1f",media_classe);
    printf("\nPercentual de alunos aprovados: %.1f %",((float)contap/tam)*100);
    printf("\nPercentual de alunos de alunos de exame: %.1f %",((float)contexam/tam)*100);
    printf("\nPercentual de alunos reprovados: %.1f %",((float)contrepro/tam)*100);
    return 0;
}
