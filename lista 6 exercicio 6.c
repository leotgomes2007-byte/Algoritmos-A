#include<stdio.h>
#include <string.h>
int main(){
int i;
char palavra[47];
    printf("Informe uma plavra:\n");
    scanf("%s",palavra);
        for(i=0;palavra[i];i++){
                if(toupper(palavra[i])=='A' ||toupper(palavra[i])=='E' ||toupper(palavra[i])=='I' ||toupper(palavra[i])=='O' ||toupper(palavra[i])=='U'){
                    palavra[i]='#';
                }
        }
    printf("A nova palavra é:");
        for(i=0;palavra[i];i++){
            printf("%c",palavra[i]);
        }
    return 0;
}
