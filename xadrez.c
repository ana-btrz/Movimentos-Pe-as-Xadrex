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

    // Movimento do Cavalo (duas casas para baixo e uma para a esquerda) - usando 'for' e 'while' 
    printf("Movimento do Cavalo:\n");
    int movimentoCavaloTotal = 3; // O Cavalo se move 3 "casas" no total (2 + 1)
    int passosCavalo = 0; // variével passosCavalo

    // Primeiro, move duas casas para baixo (usando um loop for - controla o número de passos nessa direção)
    for (int i = 0; i < 2; i++) {
        printf("Baixo\n");
        passosCavalo++;
    }

    // Depois, move uma casa para a esquerda (usando um loop while para controlar esse passo final)
    while (passosCavalo < movimentoCavaloTotal) {
        printf("Esquerda\n");
        passosCavalo++;
    }
    printf("\n");
    
    return 0;
}