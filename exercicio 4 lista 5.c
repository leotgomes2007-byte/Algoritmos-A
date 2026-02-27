#include <stdio.h>
int main(){
int i,j;
int identificacao[6][7],chuteL,chuteC;
for(i=0;i<6;i++){
    for(j=0;j<7;j++){
        printf("Informe a identificação da cadeira [%d][%d]:\n",i,j);
        scanf("%d",&identificacao[i][j]);
    }
    printf("\n");
}
    printf("Informe a linha do chute:");
    scanf("%d",&chuteL);
    printf("Informe a coluna do chute:");
    scanf("%d",&chuteC);
    printf("A cadeira eh:%d\n",identificacao[chuteL][chuteC]);
return 0;
}

















