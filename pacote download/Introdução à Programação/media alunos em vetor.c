#include<stdio.h>
#include<stdlib.h>
int main()
{
    char aluno[4][100];
    int i;
    float n1[4],n2[4],m[4];
    for(i=1;i<5;i++)
    {
        printf("Aluno %d:\n",i);
        scanf("%s",&aluno[i]);
        printf("Informe a primeira nota: ");
        scanf("%f",&n1[i]);
        printf("Informe a segunda nota: ");
        scanf("%f",&n2[i]);
        m[i]=(n1[i]+n2[i])/2;
    }
    for(i=1;i<5;i++)
    {
        printf("%s %.2f\n",aluno[i], m[i]);

    }
    return 0;
}
