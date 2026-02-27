#include <stdio.h>
int main(){
int qtde,d;
float media,s=0,media2024;
printf("Informe qtde de casos de dengue em cada dia de abril\n");
for(d=1;d<=30;d++){
    printf("Dia %d:",d);
    scanf("%d",qtde);
    s=s+qtde;
}
media=s/30;
printf("A media de casos do mes de abril foi de %d\n",media);
printf("informe a media de casos de abril/2024:\n");
scanf("%f",&media2024);
if(media>media2024){
    printf("Em abril de 2025 houve mais casos de Dengue");
}else if (media2024>media){
        printf("Em abril de 2024 houve mais casos de Dengue");
}else{
    printf("A media de casos de Dengue foi igual");
}
return 0;


















}
