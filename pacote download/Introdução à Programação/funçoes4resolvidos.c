#include<stdio.h>
#include<stdlib.h>
void transformacao(int a){
    int h,m,s,r;
    h=a/3600;
    r=a%3600;
    m=r/60;
    s=r%60;
    printf("%d Horas %d Minutos %d Segundos",h,m,s);

}
int main()
{
    int seg;
    printf("Informe uma quantidade de segundos: ");
    scanf("%d",&seg);
    transformacao(seg);
    return 0;
}
