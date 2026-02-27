#include <stdio.h>
int main (){
//declaração de variaveis
int magic;
int adv;
//logica
    srand(time(NULL));
    magic=rand()%10;
    printf("adivinhe o numero magico(de 0 a 10):");
    scanf("%d",&adv);

    if(adv==magic)
        printf("***certo***\n");
    else{
        printf("***errado***\n");
        printf("O numero magico era: %d/",magic);

    }
return 0;
}









