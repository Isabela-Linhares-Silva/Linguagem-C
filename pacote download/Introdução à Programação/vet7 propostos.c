#include<stdio.h>
#include<stdlib.h>
int main()
{
    int cont=0,soma=0,i;
    float num[10];
    for ( i=0;i<10;i++)
    {
        printf("Informe dez numeros reais: ");
        scanf("%f",&num[i]);
        if (num[i]<0)
        {
            cont++;
        }
        else
        {
            soma=soma+num[i];
        }
    }

    printf("Ha %i numeros negativos\nA soma dos numeros positivos eh:%d",cont,soma);
    return 0;
}

