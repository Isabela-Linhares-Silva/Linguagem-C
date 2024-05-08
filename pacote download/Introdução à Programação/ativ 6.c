/*
Faça um programa que receba o salário base de um funcionário, calcule e mostre o salário a receber,
sabendo-se que o funcionário tem gratificação de 5% sobre o salário base e paga imposto de 7% tam
bém sobre o salário base.
*/
#include <stdio.h>
#include<stdlib.h>
int main()
{
    float salario_base,n_salario,gratificacao,imposto;
    printf("Digite o seu salario: ");
    scanf("%f",&salario_base);
    gratificacao= salario_base*0.05;
    imposto= salario_base*0.07;
    n_salario= salario_base+gratificacao-imposto;
    printf("O novo salario a receber sera de: R$%.2f",n_salario);


    return 0;
}
