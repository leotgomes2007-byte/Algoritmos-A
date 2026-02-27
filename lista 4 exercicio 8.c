#include<stdio.h>
int main() {
    int i, n = 10;
    int a[n], chute, encontrado = 0;

    printf("Informe o vetor A:\n");
    for(i = 0; i < n; i++) {
        printf("A[%i]:", i);
        scanf("%d", &a[i]);
    }

    printf("Informe o valor que deseja adivinhar do vetor:\n");
    scanf("%d", &chute);

    for(i = 0; i < n; i++) {
        if(chute == a[i]) {
            printf("O valor %d esta na posição %d\n", chute, i);
            encontrado = 1;
        }
    }

    if(!encontrado) {
        printf("O número fornecido não existe no vetor!\n");
    }

    return 0;
}
