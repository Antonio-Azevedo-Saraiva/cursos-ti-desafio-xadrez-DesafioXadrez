#include <stdio.h>

// Função recursiva para movimentar a Torre
void moverTorreRec(int casas, char direcao) {
    if (casas <= 0) return;
    switch (direcao) {
        case 'C': printf("Cima\n"); break;
        case 'B': printf("Baixo\n"); break;
        case 'E': printf("Esquerda\n"); break;
        case 'D': printf("Direita\n"); break;
    }
    moverTorreRec(casas - 1, direcao);
}

// Função recursiva e com loops aninhados para movimentar o Bispo
void moverBispoRec(int casas, char diagonal) {
    if (casas <= 0) return;
    int i, j;
    int movVert = 1; // Quantidade de casas verticais por passo
    int movHor = 1;  // Quantidade de casas horizontais por passo
    for (i = 0; i < movVert; i++) {
        if (diagonal == 'A' || diagonal == 'B') printf("Cima ");
        else printf("Baixo ");
        for (j = 0; j < movHor; j++) {
            if (diagonal == 'A' || diagonal == 'C') printf("Esquerda");
            else printf("Direita");
        }
        printf("\n");
    }
    moverBispoRec(casas - 1, diagonal);
}

// Funções recursivas auxiliares para cada direção da Rainha
void moverRainhaCima(int casas) {
    if (casas <= 0) return;
    printf("Cima\n");
    moverRainhaCima(casas - 1);
}
void moverRainhaBaixo(int casas) {
    if (casas <= 0) return;
    printf("Baixo\n");
    moverRainhaBaixo(casas - 1);
}
void moverRainhaEsquerda(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainhaEsquerda(casas - 1);
}
void moverRainhaDireita(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverRainhaDireita(casas - 1);
}
void moverRainhaCimaEsq(int casas) {
    if (casas <= 0) return;
    printf("Cima Esquerda\n");
    moverRainhaCimaEsq(casas - 1);
}
void moverRainhaCimaDir(int casas) {
    if (casas <= 0) return;
    printf("Cima Direita\n");
    moverRainhaCimaDir(casas - 1);
}
void moverRainhaBaixoEsq(int casas) {
    if (casas <= 0) return;
    printf("Baixo Esquerda\n");
    moverRainhaBaixoEsq(casas - 1);
}
void moverRainhaBaixoDir(int casas) {
    if (casas <= 0) return;
    printf("Baixo Direita\n");
    moverRainhaBaixoDir(casas - 1);
}

// Função principal da Rainha
void moverRainhaRec(int cima, int baixo, int esquerda, int direita, int cimaEsq, int cimaDir, int baixoEsq, int baixoDir) {
    moverRainhaCima(cima);
    moverRainhaBaixo(baixo);
    moverRainhaEsquerda(esquerda);
    moverRainhaDireita(direita);
    moverRainhaCimaEsq(cimaEsq);
    moverRainhaCimaDir(cimaDir);
    moverRainhaBaixoEsq(baixoEsq);
    moverRainhaBaixoDir(baixoDir);
}

// Movimenta o Cavalo aprimorado: duas casas para cima e uma para a direita (em "L")
void moverCavalo() {
    printf("Movimento do Cavalo: Duas casas para cima e uma para a direita (em L)\n");
    int casasCima = 2;
    int casasDireita = 1;
    int i, j;
    for (i = 0; i < 3; i++) { // máximo 3 movimentos, mas só executa o "L" correto
        if (i < casasCima) {
            printf("Cima\n");
            continue; // vai para o próximo movimento
        }
        for (j = 0; j < casasDireita; j++) {
            if (i == 2 && j == 0) {
                printf("Direita\n");
                break; // só faz uma vez
            }
        }
        break; // após o movimento em L, encerra
    }
}

int main() {
    // Exemplo de uso:
    int casasTorre = 4;
    int casasBispo = 3;

    printf("Movimento da Torre:\n");
    moverTorreRec(casasTorre, 'C'); // Torre para cima

    printf("\nMovimento do Bispo:\n");
    moverBispoRec(casasBispo, 'B'); // Bispo para cima-direita

    printf("\nMovimento da Rainha:\n");
    moverRainhaRec(2, 0, 0, 2, 1, 1, 0, 0); // Rainha: 2 cima, 2 direita, 1 cima-esquerda, 1 cima-direita

    printf("\n");
    moverCavalo(); // Cavalo: 2 baixo, 1 esquerda

    return 0;
}
