#include <stdio.h>
int main(){
int i,j,n;
int a[3][2];
    printf("Informe a matriz 3x2\n");
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
        printf("A[%d][%d]:",i,j);
        scanf("%d",&a[i][j]);
        }
    }
    printf("Informe um numero para multiplicar a matriz\n");
    scanf("%d",&n);
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
                a[i][j]=a[i][j]*n;
        }
    }
        for(i=0;i<3;i++){
        for(j=0;j<2;j++){
                printf("%d\t",a[i][j]);
        }
        printf("\n");
        }
    return 0;
}
