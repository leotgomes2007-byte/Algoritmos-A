#include <stdio.h>
int main() {
int seg,min,hora;
printf("Informe a hora:\n");
scanf("%d",&hora);
printf("Informe a minutos:\n");
scanf("%d",&min);
printf("Informe a segundos:\n");
scanf("%d",&seg);
if(seg>0 && seg<=59 && min>0 && min<=59 && hora>0 && hora<=23){
printf("A hora informada %d horas %d minutos e %d segundos é valida",hora,min,seg);
}else{
printf("A hora informada %d horas %d minutos e %d segundos é invalida",hora,min,seg);
}
return 0;
}
