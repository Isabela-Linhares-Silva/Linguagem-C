#include<stdio.h>
#include<stdlib.h>
void transformacao(int seg, int * s,int * m,int * h)
{
    int r;
    *h=seg/3600;
    r=seg%3600;
    *m=r/60;
    *s=r%60;
}
int main()
{
    int seg,hr,mr,sr;
    printf("Informe uma quantidade de segundos: ");
    scanf("%d",&seg);
    transformacao(seg,&sr,&mr,&hr);
    printf("%d horas %d minutos %d segundos",hr,mr,sr);
    return 0;
}
