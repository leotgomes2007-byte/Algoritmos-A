#include <stdio.h>

int main() {
//variaveis
    int dia1, mes1, ano1,dia2, mes2, ano2;
//entrada de dados
    printf("Digite o dia da primeira data: ");
    scanf("%d", &dia1);

    printf("Digite o mês da primeira data: ");
    scanf("%d", &mes1);

    printf("Digite o ano da primeira data: ");
    scanf("%d", &ano1);

    printf("\nDigite o dia da segunda data: ");
    scanf("%d", &dia2);

    printf("Digite o mês da segunda data: ");
    scanf("%d", &mes2);

    printf("Digite o ano da segunda data: ");
    scanf("%d", &ano2);
//logica(ano)
    if (ano1 > ano2)
    {
        printf("\nResultado: A primeira data (%02d/%02d/%04d) é mais recente.\n",
               dia1, mes1, ano1);
    }
    else if (ano2 > ano1)
    {
        printf("\nResultado: A segunda data (%02d/%02d/%04d) é mais recente.\n",
               dia2, mes2, ano2);
    }
    else
    {
//logica(meses)
        if (mes1 > mes2)
        {
            printf("\nResultado: A primeira data (%02d/%02d/%04d) é mais recente.\n",
                   dia1, mes1, ano1);
        }
        else if (mes2 > mes1)
        {
            printf("\nResultado: A segunda data (%02d/%02d/%04d) é mais recente.\n",
                   dia2, mes2, ano2);
        }
        else
        {
//logica(dia)
            if (dia1 > dia2)
            {
                printf("\nResultado: A primeira data (%02d/%02d/%04d) é mais recente.\n",
                       dia1, mes1, ano1);
            }
            else if (dia2 > dia1)
            {
                printf("\nResultado: A segunda data (%02d/%02d/%04d) é mais recente.\n",
                       dia2, mes2, ano2);
            }
            else
            {
                printf("\nResultado: As datas são idênticas (%02d/%02d/%04d).\n",
                       dia1, mes1, ano1);
            }
        }
    }

    return 0;
}
