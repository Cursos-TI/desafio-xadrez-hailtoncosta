#include <stdio.h>

#define CASAS_TORRE 5
#define CASAS_BISPO 5
#define CASAS_RAINHA 8
#define CASAS_CAVALO_VERTICAL 2
#define CASAS_CAVALO_HORIZONTAL 1

void movimentar_cavalo() {
    
    //Imprime casas verticais (cima)
    for (int i = 0; i < 3; i++) {
        //Loop para 3 segmentos do movimento L
        if (i < CASAS_CAVALO_VERTICAL) {
            //Primeiro 2 segmentos são "Cima"
            printf("Cima\n");
        } else if (i == CASAS_CAVALO_VERTICAL){
            //O ultimo segmento é "Direita"
            printf("Direita\n");
            break;
        }
    }
}   
    
void movimentar_bispo_recursiva(int passos_bispo) {

    if (passos_bispo == 0) {
        // Caso base: se não houver passos restantes, retorna
        return; 
        
    }
    // Imprime a movimentação do Bispo
    printf("Cima, Direita\n"); 
    
    // Chama a função recursivamente, diminuindo o número de passos restantes
    movimentar_bispo_recursiva(passos_bispo - 1); 
    
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


void movimentar_rainha_recursiva(int passo_rainha) {

    if (passo_rainha == 0) {
        // Caso base: se não houver passos restantes, retorna
        return; 
    }

    // Imprime a movimentação da Rainha
    printf("Esquerda\n"); 

    // Chama a função recursivamente, diminuindo o número de passos restantes
    movimentar_rainha_recursiva(passo_rainha - 1); 
}

int main() {

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
            
            //movimento da peça Bispo (8 casa diagonal: Cima, Direita)
            case 2:
                printf("B >> ");
                printf("Movimento do Bispo (8 casas na diagonal Cima, Direita:) \n");
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
