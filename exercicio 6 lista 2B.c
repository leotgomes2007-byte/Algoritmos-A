#include <stdio.h>

int main() {
//variaveis
    int num_inscricao, idade;
    char sexo;
//entrada
    printf("Digite o numero de inscricao: ");
    scanf("%d", &num_inscricao);

    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("Digite o sexo (M/F): ");
    scanf(" %c", &sexo);

    printf("Categoria: ");
//logica
    if(idade >= 6 && idade <= 8) {
        if(sexo == 'F' || sexo == 'f') {
            printf("Infantil A-F\n");
        } else {
            printf("Infantil A-M\n");
        }
    } else if(idade >= 9 && idade <= 11) {
        printf("Infantil B\n");
    } else if(idade >= 12 && idade <= 14) {
        printf("Juvenil A\n");
    } else {
        printf("Fora das categorias especificadas\n");
    }

    return 0;
}
