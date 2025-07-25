#include <stdio.h>

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    int opcao;

    //Menu de opções
    do {
        printf("-------- JOGO DE XADREZ ---------\n");
        printf("\n");
        printf("MENU\n");
        printf("1 - Torre\n");
        printf("2 - Bispo\n");
        printf("3 - Rainha\n");
        printf("4 - Sair\n");
        printf("Escolha uma opção para movimentar a peça: ");
        scanf("%d", &opcao);

        switch (opcao)
        {   //movimento da peça Torre
            case 1:
                printf("Direita\n");
                break;
            
            //movimento da peça Bispo
            case 2:
                printf("Cima\n");
                printf("Direita\n");
                break;
            
            //Movimento da peça Rainha
            case 3:
                printf("Cima\n");
                printf("Baixo\n");
                printf("Esquerda\n");
                printf("Direita\n");
                printf("Cima Esquerda\n");
                printf("Cima Direita");
                break;

            default:
                printf("Opção inválida...\n");
                break;
        }
    } while (opcao != 4);
    
    return 0;
}
