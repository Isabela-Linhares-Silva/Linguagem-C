/*Fa�a um programa que receba o sal�rio inicial de um funcion�rio, calcule e mostre o novo sal�rio,
acrescido de bonifica��o e de aux�lio escola
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    float salario,n_salario,boni,aux;
    printf("Digite o salario: ");
    scanf("%f",&salario);
    if (salario<=500)
    {
        boni= salario*0.05;
    }
    else if (salario>1200)
    {
        boni = salario*0.12;
    }
    else
    {
        boni = 0;
    }
    if (salario<=600)
    {
        aux= 150;
    }
    else
    {
        aux=100;
    }
    n_salario = salario+aux+boni;
    printf("Seu novo salario sera de: R$%.2f\nSendo R$%.2f de bonificacao e R$%.2f de auxilio escola",n_salario,boni,aux);
    return 0;
}
