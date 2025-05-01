#include <stdio.h>

void movimentacaoTorre(int numero) {
    if(numero <= 5) {
        printf("direita\n");
        movimentacaoTorre(numero + 1);
    }
}

void movimentacaoBispo(int numero) {
    if (numero <= 8) {
        if(numero % 2 == 1) {
            printf("Cima\n");
        } else {
            printf("Direita\n");
        }
        movimentacaoBispo(numero + 1);
    }
}

void movimentacaoRainha(int numero) {
    if (numero <= 10) {
        printf("Esquerda\n");
        movimentacaoRainha(numero + 1);
    }
}



// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int casasTorre, casasBispo, casasRainha, casasCavalo;//Variaveis para contar as casas
    int i, j;

    casasTorre = 1;
    casasBispo = 1;
    casasRainha = 1;
    casasCavalo = 3;
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("--------------------------------------------\n");
    printf("Simulando o movimento do Bispo cinco casas na diagonal para cima e para direita\n");
    movimentacaoBispo(casasBispo);
    
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("--------------------------------------------\n");
    printf("Simulando o movimento da Torre cinco casas para direita\n");
    movimentacaoTorre(casasTorre);
    
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("--------------------------------------------\n");
    printf("Simulando o movimento da Rainha oito casas para esquerda\n");
    movimentacaoRainha(casasRainha);
    
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("--------------------------------------------\n");
    printf("Simulando o movimento do cavalo duas casas para cima e uma para direita\n");
    for(i = 1; i <= 1; i++) {
        for(j = 0; j < casasCavalo; j++) {
           if(j < 2){
            printf("cima\n");
            continue;
           }

           if(j == 2) {
            printf("direita\n");
            break;
           } 
        }
        printf("\n");
    }
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
