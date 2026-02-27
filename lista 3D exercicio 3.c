#include<stdio.h>
int main(){
int f=50;
float c;
    printf("Tabela de conversao de Fahrenheit para Celsius\n");
    printf("================================================\n");
for(f=50;f<=70;f++){
    c=(f-32)/1.8;
    printf("||             %d F equivale a %.2f C         ||\n",f,c);
    printf("=================================================\n");
    }
    return 0;
}
