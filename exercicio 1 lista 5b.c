#include<stdio.h>
int main(){
int i,j;
int matriz[2][3],matrizT[3][2];
printf("Informe a matriz 2x3:\n");
for(i=0;i<2;i++){
    for(j=0;j<3;j++){
     printf("Matriz[%d][%d]:",i,j);
     scanf("%d",&matriz[i][j]);
    }
    printf("\n");
}
printf("A matriz transposta eh:\n");
for(i=0;i<2;i++){
    for(j=0;j<3;j++){
    matrizT[j][i]=matriz[i][j];
    }
}
for(i=0;i<3;i++){
    for(j=0;j<2;j++){
    printf("%d\t",matrizT[i][j]);
    }
    printf("\n");
}
return 0;
}
