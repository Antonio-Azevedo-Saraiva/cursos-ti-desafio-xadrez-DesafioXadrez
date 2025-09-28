#include <stdio.h>

// Movimenta a Torre
void moverTorre(int casas, char direcao) {
    for (int i = 0; i < casas; i++) {
        switch (direcao) {
            case 'C': printf("Cima\n"); break;
            case 'B': printf("Baixo\n"); break;
            case 'E': printf("Esquerda\n"); break;
            case 'D': printf("Direita\n"); break;
        }
    }
}

// Movimenta o Bispo
void moverBispo(int casas, char diagonal) {
    for (int i = 0; i < casas; i++) {
        switch (diagonal) {
            case 'A': printf("Cima Esquerda\n"); break;
            case 'B': printf("Cima Direita\n"); break;
            case 'C': printf("Baixo Esquerda\n"); break;
            case 'D': printf("Baixo Direita\n"); break;
        }
    }
}

// Movimenta a Rainha (exemplo: 3 casas para cima, 2 para direita)
void moverRainha(int cima, int baixo, int esquerda, int direita, int cimaEsq, int cimaDir, int baixoEsq, int baixoDir) {
    for (int i = 0; i < cima; i++) printf("Cima\n");
    for (int i = 0; i < baixo; i++) printf("Baixo\n");
    for (int i = 0; i < esquerda; i++) printf("Esquerda\n");
    for (int i = 0; i < direita; i++) printf("Direita\n");
    for (int i = 0; i < cimaEsq; i++) printf("Cima Esquerda\n");
    for (int i = 0; i < cimaDir; i++) printf("Cima Direita\n");
    for (int i = 0; i < baixoEsq; i++) printf("Baixo Esquerda\n");
    for (int i = 0; i < baixoDir; i++) printf("Baixo Direita\n");
}

// Movimenta o Cavalo
void moverCavalo() {
    int i;
    printf("Movimento do Cavalo: Duas casas para baixo e uma para esquerda\n");
    // Duas casas para baixo (usando for)
    for (i = 0; i < 2; i++) {
        printf("Baixo\n");
    }
    // Uma casa para esquerda (usando while)
    int j = 0;
    while (j < 1) {
        printf("Esquerda\n");
        j++;
    }
}

int main() {
    // Exemplo de uso:
    int casasTorre = 4;
    int casasBispo = 3;

    printf("Movimento da Torre:\n");
    moverTorre(casasTorre, 'C'); // Torre para cima

    printf("\nMovimento do Bispo:\n");
    moverBispo(casasBispo, 'B'); // Bispo para cima-direita

    printf("\nMovimento da Rainha:\n");
    moverRainha(2, 0, 0, 2, 1, 1, 0, 0); // Rainha: 2 cima, 2 direita, 1 cima-esquerda, 1 cima-direita

    printf("\n");
    moverCavalo(); // Cavalo: 2 baixo, 1 esquerda

    return 0;
}
