#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void at1(int Nun1, int Nun2) // Atividade 1 Soma
{
    int soma;
    soma = Nun1 + Nun2;
    printf("A soma de %d e %d = %d \n", Nun1, Nun2, soma);
}
void at2(int Valor1, int Valor2) // Atividade 2 . Multiplicação
{
    int Resultado = Valor1 * Valor2;

    system("cls");
    printf("A multiplicacao de %d e %d = %d\n", Valor1, Valor2, Resultado);
}
void at3()
{                 // Atividade 2 Potencia .
    double resul; //
    double x, y;

    printf("Digite o valor da Base ");
    scanf("%lf", &x); // Atribuindo Valorer a Base
    system("cls");
    printf("Digite o Valor do Expoente : ");
    scanf("%lf", &y); // atribuindo Valorer oo expoente

    resul = pow(x, y); // Calculando a Potencia
    system("cls");

    printf("O resusltado do Base %.0lf com o Expoente %.0lf foi %.0f\n", x, y, resul);
}
void at4()
{
    int valor1, valor2, result;

    printf("Digite o primeiro Numero : ");
    scanf("%d", &valor1);
    system("cls");
    printf("Digite o Segundo Numero : ");
    scanf("%d", &valor2);
    system("cls");

    result = valor1 - valor2;

    printf("O resultado da Subitracao foi %d \n", result);
}
int main() // Programa Main .
{

    while (1) // Loop para manter o programa rodando ate que o usoario resolva parar .
    {
        system("cls");
        int opcao;
        printf("Escolha uma atividade de 1 a 4  \n ou Zero ( 0 ) para Sair .");
        scanf("%d", &opcao); // acessa todas as atividades de acordo com a opção

        switch (opcao)
        {
            system("cls");
        case 1:
        {
            int Nun1, Nun2;
            printf("Digite o Primeiro Valor: ");
            scanf("%d", &Nun1);

            printf("Digite o Segundo Valor: ");
            scanf("%d", &Nun2);
            system("cls");
            at1(Nun1, Nun2);
            system("pause");
        }
        break;
        case 2:
        {
            int Valor1, Valor2;
            printf("Digite o Primeiro Valor: ");
            scanf("%d", &Valor1);
            printf("Digite o Segundo Valor: ");
            scanf("%d", &Valor2);
            system("cls");
            at2(Valor1, Valor2);
            system("pause");
        }
        break;
        case 3:
            at3();
            system("pause");
            break;
        case 4:
            at4();
            system("pause");
            break;
        case 0:
            return 0;
            system("pause");
            break;

        default:
            break;
        }
    }

    return 0;
}