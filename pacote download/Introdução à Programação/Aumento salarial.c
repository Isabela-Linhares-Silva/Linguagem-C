#include <stdio.h>
#include <stdlib.h>
int main()
{
    float salario_atual, percentual, aumento, novo_salario;
    printf("Digite o seu salario: ");
    scanf("%f",&salario_atual);
    printf("Digite o percentual de aumento: ");
    scanf("%f",&percentual);
    percentual= percentual/100;
    aumento = salario_atual*percentual;
    novo_salario = salario_atual+ aumento;

    printf("O seu aumento foi de : R$%.2f\n", aumento);
    printf("O seu novo salario sera de: R$ %.2f",novo_salario);


    return 0;
}
