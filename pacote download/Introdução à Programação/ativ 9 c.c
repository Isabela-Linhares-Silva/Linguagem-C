#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t t;
    struct tm *data_hora;
    int dia, mes, ano, hora, min, seg;
    t = time(NULL);
    data_hora = localtime(&t);

    dia = data_hora -> tm_mday;
    mes = data_hora -> tm_mon + 1;
    ano = data_hora -> tm_year + 1900;
    hora = data_hora -> tm_hour;
    min = data_hora -> tm_min;

     printf("Data Atual: %02d/%02d/%d\n",dia, mes, ano);
    switch(mes)
    {
        case 1:
            printf("Janeiro");
            break;
        case 2:
            printf( "Fevereiro");
            break;
        case 3:
            printf("Marco");
            break;
        case 4:
            printf("Abril");
            break;
        case 5:
            printf("Maio");
            break;
        case 6:
            printf("Junho");
            break;
        case 7:
            printf("Julho");
            break;
        case 8:
            printf("Agosto");
            break;
        case 9:
            printf("Setembro");
            break;
        case 10:
            printf("Outubro");
            break;
        case 11:
            printf("Novembro");
            break;
        case 12:
            printf("Dezembro");
            break;
        default:
            printf("N\A");
            break;
    }
    printf("\nHorario Atual: %02d:%02d\n",hora,min);
    return 0;
}
