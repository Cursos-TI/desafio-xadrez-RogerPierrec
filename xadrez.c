#include <stdio.h>

int main(){

    int torre = 1;
    int bispo = 1;

    //Movimento da torre
    //Simula o movimento da torre 5 casas à direita
    
    printf("Movimento da torre: \n");
    while(torre <= 5){
        printf("Direita\n");
        torre++;
    }

    //Movimento do bispo
    //Simula o movimento do bispo 5 casas na diagonal pra cima e direita

    printf("\nMovimento do bispo: \n");
    do
    {
        printf("Cima, direita\n");
        bispo++;
    } while (bispo <= 5);

    //Movimento da rainha
    //Simula o movimento da rainha 8 casas à esqueda
    
    printf("\nMovimento da Rainha: \n");
    for (int rainha = 1; rainha <= 8; rainha++)
    {
        printf("Esquerda\n");
    }

    //Movimento do cavalo
    //Simula o movimento do cavalo em L duas casas para baixo e uma para esquerda

    printf("\nMovimento do cavalo:\n");

    int movimentoCavalo = 1;

    while (movimentoCavalo--)
    {
        for (int i = 0; i < 2; i++)
        {
            printf("Baixo\n");
        }
        printf("Esquerda\n");
    }
    
    
    return 0;
}