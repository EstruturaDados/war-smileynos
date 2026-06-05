#include <stdio.h>
#include <string.h>

// Definição da struct para armazenar os dados de um território
struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};

int main() {
    // Vetor para armazenar 5 territórios
    struct Territorio territorios[5];

    int i;

    printf("=== CADASTRO DE TERRITORIOS ===\n\n");

    // Entrada de dados
    for (i = 0; i < 5; i++) {
        printf("Territorio %d\n", i + 1);

        printf("Nome: ");
        scanf("%29s", territorios[i].nome);

        printf("Cor do exercito: ");
        scanf("%9s", territorios[i].cor);

        printf("Numero de tropas: ");
        scanf("%d", &territorios[i].tropas);

        printf("\n");
    }

    // Exibição dos dados cadastrados
    printf("\n=== TERRITORIOS CADASTRADOS ===\n\n");

    for (i = 0; i < 5; i++) {
        printf("Territorio %d\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do exercito: %s\n", territorios[i].cor);
        printf("Numero de tropas: %d\n", territorios[i].tropas);
        printf("----------------------------\n");
    }

    return 0;
}