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


    // --- Movimento da Rainha com Recursividade ---
void moverRainhaRecursivo(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainhaRecursivo(casas - 1);
    }
}

int main() {
    //  Movimento da Torre (Recursivo) 
    printf("Movimento da Torre (Recursivo):\n");
    int casasTorre = 5;
    moverTorreRecursivo(casasTorre);
    printf("\n");

     // --- Movimento do Bispo (Recursivo com Loops Aninhados) ---
    printf("Movimento do Bispo (Recursivo com Loops Aninhados):\n");
    int casasBispo = 5;
    moverBispoRecursivo(casasBispo);
    printf("\n");

    // --- Movimento da Rainha (Recursivo) ---
    printf("Movimento da Rainha (Recursivo):\n");
    int casasRainha = 8;
    moverRainhaRecursivo(casasRainha);
    printf("\n");

    // --- Movimento do Cavalo (Loops Aninhados Complexos) ---
    printf("Movimento do Cavalo (Loops Aninhados Complexos):\n");
    int movimentoCavaloTotal = 3;
    int passos = 0;

    // Loop externo para controlar o número total de "etapas" do movimento
    for (int i = 0; passos < movimentoCavaloTotal; i++) {
        // Loop interno para simular as duas casas para cima
        int cima = 0;
        while (cima < 2 && passos < movimentoCavaloTotal) {
            printf("Cima\n");
            passos++;
            cima++;
            if (cima == 2 && passos < movimentoCavaloTotal) {
                // Após duas para cima, move uma para a direita
                for (int direita = 0; direita < 1; direita++) {
                    printf("Direita\n");
                    passos++;
                    if (passos == movimentoCavaloTotal) break; // Sai do loop interno
                }
            }
        }
        if (passos == movimentoCavaloTotal) break; // Sai do loop externo
    }
    printf("\n");

    return 0;
}