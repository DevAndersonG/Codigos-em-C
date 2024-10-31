#include <stdio.h>
#include <stdlib.h>

// inicio do programa
int main()
{
    int opcao; // variavel de controle do switch

    while (1) // configurado para finalizar o programa caso o usuario aperte 6
    {
        system("cls"); // limpa tela

        // Opções do Menu
        printf("Opcao 1\n");
        printf("Opcao 2\n");
        printf("Opcao 3\n");
        printf("Opcao 4\n");
        printf("Opcao 5\n");
        printf("Opcao 6 sair\n");

        printf("Escolha uma das opcoes \n"); // // atribuindo valor para usar o switch

        scanf("%d", &opcao);

        switch (opcao) // Opções do Switch
        {
        case 1:
            printf("Opcao 1 selecionnada \n");
            system("pause");
            break;
        case 2:
            printf("Opcao 2 selecionnada \n");
            system("pause");
            break;
        case 3:
            printf("Opcao 3 selecionnada \n");
            system("pause");
            break;
        case 4:
            printf("Opcao 4 selecionnada \n");
            system("pause");
            break;
        case 5:
            printf("Opcao 5 selecionnada \n");
            system("pause");
            break;
        case 6:
            printf("Opcao 6 selecionnada \n"); // // opção para sair do programa
            printf("Saindo do programa\n\n");
            system("pause");
            return 0;
            break;

        default:
            printf("Opcao invalida !"); // tratando com opções fora das disponiveis no Menu
            system("pause");
            break;
        }
    }

    system("cls");
    return 0;
}