#include <stdio.h>

int main() {

    // =========================
    // MOVIMENTO DA TORRE (FOR)
    // =========================
    // A torre se move em linha reta (horizontal ou vertical).
    // Neste exemplo, ela vai andar 5 casas para a direita.
    int casas_torre = 5;
    printf("Movimento da Torre:\n");
    
    for (int i = 1; i <= casas_torre; i++) {
        printf("Direita (%d)\n", i);
    }

    printf("\n"); // Apenas para separar as saídas


    // =========================
    // MOVIMENTO DO BISPO (WHILE)
    // =========================
    // O bispo se move na diagonal.
    // Aqui, ele vai andar 5 casas para cima e para a direita.
    int casas_bispo = 5;
    int contador_bispo = 1;

    printf("Movimento do Bispo:\n");
    while (contador_bispo <= casas_bispo) {
        printf("Cima, Direita (%d)\n", contador_bispo);
        contador_bispo++;
    }

    printf("\n");


    // =========================
    // MOVIMENTO DA RAINHA (DO-WHILE)
    // =========================
    // A rainha pode se mover em qualquer direção.
    // Aqui, ela vai andar 8 casas para a esquerda.
    int casas_rainha = 8;
    int contador_rainha = 1;

    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda (%d)\n", contador_rainha);
        contador_rainha++;
    } while (contador_rainha <= casas_rainha);

    printf("\nFim da simulação dos movimentos!\n");

    return 0;
}
