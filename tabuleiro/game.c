#include <stdio.h>
#include <stdlib.h>

// Função para inicializar o tabuleiro
void inicializarTabuleiro(char tabuleiro[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            tabuleiro[i][j] = ' ';
        }
    }
}

// Função para exibir o tabuleiro
void exibirTabuleiro(char tabuleiro[3][3]) {
    printf("\n %c | %c | %c \n", tabuleiro[0][0], tabuleiro[0][1], tabuleiro[0][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", tabuleiro[1][0], tabuleiro[1][1], tabuleiro[1][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n\n", tabuleiro[2][0], tabuleiro[2][1], tabuleiro[2][2]);
}

// Função para verificar se há um vencedor
int verificarVencedor(char tabuleiro[3][3]) {
    // Verificar linhas e colunas
    for (int i = 0; i < 3; i++) {
        if (tabuleiro[i][0] == tabuleiro[i][1] && tabuleiro[i][1] == tabuleiro[i][2] && tabuleiro[i][0] != ' ') return 1;
        if (tabuleiro[0][i] == tabuleiro[1][i] && tabuleiro[1][i] == tabuleiro[2][i] && tabuleiro[0][i] != ' ') return 1;
    }
    // Verificar diagonais
    if (tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][2] && tabuleiro[0][0] != ' ') return 1;
    if (tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][0] && tabuleiro[0][2] != ' ') return 1;
    return 0;
}

// Função para verificar se o tabuleiro está cheio
int tabuleiroCheio(char tabuleiro[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (tabuleiro[i][j] == ' ') return 0;
        }
    }
    return 1;
}

int main() {
    char tabuleiro[3][3];
    int linha, coluna;
    char jogadorAtual = 'X';

    inicializarTabuleiro(tabuleiro);

    while (1) {
        system("cls");
        exibirTabuleiro(tabuleiro);
        printf("Jogador %c, insira linha e coluna (0-2): ", jogadorAtual);
        scanf("%d %d", &linha, &coluna);

        // Verificar se a entrada é válida
        if (linha < 0 || linha > 2 || coluna < 0 || coluna > 2 || tabuleiro[linha][coluna] != ' ') {
            printf("Movimento invalido. Tente novamente.\n");
            continue;
        }

        // Fazer o movimento
        tabuleiro[linha][coluna] = jogadorAtual;

        // Verificar se há um vencedor
        if (verificarVencedor(tabuleiro)) {
            exibirTabuleiro(tabuleiro);
            system("cls");
            printf("Parabens, jogador %c! Voce venceu!\n", jogadorAtual);
            break;
        }

        // Verificar se o tabuleiro está cheio
        if (tabuleiroCheio(tabuleiro)) {
            exibirTabuleiro(tabuleiro);
            printf("Empate!\n");
            break;
        }

        // Trocar de jogador
        jogadorAtual = (jogadorAtual == 'X') ? 'O' : 'X';
    }

    return 0;
}
