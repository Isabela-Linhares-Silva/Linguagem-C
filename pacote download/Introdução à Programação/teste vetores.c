#include <stdio.h>
#include <stdlib.h>
int main()
{
    int val[7],i,totpar=0;
    for(i=1;i<8;i++)
    {
        printf("Digite o %do. valor: ",i+1);
        scanf("%d",&val[i]);
        if(val[i] % 2 ==0)
        {
            totpar+=1;
        }

    }
    printf("\nO total de pares foi: %d",totpar);
    return 0;
}
