#include<stdio.h>
#include<stdlib.h>
void point(int a,int *b)
{
    printf("O valor da variavel eh: %d\n",a);
    printf("O endereco da variavel eh: %d\n\n",&a);
    printf("O conteudo do ponteiro eh: %d\n", *b);//apontado pro conteudo do endere�o da vari�vel q b aponta
    printf("O endereco apontado eh: %d\n", b);//endere�o da vari�vel(a)
    printf("O endereco do ponteiro eh: %d\n", &b);// endere�o do ponteiro
}
void atualiza(int *p)
{
    *p=*p+1;
}
int main ()
{
    int variavel=20;
    int *pont;
    pont=&variavel;
    point(variavel,pont);
    *pont=100;//utilizando ponteiro para atualiza�ao do conteudo da variavel apontada
    printf("\nATUALIZACAO\n");
    point(variavel,pont);
    printf("\nATUALIZACAO 2\n");
    atualiza(&variavel);//substitui a linha 21
    point(variavel,pont);


    return 0;
}
