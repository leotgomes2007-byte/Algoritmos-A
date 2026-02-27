#include<stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL,"portuguese");
char letra;
printf("Digite um caracter:");
scanf("%c",&letra);
if(letra!='a' && letra!='e' && letra!='i' && letra!='o' && letra!='u' )
        printf(" é consoante");
else
    printf("Não é consoante");
return 0;
}
