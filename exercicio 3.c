#include <stdio.h>
int main(){
//variaveis
int horas;
float valor_hora,salario1,salario2;
//professor 1
printf("Informe o valor recebido por hora(professor1)\n");
scanf("%f",&valor_hora);
printf("Informe a quantidade de horas trabalhadas(professor1)\n");
scanf("%f",&horas);

salario1=valor_hora*horas;

//professor 2
printf("Informe o valor recebido por hora(professor2)\n");
scanf("%f",&valor_hora);
printf("Informe a quantidade de horas trabalhadas(professor2)\n");
scanf("%f",&horas);

salario2=valor_hora*horas;

if(salario1==salario2){
    printf("Os dois professores ganhan a mesmo salario\n");
    printf("salario1=%.2f",salario1);

}else if(salario1>salario2){
    printf("O salario do primeiro professor é maior\n");
    printf("salario1=%.2f",salario1);

}else{
printf("O salario do primeiro professor é maior\n");
printf("salario1=%.2f",salario1);


}
return 0;
}













