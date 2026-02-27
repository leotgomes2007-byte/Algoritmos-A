#include<stdio.h>
int main (){
int nascimento,ano_atual,idade;
printf("Informe o ano do seu nascimento:\n");
scanf("%d",&nascimento);
printf("Informe o ano atual:\n");
scanf("%d",&ano_atual);
idade=ano_atual-nascimento;
if(idade>=0 && idade<=9){
printf("Voce pertence a faixa etaria: Criança");
} else if(idade>=10 && idade<=11){
printf("Voce pertence a faixa etaria:pre-adolecente");
}else if(idade>=12 && idade<=18){
printf("Voce pertence a faixa etaria: adolecente");
}else if(idade>=19 && idade<=25){
printf("Voce pertence a faixa etaria:jovem");
}else if(idade>=26 && idade<=59){
printf("Voce pertence a faixa etaria: Adulto");
}else{
printf("Voce pertence a faixa etaria: Idoso");
}
return 0;
}
