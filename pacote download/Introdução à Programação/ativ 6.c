/*
Fa�a um programa que receba o sal�rio base de um funcion�rio, calcule e mostre o sal�rio a receber,
sabendo-se que o funcion�rio tem gratifica��o de 5% sobre o sal�rio base e paga imposto de 7% tam
b�m sobre o sal�rio base.
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
