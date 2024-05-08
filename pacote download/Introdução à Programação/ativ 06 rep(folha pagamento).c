#include<stdio.h>
#include<stdlib.h>

int main()
{
    float sal_min=450;
    int cod,horastrabalhadas,cat,i;
    char turno;
    float valorhoratrab,salario,sal_final,aux_aliment;
    for(i=1;i<=10;i++)
    {
        printf("Digite o codigo do funcionario: ");
        scanf("%d",&cod);
        printf("Digite o numero de horas trabalhadas: ");
        scanf("%d",&horastrabalhadas);
        printf("Digite o turno(M/V/N): ");
        fflush(stdin);
        scanf("%c",&turno);
        printf("Informe a categoria(O/G): ");
        fflush(stdin);
        scanf("%c",&cat);
        if(cat == "G")
        {
            if(turno== "N")
            {
                valorhoratrab= (18*sal_min)/100;
            }
            else if (turno== "M"|| turno == "V")
            {
                valorhoratrab = (15*sal_min)/100;
            }
        }
        else
        {
            if(turno== "N")
            {
                valorhoratrab= (13*sal_min)/100;
            }
            else if (turno== "M"|| turno == "V")
            {
                valorhoratrab = (10*sal_min)/100;
            }
        }
        salario = valorhoratrab*horastrabalhadas;
        if(salario<=300)
        {
            aux_aliment = 0.2*salario;
        }
        else if(salario<=600)
        {
            aux_aliment= 0.15*salario;
        }
        else
        {
            aux_aliment = 0.05*salario;
        }
        sal_final= salario+aux_aliment;
        printf("Codigo %d\nHoras trabalhadas:%d\nValor da hora trabalhada: R$%.2f\n",cod,horastrabalhadas,valorhoratrab);
        printf("Salario inicial: R$%.2f\nAuxilio alimentacao:R$%.2f\nSalario final: R$%.2f\n\n",salario,aux_aliment,sal_final);

    }
    return 0;
}
