#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PRODUTOS 100

void atividade1() // Atividade 1
{
    float Valor1[10];            // Valores da Vetor .
    float Soma = 0;              // Variavel para Somar todos os valores
    float Media = 0;             // Variavel para calcular a media
    float ValorMaximo = 0;       // Variavel que recebe o Maior Valor encotrado .
    float ValorMinimo = 9999999; // Variavel que recebe o Menor Valor encontrado .

    for (int i = 0; i < 10; i++) // Preenchendo o Vetor
    {
        printf("Digite a Primeira %d :", i + 1);
        scanf("%f", &Valor1[i]); // Entrada de Valores a serem armazenados no Vetor

        Soma += Valor1[i]; // Soma  = Soma + valor

        if (ValorMinimo > Valor1[i]) // Verificação de menor Valor encontrado .
        {
            ValorMinimo = Valor1[i]; // // atualizando o Menor valor encontrado .
        }
        if (ValorMaximo < Valor1[i]) // Verificação de Maior encontrado .
        {
            ValorMaximo = Valor1[i]; // atualização do Maior valor encontrado .
        }
        Media = Soma / 10; // Calculando a Media .
        system("cls");
    }
    // Saida de Dados .
    printf(" A soma de todas as medidas e %.2f \n", Soma);
    printf(" A Media dos Valores foi %.2f \n", Media);
    printf("A menor Medida foi %.2f \n", ValorMinimo);
    printf(" A Maior Medida foi %.2f \n ", ValorMaximo);
}
void atividade2()
{
    int Matriz[3][3];  // Variável que armazena os valores da matriz
    int SomaP = 0;     // Variável para somar apenas os elementos da matriz principal
    int SomaS = 0;     // Variável para somar apenas os elementos da matriz secundária
    int SomaTotal = 0; // Variável para somar todos os valores da matriz
    float Media = 0;   // Variável para calcular a média da matriz

    // Preenchendo a matriz
    for (int l = 0; l < 3; l++)
    { // Percorrendo as linhas da matriz
        for (int c = 0; c < 3; c++)
        { // Percorrendo as colunas da matriz
            printf("Informe o valor da linha %d e coluna %d: ", l + 1, c + 1);
            scanf("%d", &Matriz[l][c]); // Atribuindo valores à matriz
            SomaTotal += Matriz[l][c];  // Somando todos os valores
            system("cls");
            if (l == c) // Verificando a diagonal principal
            {
                SomaP += Matriz[l][c]; // Somando elementos da diagonal principal
            }

            if (l + c == 3 - 1) // Verificando a diagonal secundária
            {
                SomaS += Matriz[l][c]; // Somando elementos da diagonal secundária
            }
        }
    }

    // Calculando a média
    Media = (float)SomaTotal / 9; // Dividindo a soma total pelo número de elementos (9)

    // Saída de dados
    printf("A Media dos valores e: %.2f\n", Media);
    printf("A soma da matriz Principal e: %d\n", SomaP);
    printf("A soma da matriz Secundaria e: %d\n", SomaS);
}

// incio da 3 ( recurso tecnico)
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
    struct Produto NovoProduto; // renomeando a Struct

    printf("Digite o nome do produto: ");
    scanf(" %[^\n]", &NovoProduto.nome); // Lê a string com espaços // Aplica atraves do Chat ( " %[^\n]")

    system("cls"); // Limpa tela

    printf("Digite a quantidade em estoque: "); // Add Estoque
    scanf("%d", &NovoProduto.quantidade);

    system("cls"); // Limpa tela

    printf("Digite o preco do produto: "); // Add Valor ao Produto
    scanf("%f", &NovoProduto.preco);

    system("cls"); // Limpa tela

    estoque[totalProdutos] = NovoProduto;
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
void atividade3()
{
    while (1)
    {
        system("cls");
        int opcao;
        printf("Menu:\n");
        printf("1. Cadastrar produto\n");
        printf("2. Listar produtos\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            cadastrarProduto();
            break;
        case 2:
            listarProdutos();
            break;
        case 0:
        }
    }
} // Fim da atividade 3 .

// Inicio da Atividade 4 .
struct at4 // Estrura para armazenar os nomes e as notas
{
    char Nome[50]; // Variavel para armazenar os nomes com o maximo de 50 caracteres
    float Notas;   // Variavel para armazenar as notas
};
struct at4 Alunos[5]; // Transformando a Estrura em Vetor

void atividade4() // Função para Cadastrar os Alunos
{
    struct at4 Cadastro; // Renomeameando a Estrutura para ultilizar para receber dados .

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o nome do %d Aluno : ", i + 1);
        scanf(" %[^\n]", Cadastro.Nome); // Cadastrando o Nome .
        system("cls");
        printf("Qual foi a nota do %s ", Cadastro.Nome);
        scanf("%f", &Cadastro.Notas); // Cadastrando as Notas .
        system("cls");
        Alunos[i] = Cadastro;
    }
    struct at4 temp; // renomenando a estrutura para ultiliza -la como temporaria

    // trocando as Posições .
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (Alunos[i].Notas < Alunos[j].Notas) // Verificando as notas para ordenar
            {
                // Trocar as posições dos alunos
                temp = Alunos[i];
                Alunos[i] = Alunos[j];
                Alunos[j] = temp;
            }
        }
    }
    printf("Lista de Alunos em Ordem Decrescente de Nota:\n"); // exibindo a lista em ordem Decrescente
    for (int i = 0; i < 5; i++)
    {
        printf("Nome: %s  Nota: %.2f\n", Alunos[i].Nome, Alunos[i].Notas);
    }
} // fim da atividade 4.

void atividade5()
{
    int Candidatos, voto;

    // Solicitar o número de candidatos
    printf("Digite o numero de candidatos: ");
    scanf("%d", &Candidatos);
    system("cls");

    // Verificar se o número de candidatos é válido
    if (Candidatos <= 0)
    {
        printf("Numero de candidatos invalido.\n");
        return ; // Encerrar o programa com código de erro
    }

    // Criar um vetor para armazenar os votos de cada candidato
    int Votos[100];

    // Inicializar o vetor de votos com 0
    for (int i = 0; i < Candidatos; i++)
    {
        Votos[i] = 0;
    }

    // Número de eleitores (para simplificar, assumimos um número fixo aqui)
    int numEleitores;
    printf("Digite o numero de eleitores: ");
    scanf("%d", &numEleitores);
    system("cls:");

        // Verificar se o número de eleitores é válido
        if (numEleitores <= Candidatos )
    {
        printf("Numero de eleitores invalido.\n");
        return ; // Encerrar o programa com código de erro
    }

    // Registrar os votos
    for (int i = 0; i < numEleitores; i++)
    {
        printf("Digite o numero do candidato (1 a %d) para o eleitor %d: ", Candidatos, i + 1);
        scanf("%d", &voto);

        // Verificar se o voto é válido
        if (voto >= 1 && voto <= Candidatos)
        {
            Votos[voto - 1]++; // Incrementar o voto para o candidato correspondente
        }
        else
        {
            printf("Voto invalido. Candidato nao existe.\n");
        }
    }

    // Exibir o número de votos de cada candidato
    printf("\nResultado da Votacao:\n");
    int vencedor = 0;
    int maxVotos = 0;
    for (int i = 0; i < Candidatos; i++)
    {
        printf("Candidato %d: %d votos\n", i + 1, Votos[i]);
        // Verificar o candidato com mais votos
        if (Votos[i] > maxVotos)
        {
            maxVotos = Votos[i];
            vencedor = i + 1; // Armazenar o número do candidato vencedor
        }
    }

    // Exibir o candidato vencedor
    printf("\nO vencedor e o Candidato %d com %d votos.\n", vencedor, maxVotos);
}

int main() // Programa Main
{

    system("cls");

    while (1) // Para Manter o Switch ativo ate que o usuario escolha Sair do loop.
    {
        system("cls");
        int opc; // Variavel para controlar o switch
        printf("Escolha uma ativadade de 1 ate 5 \n");
        printf("Ou Zero ( 0 ) para Sair :");
        scanf("%d", &opc);
        system("cls");

        switch (opc) // Opções a serem acessadas .
        {
        case 1:
            atividade1();
            system("pause");
            break;
        case 2:
            atividade2();
            system("pause");
            break;
        case 3:
            atividade3();
            system("pause");
            break;

        case 4:
            atividade4();
            system("pause");
            break;
        case 5:
            atividade5();
            system("pause");
            break;

        case 0:
            printf("Saindo do programa \n");
            system("pause");
            system("cls");
            return 0;
            break;

        default:

            printf("Opcao invalida tente novamente !\n");
            system("pause");
            break;
        }
    }

    system("pause");
    system("cls");
    return 0;
}