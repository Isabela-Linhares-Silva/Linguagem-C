#include<stdio.h>
#include<stdlib.h>

int main ()
{
    char alunos[7][50];
    float media[7],nota[7];
    int maior=0;
    for(int i=0;i<7;i++)
    {
        printf("Digite o nome do %d aluno: ",i+1);
        fflush(stdin);
        gets(alunos[i]);
        printf("Informe a media de %s: ",alunos[i]);
        scanf("%f",&media[i]);
    }
    for(int i=0;i<6;i++)
    {
            if(media[i]<media[i+1])
            {
                maior= i+1;
            }
    }

    printf("O aluno com a maior media eh: %s\n",alunos[maior]);

    for(int i=0;i<7;i++)
    {
        if(media[i]<7.0)
        {
           nota[i]=10 -media[i] ;
           printf("\nO aluno %s precisa tirar %.2f para passar.",alunos[i],nota[i]);
        }
    }





    return 0;
}
