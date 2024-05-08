/* Faça um programa que apresente o menu a seguir, permita ao usuário escolher a opção desejada, re
ceba os dados necessários para executar a operação e mostre o resultado. verifique a possibilidade de
opção inválida e não se preocupe com restrições, como salário negativo.
 Menu de opções:
 1. Imposto
2. Novo salário
3. classificação
Digite a opção desejada.*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int op;
    float salario, imposto, n_salario;
    printf("Menu de opcoes:\n1. Imposto \n2. Novo salario \n3. classificacao\n");
    printf("Digite a opcao desejada: ");
    scanf("%d",&op);
    printf("Digite seu salario: ");
    scanf("%f",&salario);
    switch(op)
    {
    case 1:
        if( salario< 500)
        {
            imposto = salario*0.05;
        }
        else if( salario>=500 && salario<=850)
        {
            imposto = salario*0.1;
        }
        else
        {
            imposto = salario*0.15;
        }
        printf("O imposto eh de: R$%.2f",imposto);
        break;
    case 2:
        if (salario>1500)
        {
            n_salario= salario+25;
        }
        else if (salario>=750 && salario<=1500)
        {
           n_salario = salario+50;
        }
        else if (salario>=450 && salario<750)
        {
            n_salario = salario +75;
        }
        else
        {
            n_salario = salario+100;
        }
        printf("O novo salario sera de: R$%.2f",n_salario);
        break;
    case 3:
        if (salario<=700)
        {
            printf("Mal remunerado!");
        }
        else
        {
            printf("Bem remunerado!");
        }
        break;
    default:
        printf("Opcao invalida!");
    }



    return 0;
}
