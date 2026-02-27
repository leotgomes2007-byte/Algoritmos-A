#include<stdio.h>
int main () {
int i, n;
float soma=0,media,nota,maiorNota=0;
printf("Calculo da media de notas da turma em uma avaliacao\n\n");
printf("Quantos alunos realizaram a avaliacao?");
scanf("%d",&n);

i=1;
do{
    printf("Digite a nota do aluno %d: ",i);
    scanf("%f",&nota);
    if(nota> maiorNota){
        maiorNota=nota;
    }
    soma+=nota;
    i++;
}while(i<=n);

media=soma/n;
printf("\n A media final da turma eh %.2f\n",media);
printf("A maior nota obtida eh %.2f\n",maiorNota);
return 0;
}
