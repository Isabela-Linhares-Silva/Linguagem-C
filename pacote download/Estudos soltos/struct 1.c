#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct ficha_aluno
    {
        char nome[50];
        int matricula;
        float nota;
    };// definicaoo da struct
    struct ficha_aluno aluno;
    printf("CADASTRO\n");
    printf("Nome do aluno: ");
    gets(aluno.nome);
    printf("Matricula: ");
    scanf("%d",&aluno.matricula);
    printf("Nota: ");
    scanf("%f",&aluno.nota);
    printf("\n\nMOSTRA\n\n");
    printf("Nome: %s\n",aluno.nome);
    printf("Nota:%.2f",aluno.nota);

    return 0;
}
