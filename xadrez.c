#include <stdio.h>

int main() {
    
    // Número de casas a serem movimentadas
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    //Movimento da torre
    //Simula o movimento da torre 5 casas à direita

    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    //Movimento do bispo
    //Simula o movimento do bispo 5 casas na diagonal pra cima e direita
    
    printf("\nMovimento do Bispo:\n");
    int i = 1;
    while (i <= casasBispo) {
        printf("Cima, Direita\n");
        i++;
    }

    //Movimento da rainha
    //Simula o movimento da rainha 8 casas à esqueda

    printf("\nMovimento da Rainha:\n");
    int j = 1;
    do {
        printf("Esquerda\n");
        j++;
    } while (j <= casasRainha);

    return 0;
}
