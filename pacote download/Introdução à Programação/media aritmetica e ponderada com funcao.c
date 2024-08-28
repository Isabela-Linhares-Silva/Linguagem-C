#include<stdio.h>
#include<stdlib.h>
float n_media(float a,float b,float c,char ap){

    float media;
    if(ap='A'){
            media=(a+b+c)/3.0;
            return media;
    }
    else{
        media=((a*5)+(b*3)+(c*2))/10.0;
        return media;
    }

}
int main()
{
    float num1,num2,num3;
    char ap;
    printf("Digite a primeira nota: ");
    scanf("%f",&num1);
    printf("Digite a segunda nota: ");
    scanf("%f",&num2);
    printf("Digite a terceira nota: ");
    scanf("%f",&num3);
    printf("Informe o modo de calcular a media das notas:(A/P) ");
    fflush(stdin);
    scanf("%c",&ap);
    printf("%.2f",n_media(num1,num2,num3,ap));
    return 0;
}
