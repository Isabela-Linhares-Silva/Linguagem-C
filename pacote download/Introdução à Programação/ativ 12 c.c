/*Faça um programa que receba o código correspondente ao cargo de um funcionário e seu salário atual
e mostre o cargo, o valor do aumento e seu novo salário. Os cargos estão na tabela a seguir
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int cod;
    float salario, aumento,n_sal;
    printf("Digite o cargo do funcionario(1,2,3,4 ou 5): ");
    scanf("%d",&cod);
    printf("Digite o valor do salario: ");
    scanf("%f",&salario);
    switch(cod)
    {
        case 1:

            aumento = salario*0.5;
            n_sal = salario+ aumento;
            printf("O cargo eh Escrituario;\nO valor do aumento eh: %.2f;\nO novo salario eh: %.2f",aumento,n_sal);
            break;
        case 2:
            aumento = salario*0.35;
            n_sal = salario+ aumento;
            printf("O cargo eh Secretario;\nO valor do aumento eh: %.2f;\nO novo salario eh: %.2f", aumento,n_sal);
            break;
        case 3:
            aumento = salario*0.2;
            n_sal = salario+ aumento;
            printf("O cargo eh Caixa;\nO valor do aumento eh: %.2f;\nO novo salario eh: %.2f", aumento,n_sal);
            break;
        case 4:
            aumento = salario*0.1;
            n_sal = salario+ aumento;
            printf("O cargo eh Gerente;\nO valor do aumento eh: %.2f;\nO novo salario eh: %.2f",aumento,n_sal);
            break;
        case 5:
            printf("O cargo eh Diretor;\nNao possui aumento para esse cargo");
            break;
        default:
            printf("Voce digitou uma opcao invalida!");

    }

    return 0;
}
