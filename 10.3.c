#include <stdio.h>
int main (){
//declaração variaveis
    int numero_vendedores,numero_bicicletasVendidas;
    float salario,valor_bicicleta,valor_bikeTotal,lucroBruto,salarioFinal,lucroLiquido;
    salario=2.640;
//entrada de dados
    printf("Informe o numero de vendedores\n");
    scanf("%d",&numero_vendedores);
    printf("Informe o numero de bicicletas vendidas\n");
    scanf("%d",&numero_bicicletasVendidas);
    printf("Informe o valor das bicicletas\n");
    scanf("%d",&valor_bicicleta);
//calculo
    valor_bikeTotal=valor_bicicleta*0.50;
    lucroBruto=valor_bikeTotal*numero_bicicletasVendidas;
    salarioFinal=salario+(0.15*lucroBruto/numero_vendedores);
    lucroLiquido=lucroBruto-salarioFinal*numero_vendedores;
//saida de dados
    printf("salarioFinal=%.4f\n",salarioFinal);
    printf("lucroLiquido=%.4f\n",lucroLiquido);
    return 0;
}
