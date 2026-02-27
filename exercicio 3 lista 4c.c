#include<stdio.h>
int main(){
int codigo,filhos;
float salario,salarioF,adicional;
do{
    printf("Informe o codigo do funcionario:\n");
    scanf("%d",&codigo);
    printf("Informe o salario liquido do funcionario:\n");
    scanf("%f",&salario);
    printf("Informe o numero de filhos do funcionario do funcionario:\n");
    scanf("%d",&filhos);

    adicional=salario*0.05*filhos;
    salarioF=salario+adicional;

    printf("O funcionario de codigo %d recebe %.2f de salario mensal devido ter %d filho(a)(s)\n",codigo,salarioF,filhos);
}while(codigo!=0);

return 0;
}
