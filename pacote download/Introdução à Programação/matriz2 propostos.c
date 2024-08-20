#include<stdio.h>
#include<stdlib.h>
//a quantidade de elementos entre 12 e 20 em cada linha;
//a média dos elementos pares da matriz.
int main()
{
    int mat[2][4],cont[2]={0};
    float soma,cont2=0;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("Digite a matriz [%d][%d]: ",i,j);
            scanf("%d",&mat[i][j]);
            if (mat[i][j] >= 12 && mat[i][j] <= 20)
            {
                cont[i]++;
            }
        }
    }

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(mat[i][j]%2==0)
            {
                cont2++;
                soma+=mat[i][j];
            }
        }
    }
     for (int i = 0; i < 2; i++)
     {
        printf("Quantidade de elementos entre 12 e 20 na linha %d: %d\n", i + 1, cont[i]);
     }
    printf("A media dos elementos pares da matriz eh: %.2f",soma/cont2);

    return 0;
}
