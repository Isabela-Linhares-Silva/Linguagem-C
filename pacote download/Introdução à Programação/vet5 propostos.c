#include<stdio.h>
#include<stdlib.h>
//#define tot 5
int main()
{
    int  matricula[25],i,j,cont=0;
    int log[15],lp[10];
    printf("Informe as matriculas dos alunos matriculados em Logica: ");
    for (i=0;i<15;i++)
    {
        scanf("%d",&log[i]);
    }
    printf("-------------------------------------------------------------------\n");
    printf("Informe as matriculas dos alunos matriculados em Liguagem de Programacao: ");
    for (j=0;j<10;j++)
    {
        scanf("%d",&lp[j]);
    }
    for (i=0;i<15;i++)
    {
       for (j=0;j<10;j++)
       {
           if(log[i]==lp[j])
           {
               printf("A matricula %d esta inscrita nas duas disciplinas.\n",log[i]);
           }
       }
    }



    return 0;
}
