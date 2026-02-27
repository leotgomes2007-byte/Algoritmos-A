#include <stdio.h>
int main(){
int dia_semana;
printf("Informeo dia da semana(considere Domingo=1 e segunda=2)\n");
scanf("%d",&dia_semana);
switch(dia_semana){
case 2:printf("O dia informado eh segunda");
        break;
case 3:printf("O dia informado eh terca");
        break;
case 4:printf("O dia informado eh quarta");
        break;
case 5:printf("O dia informado eh quinta");
        break;
case 6:printf("O dia informado eh sexta");
        break;
case 7:printf("O dia informado eh sabado");
        break;
case 1:printf("O dia informado eh domingo");
        break;
default: printf("O dia informado é invalido, tente novamente");
break;
}
return 0;
}
