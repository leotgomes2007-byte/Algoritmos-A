#include <stdio.h>
int main(){
//variaveis
float salario1,salario_final,bonus;
//entrada
printf("Informe o seu salario:\n");
scanf("%f",&salario1);
//logica
if(salario1<=2000){
bonus=salario1*0.13;


    }else if(salario1<=4000){
    bonus=salario1*0.11;


        }else if(salario1<=8000){
        bonus=salario1*0.09;


            }else{
            bonus=salario1*0.07;

 }
 salario_final=salario1+bonus;
printf("salario final=%.2f\n",salario_final);
printf("bonus=%.2f",bonus);
return 0;
}
