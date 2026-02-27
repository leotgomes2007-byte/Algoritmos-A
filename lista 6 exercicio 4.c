#include<stdio.h>
int main(){
int i,tam=0;
char palavra[47];
printf("Informe uma palavra aleatoria:\n");
scanf("%s",palavra);
for( i = 0;palavra[i] ; i++){
    tam++;
}
for(i=tam-1;i>=0;i--){
    printf("%c",palavra[i]);
}
return 0;
}
