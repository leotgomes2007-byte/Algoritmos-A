#include<stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL,"portuguese");
char letra;
printf("Digite um caracter:");
scanf("%c",&letra);
if(tolower(letra)=='a'||tolower(letra)=='e'||tolower(letra)=='i'||tolower(letra)=='o'||tolower(letra)=='u')
        printf(" é vogal");
else
    printf("Não é vogal");
return 0;
}
