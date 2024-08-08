#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num,i=1;
    float nota,melhornota=0;
    char nome[100],melhoraluno[100];

    printf("----------------------------------");
    printf("\n     ESCOLA FULANIM DE TAL" );
    printf("\n----------------------------------");
    printf("\n Quantos alunos a turma tem ? ");
    scanf("%d",&num);
    do
    {
        fflush(stdin);
        printf("ALUNO %d\n",i);
        printf("Nome do aluno: ");
        scanf("%s",&nome);
        printf("Informe a nota de %s: ",nome);
        scanf("%f",&nota);
        i+=1;
        if(nota> melhornota)
        {
            melhornota=nota;
            strcpy(melhoraluno, nome);
        }
    }while(i<=num);

    printf("O aluno com melhor desempenho foi %s com a nota %.2f",melhoraluno,melhornota);

    return 0;
}
