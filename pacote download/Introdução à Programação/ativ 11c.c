/* Faça um programa que receba a hora do início de um jogo e a hora do término (cada hora é composta
por duas variáveis inteiras: hora e minuto). calcule e mostre a duração do jogo (horas e minutos),
sabendo que o tempo máximo de duração do jogo é de 24 horas e que ele pode começar em um dia e
terminar no dia seguinte */
#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int hora_i,min_i,hora_f,min_f,horajog,minjog;
    printf("Inicio do jogo\n");
    printf("Digite a hora inicial(24h): ");
    scanf("%d",&hora_i);
    printf("Digite o minuto inicial: ");
    scanf("%d",&min_i);
    printf("Fim do jogo\n");
    printf("Digite a hora final(24h): ");
    scanf("%d",&hora_f);
    printf("Digite o minuto final: ");
    scanf("%d",&min_f);
    if (hora_f> hora_i)
    {
        horajog= hora_f-hora_i;
    }
    else
    {
        horajog= (hora_f+24)-hora_i;
    }
    if (min_f>min_i)
    {
        minjog = min_f-min_i;
    }
    else
    {
        minjog = (min_f+60)-min_i;
        hora_f-=1;
    }

    printf("Voce jogou por %d h e %d min!",horajog,minjog);

    return 0;
}
