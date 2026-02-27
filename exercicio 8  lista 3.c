#include<stdio.h>
int main(){
float salario,i,media,soma;
for(i=0;i<10;i++){
    printf("Informe o seu salario:\n");
    scanf("%f",&salario);
    soma+=salario;
}
media=soma/10;
printf("media salarial=%.2f\n",media);
return 0;
}

