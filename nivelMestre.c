#include <stdio.h>

// Desafio Final Super Trunfo - Comparações Avançadas
// Implementação simplificada para iniciantes

int main() {
    char nome1[50], nome2[50];
    int populacao1, populacao2;
    float area1, area2;
    int pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    float densidade_populacional1, densidade_populacional2;
    int escolha1, escolha2;
    float valor1_cidade1, valor1_cidade2, valor2_cidade1, valor2_cidade2;
    float soma_cidade1, soma_cidade2;
    
    // Entrada de dados
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

    // Menu interativo para escolha dos atributos
    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Número de pontos turísticos\n5 - Densidade Demográfica (vence o menor valor)\n");
    scanf("%d", &escolha1);
    
    printf("\nEscolha o segundo atributo para comparar (diferente do primeiro):\n");
    scanf("%d", &escolha2);
    while (escolha2 == escolha1) {
        printf("Atributo já escolhido. Escolha outro:\n");
        scanf("%d", &escolha2);
    }
    
    // Obter valores dos atributos escolhidos
    switch (escolha1) {
        case 1: valor1_cidade1 = populacao1; valor1_cidade2 = populacao2; break;
        case 2: valor1_cidade1 = area1; valor1_cidade2 = area2; break;
        case 3: valor1_cidade1 = pib1; valor1_cidade2 = pib2; break;
        case 4: valor1_cidade1 = pontos_turisticos1; valor1_cidade2 = pontos_turisticos2; break;
        case 5: valor1_cidade1 = densidade_populacional1; valor1_cidade2 = densidade_populacional2; break;
    }
    
    switch (escolha2) {
        case 1: valor2_cidade1 = populacao1; valor2_cidade2 = populacao2; break;
        case 2: valor2_cidade1 = area1; valor2_cidade2 = area2; break;
        case 3: valor2_cidade1 = pib1; valor2_cidade2 = pib2; break;
        case 4: valor2_cidade1 = pontos_turisticos1; valor2_cidade2 = pontos_turisticos2; break;
        case 5: valor2_cidade1 = densidade_populacional1; valor2_cidade2 = densidade_populacional2; break;
    }
    
    // Ajuste para a densidade populacional (vence o menor valor)
    soma_cidade1 = (escolha1 == 5 ? -valor1_cidade1 : valor1_cidade1);
    soma_cidade2 = (escolha1 == 5 ? -valor1_cidade2 : valor1_cidade2);
    
    soma_cidade1 += (escolha2 == 5 ? -valor2_cidade1 : valor2_cidade1);
    soma_cidade2 += (escolha2 == 5 ? -valor2_cidade2 : valor2_cidade2);
    
    // Exibição dos resultados
    printf("\n==== Comparação das Cidades ====\n");
    printf("%s vs %s\n", nome1, nome2);
    printf("Soma total dos atributos: %.2f vs %.2f\n", soma_cidade1, soma_cidade2);
    
    // Determinar a cidade vencedora
    if (soma_cidade1 > soma_cidade2) {
        printf("A cidade vencedora é: %s\n", nome1);
    } else if (soma_cidade2 > soma_cidade1) {
        printf("A cidade vencedora é: %s\n", nome2);
    } else {
        printf("Empate! Ambas as cidades possuem a mesma soma de atributos.\n");
    }
    
    return 0;
}