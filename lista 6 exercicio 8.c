#include<stdio.h>
int main (){
int i,contar=0;
char s[47];
    printf("Informe uma palavra qulquer:");
    scanf("%s",s);
        for(i=0;s[i];i++){
        contar++;
        }
    printf("A palavra informada foi:");
        for(i=0;s[i];i++){
            printf("%c",s[i]);
        }
    printf("\n");
    printf("A palavra informada tem %d letras",contar);
return 0;
}
