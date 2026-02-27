#include <stdio.h>
int main (){
int idade;
printf("Informe a sua idade:");
scanf("%d",&idade);
if(idade<16){
    printf("não está apta a votar");
}else if(idade>=16 && idade<=18 || idade>=70){
printf("voto facultativo");
}else{
printf("Voto é Obrigatorio");
}
return 0;
}
