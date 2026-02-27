#include<stdio.h>
int main (){
int i;
char palavra[47];
    printf("Informe uma palavra qualquer:");
    scanf("%s",palavra);
    printf("A palavra informada foi\n");
    for(i=0;palavra[i];i++){
    printf("%c\n",palavra[i]);
    }
return 0;
}
