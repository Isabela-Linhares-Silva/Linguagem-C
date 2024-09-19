#include<stdio.h>
#include<stdlib.h>
void primos()
{
    int n=100,cont=0,p[3];
    for(int i=100;i<300 &&cont<3;i++)
    {
        int cont_div=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                cont_div++;
            }
        }
        if(cont_div==2)
        {
            p[cont]=i;
            cont++;
        }
    }
    for(int i=0;i<3;i++)
    {
        printf("%d \n",p[i]);
    }

}
int main()
{
    primos();
    return 0;
}
