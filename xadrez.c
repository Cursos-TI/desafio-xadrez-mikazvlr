#include <stdio.h>

int main() {
    // ============================
    // Movimento da TORRE (for loop)
    // ============================
    const int movimentoTorre = 5;
    printf("Movimento da Torre:\n");

    for (int i = 0; i < movimentoTorre; i++) {
        printf("Direita\n");
    }

    // Linha em branco para separar os movimentos
    printf("\n");

    // =============================
    // Movimento do BISPO (while loop)
    // =============================
    const int movimentoBispo = 5;
    int contadorBispo = 0;
    printf("Movimento do Bispo:\n");

    while (contadorBispo < movimentoBispo) {
        printf("Cima, Direita\n");
        contadorBispo++;
    }

    // Linha em branco para separar os movimentos
    printf("\n");

    // ================================
    // Movimento da RAINHA (do-while loop)
    // ================================
    const int movimentoRainha = 8;
    int contadorRainha = 0;
    printf("Movimento da Rainha:\n");

    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < movimentoRainha);

    return 0;
}