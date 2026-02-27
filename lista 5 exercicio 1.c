#include<stdio.h>
int main(){
int i,j;
int a[3][5];
printf("Informe a matriz:\n");
for(i=0;i<3;i++){
    for(j=0;j<5;j++){
    printf("a[%d][%d]:",i,j);
    scanf("%d",&a[i][j]);
    }
}
printf("A matriz informada foi:\n");
for(i=0;i<3;i++){
    for(j=0;j<5;j++){
        printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
return 0;
}
