#include <stdio.h>
int main(){
float nota1,nota2,media,exame,exameF;
int i=1;
for(i;i<=40;i++){
    printf("Informe a primeira nota do aluno %d:\n",i);
    scanf("%f",&nota1);
    printf("Informe a segunda nota do aluno %d:\n",i);
    scanf("%f",&nota2);
    media=(nota1+nota2)/2;
        if(media>=7){
            printf("Aprovado\n");
        }else{
        printf("Informe a nota do exame:\n");
        scanf("%f",&exame);
        exameF=(nota1+nota2+exame)/3;
            if(exameF>=5){
                printf("Aprovado por exame\n");
            }else{
                printf("Reprovado de ano\n");
            }
    }
    }
return 0;





}
















