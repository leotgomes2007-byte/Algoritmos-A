#include<stdio.h>
int main(){
int i,j,n;
float nota[5][3];
for(i=0;i<5;i++){
for(j=0;j<3;j++){
    printf("Nota[%d][%d]:",i,j);
    scanf("%f",&nota[i][j]);
}
}
printf("matriz de notas\n");
for(i=0;i<5;i++){
for(j=0;j<3;j++){
printf("%.2f\t",nota[i][j]);
}
}
printf("\n");

printf("Insira o numero do aluno:");
scanf("%d",&n);

printf("Notas do alunos %d\n",n);
for(j=0;j<3;j++){
    printf("%.1f\t",nota[n-1][j]);
}
return 0;

}
