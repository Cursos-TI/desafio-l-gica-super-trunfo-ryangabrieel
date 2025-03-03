#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas com Interatividade
// Este código aprimora a versão anterior, adicionando um menu interativo e lógica de comparação mais avançada.

int main() {
    int cep1, cep2;
    char estado1[50], estado2[50];
    char nome1[50], nome2[50];
    int populacao1, populacao2;
    float area1, area2;
    int pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    float densidade_populacional1, densidade_populacional2;
    int pontos_cidade1 = 0, pontos_cidade2 = 0;
    int escolha;
    
    printf("Digite o nome da primeira cidade: ");
    scanf(" %s", nome1);
    printf("Digite a população da primeira cidade: ");
    scanf("%d", &populacao1);
    printf("Digite a área da primeira cidade (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB da primeira cidade: ");
    scanf("%d", &pib1);
    printf("Digite o número de pontos turísticos da primeira cidade: ");
    scanf("%d", &pontos_turisticos1);
    densidade_populacional1 = populacao1 / area1;

    printf("\nDigite o nome da segunda cidade: ");
    scanf(" %s", nome2);
    printf("Digite a população da segunda cidade: ");
    scanf("%d", &populacao2);
    printf("Digite a área da segunda cidade (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB da segunda cidade: ");
    scanf("%d", &pib2);
    printf("Digite o número de pontos turísticos da segunda cidade: ");
    scanf("%d", &pontos_turisticos2);
    densidade_populacional2 = populacao2 / area2;

    printf("\nEscolha um atributo para comparar:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Número de pontos turísticos\n5 - Densidade Demográfica (vence o menor valor)\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);

    printf("\n==== Comparação das Cidades ====\n");
    switch (escolha) {
        case 1:
            printf("População: %s (%d) vs %s (%d)\n", nome1, populacao1, nome2, populacao2);
            if (populacao1 > populacao2) pontos_cidade1++;
            else if (populacao2 > populacao1) pontos_cidade2++;
            break;
        case 2:
            printf("Área: %s (%.2f km²) vs %s (%.2f km²)\n", nome1, area1, nome2, area2);
            if (area1 > area2) pontos_cidade1++;
            else if (area2 > area1) pontos_cidade2++;
            break;
        case 3:
            printf("PIB: %s (%d) vs %s (%d)\n", nome1, pib1, nome2, pib2);
            if (pib1 > pib2) pontos_cidade1++;
            else if (pib2 > pib1) pontos_cidade2++;
            break;
        case 4:
            printf("Pontos turísticos: %s (%d) vs %s (%d)\n", nome1, pontos_turisticos1, nome2, pontos_turisticos2);
            if (pontos_turisticos1 > pontos_turisticos2) pontos_cidade1++;
            else if (pontos_turisticos2 > pontos_turisticos1) pontos_cidade2++;
            break;
        case 5:
            printf("Densidade demográfica: %s (%.2f) vs %s (%.2f)\n", nome1, densidade_populacional1, nome2, densidade_populacional2);
            if (densidade_populacional1 < densidade_populacional2) pontos_cidade1++;
            else if (densidade_populacional2 < densidade_populacional1) pontos_cidade2++;
            break;
        default:
            printf("Opção inválida!\n");
            return 1;
    }

    printf("\n==== Resultado da Cidade Vencedora ====\n");
    if (pontos_cidade1 > pontos_cidade2) {
        printf("A cidade vencedora é: %s\n", nome1);
    } else if (pontos_cidade2 > pontos_cidade1) {
        printf("A cidade vencedora é: %s\n", nome2);
    } else {
        printf("Empate! Ambas as cidades possuem o mesmo valor no atributo escolhido.\n");
    }

    return 0;
}