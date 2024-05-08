#include<stdio.h>
#include<stdlib.h>
#include <math.h>
int main()
{
    int OP;
    float n1, n2, soma, raiz;
    printf("MENU DE OPCOES:\n1. Somar dois numeros\n2. Raiz quadrada de um numero.\n");
    printf("Digite a opcao desejada: ");
    scanf("%d",&OP);
    switch (OP)
    {
    case 1:
        printf("Digite o primeiro numero: ");
        scanf("%f",&n1);
        printf("Digite o segundo numero: ");
        scanf("%f",&n2);
        soma = n1+n2;
        printf("A soma dos dois numeros e: %.2f",soma);
        break;
    case 2:
        printf("Digite um numero para ver a sua raiz quadrada: ");
        scanf("%f",&n1);
        raiz = sqrt(n1);
        printf("O valor da raiz desse numero e:%.2f",raiz);
        break;
    default:
        printf("Opcao invalida!");
        break;
    }
    return 0;
}
