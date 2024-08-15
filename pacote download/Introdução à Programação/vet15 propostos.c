/*Faça um programa que receba o nome de oito clientes e armazene-os em um vetor. Em um segundo vetor,
armazene a quantidade de DVDs locados em 2011 por cada um dos oito clientes. sabe-se que, para cada
dez locações, o cliente tem direito a uma locação grátis. Faça um programa que mostre o nome de todos
os clientes, com a quantidade de locações grátis a que ele tem direito. */
#include<stdio.h>
#include<stdlib.h>
#define tam 3
int  main()
{
    char cliente[tam][50];
    int qtd_dvd[tam],gratis[tam];
    for(int i=0;i<tam;i++)
    {
        printf("Digite o nome do %d cliente: ",i+1);
        fflush(stdin);
        gets(cliente[i]);
        printf("Informe quantos dvds %s locou em 2011: ",cliente[i]);
        scanf("%d",&qtd_dvd[i]);
        gratis[i] = qtd_dvd[i] / 10;
    }
    printf("-------Relatorio-------\n");
    for(int i=0;i<tam;i++)
    {
        printf("O cliente %s tem direito a %d\n",cliente[i],gratis[i]);
    }
    return 0;
}
