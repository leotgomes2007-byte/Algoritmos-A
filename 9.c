#include<stdio.h>
int main (){
//variaveis
    float quantidade_vendida,valor_produto,valor_totalVenda,ICMS,ICMS_daVenda;
    ICMS=0.18;
//entrada e leitura
    printf("Informe a quantidade vendida\n");
    scanf("%f",&quantidade_vendida);
    printf("Informe o valor do produto\n");
    scanf("%f",&valor_produto);
//calculo
    valor_totalVenda=quantidade_vendida*valor_produto;
    printf("valor_totalVenda=%.2f\n",valor_totalVenda);
    ICMS_daVenda=valor_totalVenda*ICMS;
    printf("ICMS_daVenda=%.2f\n",ICMS_daVenda);
    return 0;
}
