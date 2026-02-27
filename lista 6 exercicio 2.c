#include<stdio.h>
int main (){
int i,contar=0;
char palavra[47];
printf("Informe uma palavra qualquer:");
scanf("%s",palavra);
printf("A palavra Informada foi:\n");
for(i=0;palavra[i]!='\0';i++){
    printf("%c",palavra[i]);
     contar++;
}
printf("\n");
printf("A palavra informada tem %d letras",contar);
return 0;
}
