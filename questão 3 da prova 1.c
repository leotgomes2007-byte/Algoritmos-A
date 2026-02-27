#include <stdio.h>
int main (){
float n1,n2;
int a1,m1,a2,m2;
printf("informe a nota1:\n");
scanf("%f",&n1);
printf("Informe a nota2|\n");
scanf("%f",&n1);
if(n1>n2){
        printf("candidato 1 em primeiro lugar\n candidato 2 em segundo lugar");
}else if(n1<n2){
        printf("candidato 2 em primeiro lugar\n candidato 1 em segundo lugar");
}else{
printf("empate!\n");
printf("Informe a idade1 em anos:\n");
scanf("%d",&a1);
printf("Informe a idade2 em anos:\n");
scanf("%d",&m1);
printf("Informe a idade1 em meses:\n");
scanf("%d",&a2);
printf("Informe a idade2 em meses:\n");
scanf("%d",&m2);
} if("a1>a2"){
printf("candidato  1 em primeiro lugar\n candidato 2 em primeiro lugar");
}else if("a1<a2"){
printf("candidato  2 em primeiro lugar\n candidato 1 em primeiro lugar");
}else{
printf("empate idade");
if(m1>m2){
printf("candidato  1 em primeiro lugar\n candidato 2 em primeiro lugar");
}else if (m1<m2){
printf("candidato  2 em primeiro lugar\n candidato 1 em primeiro lugar");
}else{
printf("“A classificação deverá ser atribuída pela banca examinadora");
}
}
return 0;
}










