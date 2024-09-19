#include<stdio.h>
#include <stdlib.h>
float ideal(float a,char s)
{
    float peso;
    if (s=='F'||s=='f')
    {
       peso=61.2*a-44.7;
    }
    else if(s=='M'||s=='m')
    {
        peso=72.7*a-58;
    }
    return peso;
}
int main()
{
    float alt,i;
    char sexo;

    printf("Informe sua altura: ");
    scanf("%f",&alt);
    fflush(stdin);
    printf("Informe seu sexo(F/M): ");
    scanf("%c",&sexo);
    i=ideal(alt,sexo);
    printf("O seu peso ideal eh: %.2f",i);
    return 0;
}
