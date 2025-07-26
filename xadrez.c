#include <stdio.h>

#define CASAS_TORRE 5
#define CASAS_BISPO 5
#define CASAS_RAINHA 8
#define CASAS_CAVALO_VERTICAL 2
#define CASAS_CAVALO_HORIZONTAL 1

void movimentar_cavalo_recursiva() {
    printf("C >> ");
    // Implementação da movimentação do Cavalo
    for (int i = 0; i < CASAS_CAVALO_VERTICAL; i++) {
                    //Usando a nova constante
                    printf("Cima\n");
                    //Imprime "Cima" duas vezes na mesma linha
    
                    printf("Direita\n");

                    // O loop aninhado para o "Esquerda" é ativado após o último "direita"
                    if (i == CASAS_CAVALO_VERTICAL) {
                        int j = i;
                        while (j <= CASAS_CAVALO_VERTICAL) {
                            printf("Direita\n");
                            j++;
                        }
                    }
                }
            }


void movimentar_bispo_recursiva() {
    printf("B >> ");
    // Implementação da movimentação do Bispo
    int passo_bispo = 1;
                while (passo_bispo <= CASAS_BISPO) {
                    printf("Passo %d: Cima, Direita\n", passo_bispo);
                    passo_bispo++;
                }
}

void movimentar_torre_recursiva(int passos_restantes) {
    printf("T >> ");
    // Implementação da movimentação da Torre
    if (passos_restantes == 0) {
        return;
    } 
    
    printf("Direita\n");
    movimentar_torre_recursiva(passos_restantes - 1);
    // A função chama a si mesma para continuar movendo a Torre até que os passos restantes
}


void movimentar_rainha_recursiva() {
    printf("R >> ");
    // Implementação da movimentação da Rainha
    int passo_rainha = 1;
                do {
                    printf("Passo %d: Esquerda\n", passo_rainha);
                    passo_rainha++;
                } while (passo_rainha <= CASAS_RAINHA);
}

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
                movimentar_torre_recursiva;
                break;
            
            //movimento da peça Bispo (5 casa diagonal: Cima, Direita)
            case 2:
                printf("Movimento do Bispo (5 casas na diagonal Cima, Direita:) \n");
                movimentar_bispo_recursiva();
                break;
            
            //Movimento da peça Rainha
            case 3:
                printf("Movimento da Rainha (8 casas para Esquerda): \n");
                movimentar_rainha_recursiva();
                break;

            case 4:
                printf("Movimento do Cavalo (2 para cima e 1 para direita): \n");
                //Loop externo para as 2 casas para baixo
                movimentar_cavalo_recursiva();
                
                break;

            default:
                printf("Opção inválida...\n");
                break;
        }
    } while (opcao != 5);
    
    return 0;
}
