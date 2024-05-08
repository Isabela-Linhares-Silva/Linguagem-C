#include<stdio.h>
#include<stdlib.h>
int main()
{
    float sal_min,sal_receber,valor_hora,sal_mes,v_horaex,imposto,sal_b,sal_l;
    int hora_trab,n_dependente,hora_extra,valor_dep,grati;
    printf("Informe o valor do salario minimo: ");
    scanf("%f",&sal_min);
    printf("Informe o valor de horas trabalhadas: ");
    scanf("%d",&hora_trab);
    printf("Informe o numero de dependentes: ");
    scanf("%d",&n_dependente);
    printf("Informe a quantidade de horas extras trabalhadas: ");
    scanf("%d",&hora_extra);
    valor_hora= sal_min/5;
    sal_mes = hora_trab*valor_hora;
    valor_dep = 32*n_dependente;
    v_horaex = hora_extra*(valor_hora+(valor_hora*0.5));
    sal_b = sal_mes+ valor_dep+v_horaex;
    if (sal_b<200)
    {
        imposto=0;
    }
    else if (sal_b<=500)
    {
        imposto= sal_b*0.1;
    }
    else
    {
        imposto= sal_b*0.2;
    }
    sal_l = sal_b- imposto;
    if (sal_l<=350)
    {
        grati = 100;
    }
    else
    {
        grati = 50;
    }
    sal_receber = sal_l+ grati;
    printf("Seu salario sera de: R$%.2f",sal_receber);
    return 0;
}
