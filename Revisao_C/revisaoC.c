#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <conio.h>
#include <time.h>
// Inicio do codigo das atividades.
void atividade1()
{
    // Variaveis
    int Numero1, Numero2, Numero3, Soma;

    // Leitura dos numeros
    printf("Digite o valor do primeiro numero: \n");
    scanf("%d", &Numero1);

    printf("Digite o valor do segundo numero: \n");
    scanf("%d", &Numero2);

    printf("Digite o valor do terceiro numero: \n");
    scanf("%d", &Numero3);

    // Calculo da soma dos dois primeiros numeros
    Soma = Numero1 + Numero2;

    // Exibindo da soma
    printf("A soma do primeiro e segundo numeros e: %d\n", Soma);

    // Comparamparando com o terceiro numero
    if (Soma >= Numero3)
    {
        printf("A soma do primeiro e segundo numeros e maior ou igual ao terceiro.\n");
    }
    else
    {
        printf("A soma do primeiro e segundo numeros e menor que o terceiro.\n");
    }
}
void atividade2()
{
    // Variaveis
    int Numero;

    // Leitura
    printf("Digite um numero para saber se e Par ou Impar:\n");
    scanf("%d", &Numero);

    system("cls");
    // Verificação / Resposta
    if (Numero % 2 == 0)
    {
        printf("O numero %d e (Par)\n", Numero);
    }
    else
    {
        printf("O numero %d e (Impar)\n", Numero);
    }
}
void atividade3()
{
    // Variaveis .
    int Num1, Num2, Soma;

    // Entrada de Dados .
    printf("Digite o Primeiro Numero :");
    scanf("%d", &Num1);
    system("cls");
    printf("Digite o Segundo Numero :");
    scanf("%d", &Num2);
    system("cls");

    // Desenvolvimento / Saida de dados .
    if (Num1 == Num2)
    {
        Soma = Num1 + Num2;
        printf("Como foi Digitado dos numeros iguais sera feito a Soma deles e igual a %d \n ", Soma);
    }
    else
    {
        Soma = Num1 * Num2;
        printf("Os numeros digitados sao diferentes entao serao multiplicados e o resustado e %d \n", Soma);
    }
}
void atividade4()
{

    // Variaveis.
    int Numero;

    // Declaraçao da das Variaveis

    printf("Digite um Numero para saber seu Antecessor e Sucessor.");
    scanf("%d", &Numero);
    system("cls");

    // Saida de dados .
    printf("O Numero digitado foi %d \n", Numero);
    printf("Seu Antecessor e %d \n ", Numero - 1);
    printf("e seu Sucessor e %d \n ", Numero + 1);
}
void atividade5()
{
    // Definindo o valor do salário mínimo
    const float Salario_Minimo = 1293.20;

    // Declarando a variável para o salário do usuário
    float Salario_Usuario;

    // Lendo o valor do salário do usuário
    printf("Digite o valor do salario do usuario: R$ ");
    scanf("%f", &Salario_Usuario);

    // Calculando quantos salários mínimos o usuário ganha
    float quant_salarios_minimos = Salario_Usuario / Salario_Minimo;

    // Imprimindo o resultado
    printf("O usuario ganha %.2f salarios minimos.\n\n\n", quant_salarios_minimos);
}
void atividade6()
{
    // Declara uma variável.
    float valor;

    // Solicita ao usuário para inserir um valor
    printf("Digite um valor: ");
    scanf("%f", &valor);

    // Calcula o reajuste de 5%
    float reajuste = valor * 0.05;
    float reajustado = valor + reajuste;

    // Imprime o valor ajustado
    printf("Valor com reajuste de 5%%: %.2f\n", reajustado);
}
void atividade7()
{
    // Variaveis
    int valor1, valor2;
    bool i; // Declara uma variável booleana
    char verdade[10] = "Verdade", falso[10] = "Falso";

    // Solicita ao usuário para inserir os valores
    printf("Digite o Primeiro Numero: ");
    scanf("%d", &valor1);

    printf("Digite o Segundo Numero: ");
    scanf("%d", &valor2);

    // Compara os valores e atribui verdadeiro ou falso a 'i'
    if (valor1 == valor2)
    {
        i = true;
    }
    else
    {
        i = false;
    }

    // Saida de dados
    printf("%s\n", (i ? verdade : falso));
}
void atividade8()
{
    // Variaveis.
    int Num1, Num2, Num3, temp;

    // Entrada de dados
    printf("Digite o Primeiro Numero: ");
    scanf("%d", &Num1);

    system("cls");

    printf("Digite o Segundo Numero: ");
    scanf("%d", &Num2);

    system("cls");

    printf("Digite o Terceiro Numero: ");
    scanf("%d", &Num3);

    system("cls");

    // Processamento
    if (Num1 < Num2)
    {
        temp = Num1;
        Num1 = Num2;
        Num2 = temp;
    }
    if (Num1 < Num3)
    {
        temp = Num1;
        Num1 = Num3;
        Num3 = temp;
    }
    if (Num2 < Num3)
    {
        temp = Num2;
        Num2 = Num3;
        Num3 = temp;
    }

    // Saída de dados
    printf("Valores em ordem decrescente: %d, %d, %d\n", Num1, Num2, Num3);
}
void atividade9()
{
    // variaveis
    float IMC, Peso, Altura;

    // Entrada de Dados.
    printf("Qual seu Peso ? \n");
    scanf("%f", &Peso);

    system("cls");

    printf("E Sua ALtura ? \n");
    scanf("%f", &Altura);

    system("cls");

    IMC = Peso / (Altura * Altura);

    // Processamento / Saida de dados
    if (IMC <= 18.5)
    {
        printf("Abaixo do Peso\n\n");
    }
    else if (IMC > 18.5 && IMC < 25)
    {
        printf("Peso Ideal \n\n");
    }
    else if (IMC >= 25 && IMC < 30)
    {
        printf("Levemente acima do Peso \n\n");
    }
    else if (IMC >= 30 && IMC < 35)
    {
        printf("Obeso Grau 1 \n\n");
    }
    else if (IMC >= 35 && IMC < 40)
    {
        printf("Obeso Grau 2 \n\n");
    }
    else
    {
        printf("Obeso Grau 3 \n\n");
    }
}
void atividade10()
{
    // Variaveis
    float Nota1, Nota2, Nota3, Media;

    // Entrada de Dados.
    printf("Digite a Primeira Nota :\n");
    scanf("%f", &Nota1);

    system("cls");

    printf("Digite a Segunda Nota :\n");
    scanf("%f", &Nota2);

    system("cls");

    printf("Digite a Terceira Nota :\n");
    scanf("%f", &Nota3);

    system("cls");

    // Calculo
    Media = (Nota1 + Nota2 + Nota3) / 3;

    printf("A Media da Nota %.2f \n", Media);
}
void atividade11()
{
    // Variaveis .
    float Nota1, Nota2, Nota3, Nota4, Media;
    char Nome[30];

    // Entrada de Dados
    printf("Digite seu Nome :\n");
    scanf("%s", &Nome);

    system("cls");

    printf("Digite a Primeira Nota :\n");
    scanf("%f", &Nota1);

    system("cls");

    printf("Digite a Segunda Nota :\n");
    scanf("%f", &Nota2);

    system("cls");

    printf("Digite a Terceira Nota :\n");
    scanf("%f", &Nota3);

    system("cls");

    printf("Digite a Quarta Nota :\n");
    scanf("%f", &Nota4);

    system("cls");

    // Processamento //  Saida de Dados
    Media = (Nota1 + Nota2 + Nota3 + Nota4) / 4;

    if (Media >= 7)
    {
        printf(" %s  foi de %.2f \n Aprovado \n\n", Nome, Media);
    }
    else
    {
        printf(" %s foi de %.2f \n Reprovado \n\n", Nome, Media);
    }
}
void atividade12()
{
    // Variaveis
    float Preco, NovoPreco;
    int opcao = 0;

    // Entrada de dados
    printf("Digite o valor do Produto :R$:");
    scanf("%f", &Preco);

    do
    {
        system("cls");
        printf("1 - A Vista em Dinheiro ou Pix, recebe 15%% de desconto \n");
        printf("2 - A Vista no cartao de credito, receber 10%% de desconto \n");
        printf("3 - Parcelado no cartao em duas vezes, preco normal do produto sem juros \n");
        printf("4 - Parcelado no cartao em tres vezes ou mais, preco normal do produto mais juros de 10%% ");
        printf("0 - Cancelar");
        printf("Escolha uma Opcao\n");
        scanf("%d", &opcao);

        // Processamento.
        switch (opcao)
        {
        case 1:
            NovoPreco = Preco - (Preco * 0.15);
            break;
        case 2:
            NovoPreco = Preco - (Preco * 0.10);
            break;
        case 3:
            NovoPreco = Preco;
            break;
        case 4:
            NovoPreco = Preco + (Preco * 0.10);
            break;

        default:

            system("cls");

            printf("Opcao Invalida !\n");
            system("pause");

            continue;
        }
    } while (opcao != 0 && opcao > 4);

    system("cls");
    // Saida de dados .
    printf("O novo preco do produto e R$:%.2f\n\n", NovoPreco);
}
void atividade13()
{
    // Variaveis .
    char Nome[50];
    int Idade;

    // Entrada de Dados .
    printf("Digite seu nome : ");
    scanf("%s", &Nome);

    system("cls");

    printf("Qual a sua Idade ? ");
    scanf("%d", &Idade);

    system("cls");

    // Processamento / saida de dados
    if (Idade > 17)
    {

        printf("Ola %s voce ja e Maior de Idade \n\n", Nome);
    }
    else
    {

        printf("Ola %s vece ainda e Menor de Idade. \n\n", Nome);
    }
}
void atividade14()
{
    // Entrada de Dados
    int Valor1, Valor2, Temp1, Temp2;

    // entrada de dados
    printf("Digite o Primeiro Valor : ");
    scanf("%d", &Valor1);

    system("cls");

    printf("Digite o Segundo Valor : ");
    scanf("%d", &Valor2);

    system("cls");

    // Processamento
    Temp1 = Valor2;
    Temp2 = Valor1;

    // Saida de Dados
    printf("O Primeiro valor digitado foi %d e o Segundo Valor foi %d \n\n", Valor1, Valor2);
    printf("Invertendo a Ordem e o Primeiro  %d e o Segundo %d \n\n", Temp1, Temp2);
}
void atividade15()
{
    // Variaveis.
    int AnoNascimento;
    int IdadeEmDias, Anos, Meses, Dias;

    // Entrada De Dados
    printf("Digite o ano de nascimento: ");
    scanf("%d", &AnoNascimento);

    system("cls");

    IdadeEmDias = (2024 - AnoNascimento) * 365;

    // processamento
    Anos = IdadeEmDias / 365;
    Meses = Anos * 30;
    Dias = Anos * 365;

    // Saida de dados
    printf("Voce tem %d anos, %d meses e %d dias.\n", Anos, Meses, Dias);
}
void atividade16()
{
    // Variaveis
    int Lado1, Lado2, Lado3;

    // Entrada de Dados .
    printf("Digite o valor do Primerio Lado do Triangulo: ");
    scanf("%d", &Lado1);

    system("cls");

    printf("Digite o valor do Segundo Lado do Triangulo: ");
    scanf("%d", &Lado2);

    system("cls");

    printf("Digite o valor do Terceiro Lado do Triangulo: ");
    scanf("%d", &Lado3);

    system("cls");

    // Processsamento / Saida de dados
    if (Lado1 == Lado2 && Lado2 == Lado3)
    {

        printf("Equilatero\n\n");
    }
    else if (Lado1 == Lado2 || Lado1 == Lado3 || Lado2 == Lado3)
    {

        printf("Isoceles\n\n");
    }
    else
    {

        printf("Escaleno\n\n");
    }
}
void atividade17()
{
    // Variaveis
    float Fahrenheit, Celsius;

    // Entrada de Dados

    printf("Digite a temperatura em Fahrenheit :");
    scanf("%f", &Fahrenheit);

    system("cls");

    // Processamento . formula C = (5 * ( F-32) / 9)
    Celsius = (5 * (Fahrenheit - 32) / 9);

    // Saida de dados.
    printf("A Temperatura em Fahrenheit digita foi %.2f \n\n", Fahrenheit);
    printf(" Convertendo para Celsius e %.2f Graus \n\n", Celsius);
}
void atividade18()
{
    // Variavies .
    float alturaFrancisco = 1.10;
    float alturaSara = 1.50;
    float crescimentoFrancisco = 0.03;
    float crescimentoSara = 0.02;
    int anos = 0;

    // Processamento
    do
    {

        alturaFrancisco += crescimentoFrancisco;
        alturaSara += crescimentoSara;
        anos++;
    } while (alturaFrancisco <= alturaSara);

    // Saida de Dados
    printf("Francisco Sera maior que Sara em %d anos.\n", anos);
}
void atividade19()
{
    // Processamento .
    for (int i = 1; i <= 10; i++)
    {
        printf("Tabuada do %d:\n", i);

        // Saida de Dados .
        for (int j = 1; j <= 10; j++)
        {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }
}
void atividade20()
{

    // Varivaveis
    int numero, resultado;

    // entrada de dados
    printf("Digite um numero para saber sua tabuada : ");
    scanf("%d", &numero);
    // Processamento .
    for (int i = 1; i <= 10; i++)
    {
        resultado = i * numero;

        printf("Tabuada do %d X %d = %d \n", numero, i, resultado);
    }
}
void atividade21()
{
    srand(time(NULL)); // aplicado com ajuda do chat funciona de forma em parceria com o rand

    // variavel
    int Numero = rand() % 100 + 1;

    printf("O numero aleatorio entre 1 e 100 e %d \n", Numero);
}
void atividade22()
{
    // Declaração das variáveis
    int Num1, Num2;
    int quociente, resto;

    // Entrada de dados
    printf("Digite o Primeiro Numero: ");
    scanf("%d", &Num1);

    printf("Digite o Segundo Numero: ");
    scanf("%d", &Num2);

    system("cls");

    // Verifica se o divisor é zero
    if (Num2 == 0)
    {
        printf("Erro: Divisao por zero nao e permitida.\n");
    }
    else
    {
        // Calcula o quociente e o resto da divisão inteira
        quociente = Num1 / Num2;
        resto = Num1 % Num2;

        // Imprime os resultados
        printf("Quociente da divisao inteira de %d por %d e: %d\n", Num1, Num2, quociente);
        printf("Resto da divisao inteira de %d por %d e: %d\n\n", Num1, Num2, resto);
    }
}
void atividade23()
{
    // Declaração das variáveis
    float ValorHoraAula, INSS;
    int numeroAulas;

    // Entrada dos dados
    printf("Digite o valor da hora de aula: ");
    scanf("%f", &ValorHoraAula);

    printf("Digite o numero de aulas no mes: ");
    scanf("%d", &numeroAulas);

    printf("Digite o percentual de desconto do INSS: ");
    scanf("%f", &INSS);

    // Cálculo do salário bruto
    float salarioBruto = ValorHoraAula * numeroAulas;

    // Cálculo do desconto do INSS
    float descontoINSS = salarioBruto * (INSS / 100.0);

    // Cálculo do salário líquido
    float salarioLiquido = salarioBruto - descontoINSS;

    // Saida de dados
    printf("O salario liquido final e: %.2f\n", salarioLiquido);
}
void atividade24()
{
    // Variaveis .
    float VelocidadeMedia, Distancia, Tempo, Combustivel;

    // Entrada de Dados .
    printf("Qual tempo de Duracao da Viagem em horas ? ");
    scanf("%f", &Tempo);

    system("cls");

    printf("Qual foi a Velocidade Media em Km ? ");
    scanf("%f", &VelocidadeMedia);

    system("cls");

    // Processamento.
    Distancia = VelocidadeMedia * Tempo;
    Combustivel = Distancia / 12;

    // Saida de dados .
    printf("Distancia percorrida: %.2f km\n", Distancia);
    printf("Quantidade de litros de combustivel utilizados: %.2f litros\n", Combustivel);
}

// Fim dos Codigos das atividades.

// Inicio do Programa Main
int main()
{ // Chamado das atividades
    int Opcao;
    system("cls");

    while (1) // controlador para manter o loop ate q o usuario resolva parar
    {
        system("cls");

        printf("Atividades de Migracao para Linguagem C \n");
        printf("atividade entre 1 e 24 \n");
        printf("para sair escolha a Opcao 0 \n");
        printf("Escolha uma atividade entre 1 e 24 : ");

        scanf("%d", &Opcao);

        system("cls");

        switch (Opcao) // Switch ultilizado para selecionar atividade a ser reproduzida
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

        case 6:
            atividade6();
            system("pause");
            break;

        case 7:
            atividade7();
            system("pause");
            break;

        case 8:
            atividade8();
            system("pause");
            break;

        case 9:
            atividade9();
            system("pause");
            break;

        case 10:
            atividade10();
            system("pause");
            break;

        case 11:
            atividade11();
            system("pause");
            break;

        case 12:
            atividade12();
            system("pause");
            break;

        case 13:
            atividade13();
            system("pause");
            break;

        case 14:
            atividade14();
            system("pause");
            break;

        case 15:
            atividade15();
            system("pause");
            break;

        case 16:
            atividade16();
            system("pause");
            break;

        case 17:
            atividade17();
            system("pause");
            break;

        case 18:
            atividade18();
            system("pause");
            break;

        case 19:
            atividade19();
            system("pause");
            break;

        case 20:
            atividade20();
            system("pause");
            break;

        case 21:
            atividade21();
            system("pause");
            break;

        case 22:
            atividade22();
            system("pause");
            break;

        case 23:
            atividade23();
            system("pause");
            break;

        case 24:
            atividade24();
            system("pause");
            break;

        case 0:
            printf("Saindo do programa ");
            system("pause");
            system("cls");
            return 0;
            break;

        default:

            printf("Opcao invalida tente novamente !");
            system("pause");
            break;
        }
    }

    system("pause");
    system("cls");
    return 0;
}
