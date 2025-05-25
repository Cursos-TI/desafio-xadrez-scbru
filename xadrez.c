#include <stdio.h>

// Função recursiva para movimentar a Torre (direita)
void moverTorreDireita(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorreDireita(casas - 1);
}

// Função recursiva para movimentar a Rainha (esquerda)
void moverRainhaEsquerda(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainhaEsquerda(casas - 1);
}

// Função recursiva para movimentar o Bispo (diagonal cima-direita)
void moverBispoDiagonal(int casas) {
    if (casas == 0) return;
    printf("Cima Direita\n");
    moverBispoDiagonal(casas - 1);
}

// Função com loops aninhados para simular o Cavalo (2 para cima, 1 para direita)
void moverCavalo() {
    int movimentos = 1;  // Número de vezes que o Cavalo se moverá
    int passoVertical = 2;
    int passoHorizontal = 1;

    for (int m = 0; m < movimentos; m++) {
        for (int i = 0; i < passoVertical; i++) {
            if (i == 1) continue;  // Exemplo de controle de fluxo
            printf("Cima\n");
        }

        for (int j = 0; j < passoHorizontal; j++) {
            printf("Direita\n");
            if (j == 0) break;  // Exemplo de uso de break
        }
    }
}

// Versão com loops aninhados para o Bispo (cima + direita por casas diagonais)
void moverBispoComLoops(int casas) {
    for (int i = 0; i < casas; i++) { // Movimento vertical (cima)
        for (int j = 0; j < 1; j++) { // Movimento horizontal (direita)
            printf("Cima Direita\n");
        }
    }
}

int main() {
    // Quantidade de casas para cada peça
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Movimentar Torre recursivamente
    moverTorreDireita(casasTorre);
    printf("\n");

    // Movimentar Bispo recursivamente
    moverBispoDiagonal(casasBispo);
    printf("\n");

    // Movimentar Rainha recursivamente
    moverRainhaEsquerda(casasRainha);
    printf("\n");

    // Movimentar Cavalo com loops complexos
    moverCavalo();
    printf("\n");

    // Movimentar Bispo com loops aninhados
    moverBispoComLoops(casasBispo);
    printf("\n");

    return 0;
}