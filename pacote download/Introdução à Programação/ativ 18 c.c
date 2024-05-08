#include <stdio.h>
#include<stdlib.h>
int main()
{
    int X,Y,Z;
    printf("Informe os valores para formar um triangulo:\n");
    scanf("%d %d %d",&X,&Y,&Z);
    if (X<Y+Z &&Y<X+Z && Z<X+Y)
    {
        if (X==Y&& Y==Z)
        {
            printf("Eh um Triangulo Equilatero");
        }
        else if (X==Y || X==Z || Y==Z)
        {
            printf("Eh um Triangulo Isoceles");
        }
        else
        {
            printf("Eh um Triangulo Escaleno");
        }
    }
    else
    {
        printf("Nao formam um triangulo");
    }
    return 0;
}
