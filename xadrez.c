#include <stdio.h>

int main() {
    // Movimento da Torre (horizontalmente para a direita) - utilizando 'for'
    printf("Movimento da Torre:\n");
    int casasTorre = 5;
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Movimento do Bispo (diagonalmente para cima e à direita) - usando 'while'
    printf("Movimento do Bispo:\n");
    int casasBispo = 5;
    int movimentoBispo = 0;
    while (movimentoBispo < casasBispo) {
        printf("Cima, Direita\n");
        movimentoBispo++;
    }
    printf("\n");

    // Movimento da Rainha (horizontalmente para a esquerda) - usando 'do-while'
    printf("Movimento da Rainha:\n");
    int casasRainha = 8;
    int movimentoRainha = 0;
    do {
        printf("Esquerda\n");
        movimentoRainha++;
    } while (movimentoRainha < casasRainha);
    printf("\n");

    return 0;
}