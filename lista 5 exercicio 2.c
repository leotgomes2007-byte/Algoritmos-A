#include<stdio.h>
#include <stdlib.h>
int main(){
int i,j;
int a[5][5],somaD=0,soma=0;
float mediaD,media;
    printf("Matrizes 5x5\n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
        a[i][j]=rand()%50;
        soma=soma+a[i][j];
        printf("%d\t",a[i][j]);
        }
        printf("\n");
        }
    printf("A diagonal principal eh:\n");
    for(i=0;i<5;i++){
            printf("%d\t",a[i][i]);
            printf("\n");
            somaD=somaD+a[i][i];
    }
    media=(float)soma/25;
    mediaD=(float)somaD/5;
    printf("A media da diagonal principal eh %f\n",mediaD);
    printf("A media da matriz eh %f\n",media);
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(a[i][j]>media){
            printf("O elemento %d da linha %d e da coluna %d está acima da media\n",a[i][j],i,j);
            }
        }
    }
    return 0;
    }
