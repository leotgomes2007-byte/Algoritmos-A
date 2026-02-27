#include <stdio.h>
int main(){
char s[40];
int tam = 0,tam2,n;
printf("Digite uma palavra\n");
scanf("%s",s);
for(int i = 0; s[i]; i++){
    tam++;
}
printf("tamanho de %s= %i\n",s,tam);
tam2=strlen(s);
printf("Informe um numero para cortar a string de trás para frente:");
scanf("%d",&n);
tam=tam-n;
s[tam]='\0';
printf("nova string: %s\n",s);
return 0;
}
