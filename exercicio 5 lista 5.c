#include<stdio.h>
int main(){
int i,j;
float produtividade[2][4],contar=0, media;
    printf("Informe quanto cada lavoura produzio:\n");
    for(i=0;i<2;i++){
        for(j=0;j<4;j++){
         printf("area[%d][%d]:\n",i,j);
         scanf("%f",&produtividade[i][j]);
         contar+=produtividade[i][j];
        }
    }
    media=contar/8;
    printf("A media de produtividade da lavoura foi de %.2f\n",media);
    printf("As areas que tiveram produtividade acima da media foram:\n");
    for(i=0;i<2;i++){
        for(j=0;j<4;j++){
        if(produtividade[i][j]>media){
        printf("%.2f\n",produtividade[i][j]);
            }
        }
    }
return 0;
}
