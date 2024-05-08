#include<stdio.h>
#include<stdlib.h>
#define jogadores 11
#define times 5
int main ()
{
    int idade,i,j,somaidade,menoridade=0,contpeso;
    float peso, altura,mediaidade,mediaaltura,somaaltura=0;
    for(i=1;i<=times;i++)
    {
        somaidade=0;
        for(j=1;j<=jogadores;j++)
        {
            printf("Informe a idade do jogador %d do time %d: ",j,i );
            scanf("%d",&idade);
            if(idade<18)
            {
                menoridade++;
            }
            somaidade+=idade;

            printf("Informe a altura do jogador %d do time %d: ",j,i);
            scanf("%f",&altura);
            somaaltura+= altura;

            printf("Informe o peso do jogador %d do time %d: ",j,i);
            scanf("%f",&peso);
            if(peso>=80)
            {
                contpeso++;
            }
        }
        mediaidade = somaidade/jogadores;
        printf("A media das idades de todos os jogadores do time %d eh: %.2f\n\n",i,mediaidade);
    }
    mediaaltura= somaaltura/jogadores;
    printf("A media das alturas dos jogadores eh: %.2f\n",mediaaltura);
    printf("A quantidade de jogadores menores de 18 anos eh de: %d",menoridade);

    return 0;
}
