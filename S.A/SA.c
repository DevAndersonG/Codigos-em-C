#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_PRODUTOS 100 // definindo o maximo de Produtos cadastrados para 100

// Estruct para armazenar informações dos Produtos
struct Produto
{
    char nome[50];  // Armazenar o nome dos produtos
    int quantidade; // Armazenar a Quantidade de Produtos
    float preco;    // Armazenar o Valor dos Produtos
};
struct Produto estoque[MAX_PRODUTOS];
int totalProdutos = 0;

// Função para cadastrar um novo produto
void cadastrarProduto()
{
    system("cls");

    if (totalProdutos >= MAX_PRODUTOS)
    { // Verifica se ja atingiu o numero maximo de Produtos no estoque
        printf("Erro , estoque cheio.\n");
        return;
    }

    // Cadastrando um novo produto
    struct Produto novoProduto; // renomeando a Struct

    printf("Digite o nome do produto: ");
    scanf(" %[^\n]", &novoProduto.nome); // Lê a string com espaços // Aplica atraves do Chat ( " %[^\n]")

    system("cls"); // Limpa tela

    printf("Digite a quantidade em estoque: "); // Add Estoque
    scanf("%d", &novoProduto.quantidade);

    system("cls"); // Limpa tela

    printf("Digite o preco do produto: "); // Add Valor ao Produto
    scanf("%f", &novoProduto.preco);

    system("cls"); // Limpa tela

    estoque[totalProdutos] = novoProduto;
    totalProdutos++; // Add um Contador para quantidade de Produtos

    printf("Produto cadastrado com sucesso!\n\n");
    system("pause"); // Comando ultilizado para fazer o programa contunuar apenas quando o usuario apertar uma tecla qualquer
}

// Função para listar todos os produtos
void listarProdutos()
{ // renomenando a struct para reultiliza-la
    if (totalProdutos == 0)
    { // teste logico para saber se possui itens no estoque
        printf("Nenhum produto cadastrado.\n\n");
        system("pause");
        return;
    }

    printf("Lista de Produtos:\n"); // Lista de Produtos
    for (int i = 0; i < totalProdutos; i++)
    {
        system("cls"); // Limpa tela

        printf("Nome: %s\n", estoque[i].nome);
        printf("Quantidade: %d\n", estoque[i].quantidade);
        printf("Preco: %.2f\n\n", estoque[i].preco);

        system("pause");
        system("cls"); // Limpa tela
    }
}

// Função para atualizar a quantidade de  Produtos em estoque
void atualizarEstoque()
{
    char nomeProduto[50];
    int novaQuantidade;

    system("cls"); // Limpa tela

    printf("Digite o nome do produto a ser atualizado: ");
    scanf(" %[^\n]", &nomeProduto);

    for (int i = 0; i < totalProdutos; i++)
    {
        if (strcmp(estoque[i].nome, nomeProduto) == 0) // comparador de vetor de string
        {
            printf("Quantidade atual: %d\n", estoque[i].quantidade); // atualzando quantidae de produtos do estoque
            printf("Digite a nova quantidade: ");
            scanf("%d", &novaQuantidade);

            estoque[i].quantidade = novaQuantidade; // Atualização do estoque

            system("cls"); // Limpa tela

            printf("Estoque atualizado com sucesso!\n");

            system("pause");
            return;
        }
    }

    printf("Produto nao encontrado.\n\n"); // Mensagem caso nao aja produtos em estoque
    system("pause");
}

// Função para consultar um produto
void consultarProduto()
{
    system("cls"); // Limpa tela

    char nomeProduto[50];

    printf("Digite o nome do produto para consulta: ");
    scanf(" %[^\n]", &nomeProduto);

    system("cls");

    for (int i = 0; i < totalProdutos; i++)
    {
        if (strcmp(estoque[i].nome, nomeProduto) == 0) // busancando produto entre vetores
        {
            printf("Nome: %s\n", estoque[i].nome);
            printf("Quantidade: %d\n", estoque[i].quantidade);
            printf("Preco: %.2f\n", estoque[i].preco);

            system("pause");
            return;
        }
    }

    printf("Produto nao encontrado.\n\n"); // erro ao nao possuir produto ou nome escrito incorretamente
    system("pause");
}

int main()
{

    int opcao; // varival que controla o switch

    while (1)
    {
        system("cls"); // Limpa tela

        printf("Menu:\n");
        printf("1. Cadastrar produto\n");
        printf("2. Listar produtos\n");
        printf("3. Atualizar estoque\n");
        printf("4. Consultar produto\n");
        printf("5. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            cadastrarProduto(); // Chamado para cadastrar
            break;
        case 2:
            listarProdutos(); // Chamado para Mostrar os Produtos Cadastrados
            break;
        case 3:
            atualizarEstoque(); // Chamado para Atualizar a Quantidade de Produtos em estoque
            break;
        case 4:
            consultarProduto(); // Consultar Estoque
            break;
        case 5:
            printf("Saindo...\n\n"); // Finalizar o Programa .
            system("pause");
            system("cls"); // Limpa tela
            return 0;
        default:
            printf("Opçao invalida. Tente novamente.\n"); // tratando de Opções Erradas
            break;
        }
    }

    return 0;
}
