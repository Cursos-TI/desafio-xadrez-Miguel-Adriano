#include <stdio.h>

// Desafio de Xadrez - MateCheck

int main() {
    // Constantes para o número de casas de movimento de cada peça
    const int casas_torre = 5;
    const int casas_bispo = 5;
    const int casas_rainha = 8;

    // -------------------------------
    // Movimentação da Torre (FOR)
    // -------------------------------
    // A Torre se move em linha reta. Aqui, simulamos 5 casas para a direita.
    printf("Movimentação da Torre:\n");
    for (int i = 1; i <= casas_torre; i++) {
        printf("Direita\n");
    }

    // -------------------------------
    // Movimentação do Bispo (WHILE)
    // -------------------------------
    // O Bispo se move na diagonal. Aqui, simulamos 5 casas para cima e à direita.
    printf("\nMovimentação do Bispo:\n");
    int j = 1;
    while (j <= casas_bispo) {
        printf("Cima Direita\n");
        j++;
    }

    // -------------------------------
    // Movimentação da Rainha (DO-WHILE)
    // -------------------------------
    // A Rainha se move em todas as direções. Aqui, simulamos 8 casas para a esquerda.
    printf("\nMovimentação da Rainha:\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= casas_rainha);

    return 0;
}
