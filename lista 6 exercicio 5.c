#include<stdio.h>

int main() {
    int i;
    char s[47], corte;
    int encontrou = 0;

    printf("Informe uma palavra: ");
    scanf("%s", s);

    // Usamos um espaço antes do %c para consumir a quebra de linha
    printf("Informe a partir de que letra deseja cortar: ");
    scanf(" %c", &corte);  // Note o espaço antes do %c

    printf("A nova palavra ficou:\n");

    for(i = 0; s[i] != '\0'; i++) {
        if(encontrou || s[i] == corte) {
            encontrou = 1;
            printf("%c", s[i]);
        }
    }

    return 0;
}
