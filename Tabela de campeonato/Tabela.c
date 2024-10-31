#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define Max_times 20 // Definiçao de Maximo de Times Participantes.

struct Campeonato // Estrutura para armazenar todos os dados
{
    char Nome[20];
    int Jogos;
    int vitorias;
    int Derrotas;
    int empates;
    int pontos;
    int SaldoGols;
    int GolsTomados;
    int GolsFeitos;
};

struct Campeonato Equipes[Max_times]; // definindo a Estrutura para poder acrecentar espaço para obter varios dados
int contador = 0; // contador ultilizado para nao ultrapassar o limite de times cadastrados

void CadastroTimes() // Função para Cadastro dos Times
{
    if (contador >= Max_times) // Verificador do limite de times Cadastrados
    {
        printf("O limite de Times Ja foi atingido tente Novamente no Proximo Campeonato !\n");
        system("pause");
        system("cls");
        return;
    }
    int participantes;

    printf("Quantos times irao participar ? "); // Seleção de Quantos Times Iram participar
    scanf("%d", &participantes);
    system("cls");

    for (int i = 0; i < participantes; i++)  // Cadastrando os Times e os Dados Que iram receber.
    {
        printf("Nome do %d - time: ", i + 1);
        scanf("%s", Equipes[contador].Nome);

        Equipes[contador].Jogos = 0;
        Equipes[contador].vitorias = 0;
        Equipes[contador].Derrotas = 0;
        Equipes[contador].empates = 0;
        Equipes[contador].pontos = 0;
        Equipes[contador].SaldoGols = 0;
        Equipes[contador].GolsTomados = 0;
        Equipes[contador].GolsFeitos = 0;

        contador++;
    }
}

void Atualiza(int i, int j, int golA, int golB) // Função Gerenciadora da Tabela ( Parametro usado para manter as informaçôes obtidas na Simulação)
{
    if (golA > golB) // Verificação do Time mandante Ganhar
    {
        Equipes[i].vitorias++;
        Equipes[i].pontos += 3;
        Equipes[j].Derrotas++;
    }
    else if (golA < golB)  // Verificação do Time Mandante Perder 
    {
        Equipes[j].vitorias++;
        Equipes[j].pontos += 3;
        Equipes[i].Derrotas++;
    }
    else // Verificação Caso Aja Empate
    {
        Equipes[i].empates++;
        Equipes[j].empates++;
        Equipes[i].pontos += 1;
        Equipes[j].pontos += 1;
    }
    // Adicionando as informações dos Jogos a Estrutura 
    Equipes[i].GolsFeitos += golA;
    Equipes[i].GolsTomados += golB;
    Equipes[j].GolsFeitos += golB;
    Equipes[j].GolsTomados += golA;
    Equipes[i].SaldoGols = Equipes[i].GolsFeitos - Equipes[i].GolsTomados;
    Equipes[j].SaldoGols = Equipes[j].GolsFeitos - Equipes[j].GolsTomados;
    Equipes[i].Jogos++;
    Equipes[j].Jogos++;
}

void SimularIda() // Função que Simula o Jogo de Ida.
{
    int golA, golB; 
    
    for (int i = 0; i < contador; i++) // Define o time Mandante
       { for (int j = i + 1; j < contador; j++) // Define o Adversario
        {
            printf("%s X %s\n", Equipes[i].Nome, Equipes[j].Nome);
            printf("Gols marcados pelo time %s: ", Equipes[i].Nome);
            scanf("%d", &golA);
            printf("Gols marcados pelo time %s: ", Equipes[j].Nome);
            scanf("%d", &golB);

            Atualiza(i, j, golA, golB); // Chando a Função usando VariaVeis que seram ultilizadas no parametro ( incluindo as [i] e [j] criadas no for)
            system("cls");
        }
    }
}
void SimularVolta() // Simular jogo de volta
{
    int golA, golB;

   for (int i = contador - 1; i >= 0; i--) // Define o Mandante 
    {
        for (int j = i - 1; j >= 0; j--) // Define Adversario
        {
            printf("%s X %s\n", Equipes[i].Nome, Equipes[j].Nome);
            printf("Gols marcados pelo time %s: ", Equipes[i].Nome);
            scanf("%d", &golA);
            printf("Gols marcados pelo time %s: ", Equipes[j].Nome);
            scanf("%d", &golB);

            Atualiza(i, j, golA, golB); // Chando a Função usando VariaVeis que seram ultilizadas no parametro ( incluindo as [i] e [j] criadas no for)
            system("cls");
        }
    }
}
void OrdenarTabela() // Ordena a tabela
{
    struct Campeonato temp;
    for (int i = 0; i < contador - 1; i++)
    {   // Verificador de posição
        for (int j = i + 1; j < contador; j++)
        {
            if (Equipes[i].pontos < Equipes[j].pontos ||
                (Equipes[i].pontos == Equipes[j].pontos && Equipes[i].SaldoGols < Equipes[j].SaldoGols) ||
                (Equipes[i].pontos == Equipes[j].pontos && Equipes[i].SaldoGols == Equipes[j].SaldoGols && Equipes[i].vitorias < Equipes[j].vitorias))
            {
                temp = Equipes[i];
                Equipes[i] = Equipes[j];
                Equipes[j] = temp;
            }
        }
    }
}

void ExibirTabela() // Tabela de exibiçao Dos times
{
    printf("Tabela de Classificacao:\n");
    printf("Nome           | Jogos | Vitorias | Derrotas | Empates | Pontos | Saldo de Gols\n");
    printf("----------------------------------------------------------------------------------\n");
    for (int i = 0; i < contador; i++)
    {
        printf("%-15s | %5d | %8d | %8d | %7d | %6d | %13d\n",
               Equipes[i].Nome,
               Equipes[i].Jogos,
               Equipes[i].vitorias,
               Equipes[i].Derrotas,
               Equipes[i].empates,
               Equipes[i].pontos,
               Equipes[i].SaldoGols);
    }
}

int main() // Programa main
{
   
    system("cls"); //Limpa tela

    CadastroTimes(); // Chamado do Cadastro Dos times

    system("cls");

    SimularIda(); // Chamado do Jogo de Ida
    SimularVolta(); // Chamado do Jogo de Volta

    OrdenarTabela(); // Chamdo Do ordenador da Tabela

    system("cls"); // Limpa tela 

    ExibirTabela(); // Eximbindo o Resultado do Campeonato
    printf("\n");
    system("pause");
    system("cls");

    return 0;
}
