#include<stdio.h>
int main(){
//declaração de variaveis
    int matricula;
    float valor_hora,horas_trabalhadas,salario_liquido,salario_bruto,INSS,FGTS;

//entrada de dados
    printf("Informe o numero de matricula do funcionario\n");
    scanf ("%d",&matricula);
    printf("Informe o valor da hora\n");
    scanf ("%f",&valor_hora);
    printf("Informe o numero de horas trabalhadas do funcionario\n");
    scanf ("%f",&horas_trabalhadas);
//calculos
    salario_bruto=horas_trabalhadas*valor_hora;
    INSS=salario_bruto*0.09;
    FGTS=salario_bruto*0.08;
    salario_liquido=(salario_bruto-INSS)-FGTS;
//saida de dados
printf("matricula=%d\n",matricula);
printf("salario_liquido=%.2f",salario_liquido);
return 0;
}
