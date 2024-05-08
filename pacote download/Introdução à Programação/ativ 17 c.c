#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    float a,b,c,delta,x1,x2;
    printf("Digite um valor para a: ");
    scanf("%f",&a);
    printf("Digite um valor para b: ");
    scanf("%f",&b);
    printf("Digite um valor para c: ");
    scanf("%f",&c);
    if (a ==0)
    {
        printf("Com a =0, nao existe equacao do segundo grau");
    }
        delta = (b*b)-(4*a*c);
        printf("Delta = %.1f\n",delta);
        if (delta <0)
        {
            printf("Nao existe raiz real");
        }
        else if(delta=0)
        {
            x1 = (-b)/(2*a);
            printf("Existe apenas uma raiz real: %f",x1);
        }
        else
        {
            x1 =(-b+sqrt(pow(delta,0.5)))/(2*a);
            x2 =(-b-sqrt(pow(delta,0.5)))/(2*a);
            printf("As raizes sao %.1f e %.1f",x1,x2);
        }

    return 0;
}
