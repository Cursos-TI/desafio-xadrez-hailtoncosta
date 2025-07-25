#include <stdio.h>

#define CASAS_TORRE 5
#define CASAS_BISPO 5
#define CASAS_RAINHA 8
#define CASAS_CAVALO_DIREITA 2
#define CASAS_CAVALO_ESQUERDA 1

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
        printf("4 - Cavalo\n");
        printf("5 - Sair\n");
        printf("Escolha uma opção para movimentar a peça: ");
        scanf("%d", &opcao);

        switch (opcao)
        {   //movimento da peça Torre (5 casas para direita)
            case 1:
                printf("Movimento da Torre (5 casas para Direita)\n");
                for (int i = 1; i <= CASAS_TORRE; i++) {
                    printf("Passo %d Direita\n", i);
                }
                break;
            
            //movimento da peça Bispo (5 casa diagonal: Cima, Direita)
            case 2:
                printf("Movimento do Bispo (5 casas na diagonal Cima, Direita:) \n");
                int passo_bispo = 1;
                while (passo_bispo <= CASAS_BISPO) {
                    printf("Passo %d: Cima, Direita\n", passo_bispo);
                    passo_bispo++;
                }
                break;
            
            //Movimento da peça Rainha
            case 3:
                printf("Movimento da Rainha (8 casas para Esquerda): \n");
                int passo_rainha = 1;
                do {
                    printf("Passo %d: Esquerda\n", passo_rainha);
                    passo_rainha++;
                } while (passo_rainha <= CASAS_RAINHA);
                break;

            case 4:
                printf("Movimento do Cavalo (2 para baixo e 1 para esquerda): \n");
                //Loop externo para as 2 casas para baixo
                for (int i = 1; i <= CASAS_CAVALO_DIREITA; i++) {
                    //2 Casas para direita
                    printf("Baixo\n");
                    // O loop aninhado para o "Esquerda" é ativado após o último "Baixo"
                    if (i == CASAS_CAVALO_DIREITA) {
                        int j = i;
                        while (j <= CASAS_CAVALO_DIREITA) {
                            printf("Esquerda\n");
                            j++;
                        }
                    }
                }
                
                break;

            default:
                printf("Opção inválida...\n");
                break;
        }
    } while (opcao != 5);
    
    return 0;
}
