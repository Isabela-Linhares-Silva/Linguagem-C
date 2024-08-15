#include<stdlib.h>
#include<stdio.h>
int main()
{
    int mat[3][5],cont=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
        {
            printf("Digite a matriz [%d][%d]: ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(mat[i][j]>15&&mat[i][j]<20)
            {
                cont++;
            }
        }
    }
    printf("Ha %d numeros entre 15 e 20",cont);

    return 0;
}
