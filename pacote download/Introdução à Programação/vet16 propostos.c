#include<stdio.h>
#include<stdlib.h>
#define tam 5
int main()
{
    char prod[tam][50],aux[tam];
    float preco[tam],media=0,soma=0;
    int cont=0,cont2=0;
    for(int i=0;i<tam;i++)
    {
        printf("Digite o nome do produto %d: ",i+1);
        fflush(stdin);
        gets(prod[i]);
        printf("Informe o valor de %s: R$ ",prod[i]);
        scanf("%f",&preco[i]);
        if(preco[i]<50)
        {
            cont++;
        }
        else if(preco<=100)
        {
            aux[i]=prod[i];
        }
        else{
            cont2++;
            soma+=preco[i];
            media= soma/cont2;
        }

    }
    int i;
    printf("\nQuantidade de produtos com preco abixo de R$50,00: %d",cont);
    printf("\nProdutos com preco entre R$ 50,00 e R$ 100,00: %s ",aux[i] );
    printf("\nMedia dos precos dos produtos com preco superior a R$ 100,00: %.2f",media);

    return 0;
}
