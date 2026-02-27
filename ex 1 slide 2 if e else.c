#include <stdio.h>
int main (){
    float vendas,bonus;
    printf("Digite a quantidade vendida R$");
    scanf("%f",&vendas);
if(vendas<=900){;
    printf("BONUS 5%%\n");
    bonus=vendas*0.05;
    printf("R$ %.2f",bonus);
}else if(vendas<1400){
    printf("BONUS 8%%\n");
    bonus=vendas*0.08;
    printf("R$ %.2f",bonus);
}else{
    printf("BONUS 10%%\n");
    bonus=vendas*0.10;
    printf("R$ %.2f\n",bonus);
}
return 0;








}
