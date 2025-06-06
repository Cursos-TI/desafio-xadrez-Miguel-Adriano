#include <stdio.h>

/*
    Desafio de Xadrez - MateCheck (Nível Mestre)
    Simulação da movimentação de Torre, Bispo, Rainha e Cavalo usando recursividade e loops complexos.

    - Torre, Bispo e Rainha: movimentos implementados com funções recursivas.
    - Bispo: também possui versão com loops aninhados (vertical e horizontal).
    - Cavalo: movimento em "L" (duas casas para cima e uma para a direita) usando loops aninhados e múltiplas condições.
*/

// Função recursiva para movimentação da Torre (direita)
void moverTorreRecursivo(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorreRecursivo(casas - 1);
}

// Função recursiva para movimentação da Rainha (esquerda)
void moverRainhaRecursivo(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainhaRecursivo(casas - 1);
}

// Função recursiva para movimentação do Bispo (diagonal: cima + direita)
void moverBispoRecursivo(int casas) {
    if (casas == 0) return;
    printf("Cima\n");
    printf("Direita\n");
    moverBispoRecursivo(casas - 1);
}

// Função para movimentação do Bispo usando loops aninhados
void moverBispoLoops(int casas_vertical, int casas_horizontal) {
    // O loop externo representa o movimento vertical (cima)
    for (int v = 1; v <= casas_vertical; v++) {
        // O loop interno representa o movimento horizontal (direita)
        for (int h = 1; h <= casas_horizontal; h++) {
            printf("Cima\n");
            printf("Direita\n");
            // Como o bispo só anda uma casa na diagonal por vez, podemos usar break para sair após um movimento
            break;
        }
    }
}

// Função para movimentação do Cavalo em "L" (duas casas para cima e uma para a direita)
// Utiliza loops aninhados, múltiplas variáveis e condições, além de continue/break
void moverCavaloL(int movimentos) {
    // Cada movimento do cavalo é composto por duas casas para cima e uma para a direita
    for (int m = 1; m <= movimentos; m++) {
        int casas_cima = 2;
        int casas_direita = 1;
        int passo = 1;
        // Loop para casas para cima
        for (int i = 1; i <= casas_cima; i++) {
            if (i == 2 && m % 2 == 0) {
                // Exemplo de uso de continue: pula o segundo passo se o movimento for par (apenas para ilustrar)
                continue;
            }
            printf("Cima\n");
        }
        // Loop para casas para a direita
        for (int j = 1; j <= casas_direita; j++) {
            if (j > 1) break; // Exemplo de uso de break: nunca executa mais de uma vez
            printf("Direita\n");
        }
    }
}

int main() {
    // Constantes para o número de casas de movimento de cada peça
    const int casas_torre = 5;
    const int casas_bispo = 5;
    const int casas_rainha = 8;
    const int movimentos_cavalo = 2; // Quantas vezes queremos simular o movimento em "L"

    // -------------------------------
    // Movimentação da Torre (Recursivo)
    // -------------------------------
    printf("Movimentação da Torre:\n");
    moverTorreRecursivo(casas_torre);

    // -------------------------------
    // Movimentação do Bispo (Recursivo)
    // -------------------------------
    printf("\nMovimentação do Bispo (Recursivo):\n");
    moverBispoRecursivo(casas_bispo);

    // -------------------------------
    // Movimentação do Bispo (Loops Aninhados)
    // -------------------------------
    printf("\nMovimentação do Bispo (Loops Aninhados):\n");
    moverBispoLoops(casas_bispo, 1);

    // -------------------------------
    // Movimentação da Rainha (Recursivo)
    // -------------------------------
    printf("\nMovimentação da Rainha:\n");
    moverRainhaRecursivo(casas_rainha);

    // -------------------------------
    // Movimentação do Cavalo (Loops Complexos)
    // -------------------------------
    printf("\nMovimentação do Cavalo:\n");
    moverCavaloL(movimentos_cavalo);

    return 0;
}
