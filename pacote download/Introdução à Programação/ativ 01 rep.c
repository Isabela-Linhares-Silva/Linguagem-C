#include <stdio.h>
#include <stdlib.h>
int main()
{
    int ano_atual,i=2006;
    float salario,percent;
    printf("Digite o ano atual: ");
    scanf("%d",& ano_atual);
    salario = 1000;
    percent= 0.015;
    do
    {
        if(i>=2007)
        {
            percent = 2* percent;
        }
        salario = salario+(salario*percent);
        printf("%2.f\n", salario);
        i++;
    }while(i<=ano_atual);


    return 0;
}
