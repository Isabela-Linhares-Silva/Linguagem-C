#include<stdio.h>
#include<stdlib.h>
#define cidade 3
int main()
{
    int cod,nveiculos=0,acidente_vitimas,i,cid=0,maior_indice,cod_maior,menor_indice,cod_menor;
    float mediaveiculos,mediaacidentes,somaveiculos=0,somaacidente=0;

    for(i=1;i<=cidade;i++)
    {
        printf("Digite o codigo da cidade: ");
        scanf("%d",&cod);
        printf("Informe a quantidade de veiculos de passeio: ");
        scanf("%d",&nveiculos);
        somaveiculos+=nveiculos;

        printf("Informe o numero de acidentes de transito com vitimas: ");
        scanf("%d",&acidente_vitimas);
        //Letra A
        if(i==1)
        {
            maior_indice = acidente_vitimas;
            cod_maior = cod;
            menor_indice = acidente_vitimas;
            cod_menor = cod;
        }
        else if(acidente_vitimas > maior_indice)
        {
                maior_indice = acidente_vitimas;
                cod_maior = cod;
        }
        else if(acidente_vitimas < menor_indice)
        {
                menor_indice = acidente_vitimas;
                cod_menor = cod;
        }
    }

    printf("\nO maior indice de acidentes eh %d e pertente a cidade %d\nO menor indice de acidentes eh %d e pertence a cidade %d",maior_indice,cod_maior,menor_indice,cod_menor);
    mediaveiculos= somaveiculos/cidade;
    printf("\nA media de veiculos das cidades juntas eh: %.2f\n",mediaveiculos);
    if(nveiculos<2000)
        {
            somaacidente+=acidente_vitimas;
            cid++;
            mediaacidentes=somaacidente/cid;
            printf("A media de acidentes eh : %.2f \n", mediaacidentes);
        }
    else{
        printf("Nao foi informado nenhuma cidade com menos de 2000 veiculos!");
    }


    return 0;
}
