#include<stdio.h>
int main (){
int i,vogais=0;
char palavra[46];
printf("Escreva uma plavra qualquer:");
scanf("%s",palavra);
printf("A palavra informada foi:");

for(i=0;palavra[i]!='\0';i++){
if(palavra[i]=='a' || palavra[i]=='e' || palavra[i]=='i' || palavra[i]=='o' ||palavra[i]=='u'){
    vogais++;
}
printf("%c",palavra[i]);
}
printf("\n");
printf("A palavra informada tem %d vogais\n",vogais);
return 0;
}
