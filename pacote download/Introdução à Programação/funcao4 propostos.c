#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float raio(int a)
{
    float volume=(4.0/3.0)*(3.14)*(pow(a,3));
    return volume;

}
int main()
{
    int r;
    printf("Informe o raio da esfera: ");
    scanf("%d",&r);
    printf("\nO volume da esfera eh: %.1f",raio(r));
    return 0;
}
