#include <stdio.h>

int main() {
    // Declaração de variáveis
    int matricula1, n_convidados1, matricula2, n_convidados2, matricula3, n_convidados3, matricula4, n_convidados4, matricula5, n_convidados5;
    int convidados_total, n_garcons, n_segurancas;
    float c_salao, c_som, c_decoracao, valorFinal_igual, valorFinal_diferente, valor_bebidas, v_seguranca, v_garcon;
    float valor_m1, valor_m2, valor_m3, valor_m4, valor_m5, valorf1, valorf2, valorf3, valorf4, valorf5;
    float lista_c1, lista_c2, lista_c3, lista_c4, lista_c5;

    // Inicialização dos custos fixos
    c_salao = 2000.0;
    c_som = 500.0;
    c_decoracao = 800.0;
    v_garcon = 100.0;
    v_seguranca = 150.0;

    // Entrada de dados
    // 1ª matrícula
    printf("Informe o numero da sua matricula:\n ");
    scanf("%d", &matricula1);
    printf("Informe o numero de convidados:\n ");
    scanf("%d", &n_convidados1);

    // 2ª matrícula
    printf("Informe o numero da sua matricula:\n ");
    scanf("%d", &matricula2);
    printf("Informe o numero de convidados:\n ");
    scanf("%d", &n_convidados2);

    // 3ª matrícula
    printf("Informe o numero da sua matricula:\n ");
    scanf("%d", &matricula3);
    printf("Informe o numero de convidados:\n ");
    scanf("%d", &n_convidados3);

    // 4ª matrícula
    printf("Informe o numero da sua matricula:\n ");
    scanf("%d", &matricula4);
    printf("Informe o numero de convidados:\n ");
    scanf("%d", &n_convidados4);

    // 5ª matrícula
    printf("Informe o numero da sua matricula:\n ");
    scanf("%d", &matricula5);
    printf("Informe o numero de convidados:\n ");
    scanf("%d", &n_convidados5);

    // Cálculos
    valorFinal_igual = (c_salao + c_som + c_decoracao) / 5;

    convidados_total = n_convidados1 + n_convidados2 + n_convidados3 + n_convidados4 + n_convidados5;

    lista_c1 = (float)n_convidados1 / convidados_total;
    lista_c2 = (float)n_convidados2 / convidados_total;
    lista_c3 = (float)n_convidados3 / convidados_total;
    lista_c4 = (float)n_convidados4 / convidados_total;
    lista_c5 = (float)n_convidados5 / convidados_total;

    n_garcons = (convidados_total + 47) / 48; // Arredondamento para cima
    n_segurancas = (convidados_total + 79) / 80; // Arredondamento para cima

    valor_bebidas = 10.0 * convidados_total;

    valorFinal_diferente = valor_bebidas + n_garcons * v_garcon + n_segurancas * v_seguranca;

    valor_m1 = valorFinal_diferente * lista_c1;
    valor_m2 = valorFinal_diferente * lista_c2;
    valor_m3 = valorFinal_diferente * lista_c3;
    valor_m4 = valorFinal_diferente * lista_c4;
    valor_m5 = valorFinal_diferente * lista_c5;

    valorf1 = valor_m1 + valorFinal_igual;
    valorf2 = valor_m2 + valorFinal_igual;
    valorf3 = valor_m3 + valorFinal_igual;
    valorf4 = valor_m4 + valorFinal_igual;
    valorf5 = valor_m5 + valorFinal_igual;

    // Saída de dados
    printf("\nMatricula: %d\n", matricula1);
    printf("Numero de convidados: %d\n", n_convidados1);
    printf("Custo total: R$ %.2f\n", valorf1);

    printf("\nMatricula: %d\n", matricula2);
    printf("Numero de convidados: %d\n", n_convidados2);
    printf("Custo total: R$ %.2f\n", valorf2);

    printf("\nMatricula: %d\n", matricula3);
    printf("Numero de convidados: %d\n", n_convidados3);
    printf("Custo total: R$ %.2f\n", valorf3);

    printf("\nMatricula: %d\n", matricula4);
    printf("Numero de convidados: %d\n", n_convidados4);
    printf("Custo total: R$ %.2f\n", valorf4);

    printf("\nMatricula: %d\n", matricula5);
    printf("Numero de convidados: %d\n", n_convidados5);
    printf("Custo total: R$ %.2f\n", valorf5);

    return 0;
}
