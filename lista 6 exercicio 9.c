#include<stdio.h>

int main() {
    int i, tamanho_s = 0, tamanho_x = 0, iguais = 1;
    char s[47], x[47];

    printf("Escreva a primeira palavra:\n");
    scanf("%s", s);
    printf("Escreva a segunda palavra:\n");
    scanf("%s", x);

    // Calcula o tamanho das palavras
    while (s[tamanho_s] != '\0') tamanho_s++;
    while (x[tamanho_x] != '\0') tamanho_x++;

    // Verifica se são iguais (só compara se tiverem o mesmo tamanho)
    if (tamanho_s == tamanho_x) {
        for (i = 0; s[i] != '\0'; i++) {
            if (s[i] != x[i]) {
                iguais = 0;
                break;
            }
        }
    } else {
        iguais = 0;
    }

    // Imprime o resultado
    if (iguais == 1) {
        printf("As palavras sao iguais\n");
    } else {
        if (tamanho_s == tamanho_x) {
            printf("As palavras sao diferentes, mas com tamanhos iguais\n");
        } else if (tamanho_s > tamanho_x) {
            printf("As palavras sao diferentes e a primeira palavra eh maior que a segunda\n");
        } else {
            printf("As palavras sao diferentes e a segunda palavra eh maior que a primeira\n");
        }
    }

    return 0;
}
