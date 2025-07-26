#include <stdio.h>

#define CASAS_TORRE 5
#define CASAS_BISPO 5
#define CASAS_RAINHA 8
#define CASAS_CAVALO_VERTICAL 2
#define CASAS_CAVALO_HORIZONTAL 1

void movimentar_cavalo() {
    
    //Imprime casas verticais (cima)
    for (int i = 0; i < CASAS_CAVALO_VERTICAL; i++) {
                    printf("Cima\n");
    }
        for (int i = 0; i < CASAS_CAVALO_HORIZONTAL; i++) {
            printf("Direita\n");
        }    
    }

void movimentar_bispo_recursiva(int passos_bispo) {

    if (passos_bispo == 0) {
        return; // Caso base: se não houver passos restantes, retorna
    }
    printf("Cima, Direita\n"); // Imprime a movimentação do Bispo
    movimentar_bispo_recursiva(passos_bispo - 1); // Chama a função recursivamente, diminuindo o número de passos restantes
    printf("Movimento do Bispo (8 casas na diagonal Cima, Direita): \n"); // Imprime a movimentação do Bispo
    printf("B >> "); // Imprime a letra B para indicar o Bispo
    movimentar_bispo_recursiva(CASAS_BISPO); // Chama a função recursivamente para movimentar o Bispo
}

void movimentar_torre_recursiva(int passos_restantes) {
    
    // Implementação da movimentação da Torre
    if (passos_restantes == 0) {
        return;
    } 
    
    printf("Direita\n");
    movimentar_torre_recursiva(passos_restantes - 1);
    // A função chama a si mesma para continuar movendo a Torre até que os passos restantes
}


void movimentar_rainha_recursiva(passo_rainha) {

    if (passo_rainha == 0) {
        return; // Caso base: se não houver passos restantes, retorna
    }
    printf("Esquerda\n"); // Imprime a movimentação da Rainha
    movimentar_bispo_recursiva(passo_rainha - 1); // Chama a função recursivamente, diminuindo o número de passos restantes
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
                printf("T >> ");
                printf("Movimento da Torre (5 casas para Direita)\n");
                movimentar_torre_recursiva(CASAS_TORRE);
                break;
            
            //movimento da peça Bispo (5 casa diagonal: Cima, Direita)
            case 2:
                printf("B >> ");
                printf("Movimento do Bispo (5 casas na diagonal Cima, Direita:) \n");
                movimentar_bispo_recursiva(CASAS_BISPO);
                break;
            
            //Movimento da peça Rainha
            case 3:
                printf("R >> ");
                printf("Movimento da Rainha (8 casas para Esquerda): \n");
                movimentar_rainha_recursiva(CASAS_RAINHA);
                break;

            case 4:
                printf("C >> ");
                printf("Movimento do Cavalo (2 para cima e 1 para direita): \n");
                //Loop externo para as 2 casas para baixo
                movimentar_cavalo();
                
                break;

            default:
                printf("Opção inválida...\n");
                break;
        }
    } while (opcao != 5);
    
    return 0;
}
