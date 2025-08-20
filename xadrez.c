#include <stdio.h>

// Funções Recursivas

// Função recursiva para Torre (move para a direita)
void torre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    torre(casas - 1);
}

// Função recursiva + loops aninhados para Bispo (cima + direita)
void bispo(int casas) {
    if (casas == 0) return;

    // Loop externo
    for (int v = 0; v < 1; v++) {
        // Loop interno
        for (int h = 0; h < 1; h++) {
            printf("Cima\n");
            printf("Direita\n");
        }
    }

    bispo(casas - 1);
}

// Função recursiva para Rainha (move para a esquerda)
void rainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    rainha(casas - 1);
}

// Cavalo: duas casas para cima e uma para a direita (movimento em "L")
void cavalo() {
    int movimentos = 0;

    
    for (int i = 0; i < 3; i++) {
        if (i == 2) break;
        printf("Cima\n");
        movimentos++;
    }

    
    for (int j = 0; j < 2; j++) {
        if (j == 0) {
            printf("Direita\n");
            continue; 
        }
    }
}

// Função Principal
    int main() {
        
    // Quantidade de casas para cada peça
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Movimento da Torre
    printf("Movimento da Torre:\n");
    torre(casasTorre);

    // Movimento do Bispo
    printf("\nMovimento do Bispo:\n");
    bispo(casasBispo);

    // Movimento da Rainha
    printf("\nMovimento da Rainha:\n");
    rainha(casasRainha);

    // Movimento do Cavalo
    printf("\nMovimento do Cavalo:\n");
    cavalo();

    return 0;
}
