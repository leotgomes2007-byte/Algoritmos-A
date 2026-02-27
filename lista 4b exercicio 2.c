#include <stdio.h>

int main() {
    int i, n = 30; // Alterado para 30 conforme o enunciado
    int matricula[n], codigo;

    printf("Informe as matriculas dos alunos:\n");
    for(i = 0; i < n; i++) {
        printf("Aluno[%d]: ", i);
        scanf("%d", &matricula[i]);
    }

    printf("\nInforme o codigo (0-3): ");
    scanf("%d", &codigo);

    switch(codigo) {
        case 0:
            printf("Programa encerrado.\n");
            break;

        case 1:
            printf("\nMatriculas dos alunos:\n");
            for(i = 0; i < n; i++) {
                printf("Aluno[%d] = %d\n", i, matricula[i]);
            }
            break;

        case 2:
            printf("\nMatriculas na ordem inversa:\n");
            for(i = n-1; i >= 0; i--) { // Corrigido: começa em n-1
                printf("Aluno[%d] = %d\n", i, matricula[i]);
            }
            break;

       case 3:printf("As notas dos alunos de elementos par sao:\n");
                for(i=0;i<n;i++){
                        if(i%2==0){
                        printf("Aluno[%d]=%d\n",i,matricula[i]);
                        }
        }
            break;

        default:
            printf("Codigo invalido!\n");
    }

    return 0;
}
