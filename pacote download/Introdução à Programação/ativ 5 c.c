#include<stdio.h>
#include<stdlib.h>
int main ()
{
    float n1,n2,n3,n4;
    printf("Digite tres numeros em ordem crescente: ");
    scanf("%f""%f""%f",&n1,&n2,&n3);
    printf("Digite um outro numero fora dessa ordem: ");
    scanf("%f",&n4);
    if (n4>n3)
    {
        printf("A ordem decrescente e: %f, %f, %f, %f ",n4,n3,n2,n1);
    }
    else
    {
        if (n4>n2 && n4<n3)
        {
            printf("A ordem decrescente e: %f, %f, %f, %f", n3,n4,n2,n1);
        }
        else
        {
            if (n4>n1 && n4<n2)
            {
                printf("A ordem decrescente e : %f, %f, %f, %f", n3, n2,n4,n1);
            }
            else
            {
                printf("A ordem decrescente e: %f, %f, %f, %f", n3,n2,n1,n4);
            }
        }
    }

    return 0;
}
