#include<stdio.h>
#include<stdlib.h>
float mediasalario(float *sal)
{
    float soma=0;
    for (int i=0;i<15;i++)
    {
        soma+=sal[i];
    }
    return soma/3;
}
void maiormenoridade(int *f)
{
    int maior,menor;
    maior=menor=f[0];
    for (int i=1;i<15;i++)
    {
        if(f[i]>maior)
        {
            maior=f[i];
        }
        if(f[i]<menor)
        {
            menor =f[i];
        }
    }
    printf("A maior idade do grupo eh: %d\nA menor idade do grupo eh: %d",maior,menor);
}
int mulheres(char *se ,int *n_f,float *sal)
{
    int cont=0;
    for(int i=0;i<15;i++)
    {
        if(se[i]=='F'||se[i]=='f')
        {
            if(n_f[i]==3&&sal[i]<=500)
            {
                cont++;
            }
        }
    }

    return cont;
}


int main()
{
    int idade[15],num_filhos[15];
    char sexo[15];
    float salario[15];
    for (int i=0;i<15;i++)
    {
        printf("Informe sua idade: ");
        scanf("%d",&idade[i]);
        fflush(stdin);
        printf("Infrome o seu sexo(F/M): ");
        scanf("%c",&sexo[i]);
        printf("Informe o seu salario: R$");
        scanf("%f",&salario[i]);
        printf("Informe o numero de filhos: ");
        scanf("%d",&num_filhos[i]);
        printf("\n");
    }
    float media=mediasalario(salario);

    int qtd_m= mulheres(sexo,num_filhos,salario);

    printf("A media dos salarios eh: %.2f\n",media);
    maiormenoridade(idade);
    printf("\nA quantidade de mulheres com 3 filhos e com salario menor igual a R$500 eh: %d\n",qtd_m);

    return 0;
}
