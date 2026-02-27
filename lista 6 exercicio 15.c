#include <stdio.h>

int main() {
    char alfabeto[27]; // 26 letras + '\0'
    int i;

    // Preenche com letras maiúsculas
    for(i = 0; i < 26; i++) {
        alfabeto[i] = 'A' + i;
    }
    alfabeto[26] = '\0'; // Terminador de string

    printf("Alfabeto: %s\n", alfabeto);

    return 0;
}
