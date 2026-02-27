#include <stdio.h>
int main (){
int idade;
printf("Informe a sua idade:");
scanf("%f",&idade);
//ler idade
if(idade<16)
    printf("Não está apto a votar");
else if(idade<18||idade>70)
    printf("voto facultativo");
    else
        printf("voto obrigatorio");


return 0;
}
