#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num;
    printf("Digite um numero para verificar se e par: ");
    scanf("%d",&num);
    if (num%2 == 0) {
        printf("O numero e par");
    }
    else{
        printf("O numero e impar");
    }
    return 0;
}
