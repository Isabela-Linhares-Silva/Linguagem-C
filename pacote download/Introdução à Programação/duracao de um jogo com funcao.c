#include<stdio.h>
#include<stdlib.h>
int calculo(int hi,int mi,int hf,int mf)
{
    int tot_h,tot_m,total;
    if(mf<mi){
        mf+=60;
        hf-=1;
    }
    if(hf<hi)
    {
        hf+=24;
    }
    tot_m=mf-mi;
    tot_h=hf-hi;
    total= tot_h*60+tot_m;
    return total;
}
int main()
{
    int h_i,m_i,h_f,m_f;
    printf("Horas inicio(hh): ");
    scanf("%d",&h_i);
    printf("Minutos inicio(mm): ");
    scanf("%d",&m_i);
    printf("Horas final(hh): ");
    scanf("%d",&h_f);
    printf("Minutos final(mm): ");
    scanf("%d",&m_f);
    int minutos= calculo(h_i,m_i,h_f,m_f);
    printf("A duracao do jogo em minutos foi: %d",minutos);
    return 0;
}
