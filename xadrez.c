#include <stdio.h>

// --- Movimento da Torre com Recursividade ---
void moverTorreRecursivo(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorreRecursivo(casas - 1);
    }
}
    // Movimento do Bispo com Recursividade e Loops 
void moverBispoRecursivo(int casas) {
    if (casas > 0) {
        // Loop mais externo para simular um "passo" na diagonal (vertical)
        for (int i = 0; i < 1; i++) {
            // Loop mais interno para simular a instrução "horizontal" do movimento diagonal
            for (int j = 0; j < 1; j++) {
                printf("Cima, Direita\n");
            }
        }
        moverBispoRecursivo(casas - 1);
    }
}


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