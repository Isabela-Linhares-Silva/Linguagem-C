#include<stdio.h>
#include<stdlib.h>
float diferenca(float a,float b)
{
    float p;
    p=((b-a)/a)*100;
    return p;
}
int main()
{
    float antigo,novo;
    printf("Informe o preco antigo do produto:R$ ");
    scanf("%f",&antigo);
    printf("Informe o preco atual do produto:R$ ");
    scanf("%f",&novo);

    printf("A diferenca percentual entre os dois valores eh de: %.2f%%",diferenca(antigo,novo));

    return 0;
}
