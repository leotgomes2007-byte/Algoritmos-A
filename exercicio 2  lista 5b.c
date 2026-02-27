#include<stdio.h>
int main (){
int i,j;
int a[3][3],b[3][3],c[3][3];
printf("Informe o valor da matriz A:\n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
     printf("a[%d][%d]:",i,j);
     scanf("%d",&a[i][j]);
    }
}
printf("Informe o valor da matriz B:\n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
     printf("b[%d][%d]:",i,j);
     scanf("%d",&b[i][j]);
    }
}
printf("A matriz C eh:\n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
    c[i][j]=a[i][j]+b[i][j];
    }
}
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
    printf("%d\t",c[i][j]);
    }
    printf("\n");
}
return 0;
}
