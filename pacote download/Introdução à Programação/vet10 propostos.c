#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int vet[10],vet2[5],resu[10],resu2[10],soma=0,j,i;
    int contdiv=0,contimpar=0;
    printf("Primeiro vetor\n ");
    for(i=0; i<10; i++)
    {
        printf("Informe um numero: ");
        scanf("%d",&vet[i]);
    }
    printf("Segundo vetor\n ");
    for( i=0; i<5; i++)
    {
        printf("Informe um numero: ");
        scanf("%d",&vet2[i]);
    }
    for( i=0;i<5;i++){
        soma+= vet2[i];
    }
    for( i=0;i<10;i++){

        if(vet[i]%2==0){
            resu[i]=soma+vet[i];
        }
        else{
            resu[i]=0;
        }
    }
    printf("Soma: ");

    for(i=0;i<10;i++)
    {
        if(resu[i]!=0)
        {
           printf("%d ",resu[i]);
        }

    }
    printf("\n");
    for(i=0;i<10;i++)//rodar os numeros de vet
    {
        contdiv=0;
       if(vet[i]%2 != 0){
            for( j=0;j<5;j++)//
            {
                if(vet[i]%vet2[j]==0)
                {
                    contdiv++;
                }
            }//termina a comparação do valor 1 de i com todos de j
            resu2[contimpar]=contdiv;//armazenando a quantidade de divisores do numero que acabou de passar
            contimpar++;
       }
    }
    for(i=0;i<contimpar;i++)
    {
        printf("%d ",resu2[i]);
    }
    return 0;
}
