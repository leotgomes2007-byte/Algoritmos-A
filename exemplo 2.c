#include<stdio.h>
int main () {
float nota;
int qtde=0;

do{
    printf("Digite a nota:");
    scanf("%f",&nota);
    qtde++;
}while (nota>0);

printf("\n A quantidade de notas digitadas eh %d", qtde-1);
return 0;
}
