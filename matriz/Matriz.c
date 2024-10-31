#include <stdio.h>
#include <stdlib.h>

void Valores(int Linha, int Coluna)
{
    int i, j;

    int Matriz[100][100];     // Matriz Primaria
    int NovaMatriz[100][100]; // MAtriz que ira receber a Coluna no Lugar da Linha

    // Inicio da atribuição de valores da Matriz
    for (i = 0; i < Linha; i++)
    {
        for (j = 0; j < Coluna; j++)
        {
            printf("Digite o Valor da posicao Linha %d Coluna %d: ", i, j); // Informação sobre a Linha e Coluna que esta sendo preenchida
            scanf("%d", &Matriz[i][j]);                                     // Add os Valores
        }
    }

    printf("Matriz Preenchida!\n"); // Mensagem de Comculsão da Matriz
    system("Pause");
    system("cls");

    printf("Matriz Primaria\n"); // Exibindo a Matriz Principal
    for (i = 0; i < Linha; i++)
    {
        for (j = 0; j < Coluna; j++)
        {
            printf("| %d | ", Matriz[i][j]);
        }
        printf("\n");
    }

    // Transpondo a matriz
    for (i = 0; i < Linha; i++)
    {
        for (j = 0; j < Coluna; j++)
        {
            NovaMatriz[j][i] = Matriz[i][j];
        }
    }

    system("pause");
    printf("\n\n");
    printf("Matriz com a invertida Linha no Lugar de Coluna\n");
    // Exibindo a matriz transposta
    for (i = 0; i < Coluna; i++)
    {
        for (j = 0; j < Linha; j++)
        {

            printf("| %d | ", NovaMatriz[i][j]);
        }
        printf("\n");
    }
}

int main() // Programa Main
{
    int Linha = 0;  // Variavel para Linhas
    int Coluna = 0; // Variavel para Colunas

    printf("Qual a quantidade de Linhas? ");
    scanf("%d", &Linha); // definhndo o total de inhas.

    printf("Qual o Numero de Colunas? ");
    scanf("%d", &Coluna); // Definindo o Total de colunas

    system("cls");

    Valores(Linha, Coluna); // Chamando a Função para Criar a Matriz

    system("pause");
    system("cls");

    return 0; // Bay
}