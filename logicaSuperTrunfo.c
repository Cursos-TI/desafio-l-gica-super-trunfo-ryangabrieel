#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    int cep1, cep2;  // CEP
    char estado1[50], estado2[50];  // Estado
    char nome1[50], nome2[50];  // Nome da cidade
    int populacao1, populacao2;  // População
    float area1, area2;  // Área em km²
    int pib1, pib2;  // PIB
    int pontos_turisticos1, pontos_turisticos2;  // Número de pontos turísticos
    float densidade_populacional1, densidade_pupulacional2; // Densidade Populacional
    float PIB_PER_CAPITA1, PIB_PER_CAPITA2; // PIB per capita
    float media_densidade1, media_densidade2, media_pibpercapita1, media_pibpercapita2 ; // Densidade populacional, PIB per capita
    int pontos_cidade1 = 0, pontos_cidade2 = 0;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Entrada de dados para a primeira cidade
    printf("Digite o CEP da primeira cidade: ");
    scanf("%d", &cep1);
    printf("Digite o estado da primeira cidade: ");
    scanf(" %s", estado1);
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

    // Entrada de dados para a segunda cidade
    printf("\nDigite o CEP da segunda cidade: ");
    scanf("%d", &cep2);
    printf("Digite o estado da segunda cidade: ");
    scanf(" %s", estado2);
    printf("Digite o nome da segunda cidade: ");
    scanf(" %s", nome2);
    printf("Digite a população da segunda cidade: ");
    scanf("%d", &populacao2);
    printf("Digite a área da segunda cidade (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB da segunda cidade: ");
    scanf("%d", &pib2);
    printf("Digite o número de pontos turísticos da segunda cidade: ");
    scanf("%d", &pontos_turisticos2);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    printf("\n====Comparação das Cidades====\n");

    if (populacao1 > populacao2){
        printf("Cidade 1 tem maior população.\n");
        pontos_cidade1++;
    } else {
        printf("Cidade 2 tem maior população.\n");
        pontos_cidade2++;
    }

    if (area1 > area2){
        printf("Cidade 1 tem maior área.\n");
        pontos_cidade1++;
    } else {
        printf("Cidade 2 tem maior área.\n");
        pontos_cidade2++;
    }

    if (pib1 > pib2){
        printf("Cidade 1 tem maior PIB.\n");
        pontos_cidade1++;
    } else {
        printf("Cidade 2 tem maior PIB.\n");
        pontos_cidade2++;
    }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    printf("\n====Resultado da Cidade Vencedora====\n");
        if(pontos_cidade1 > pontos_cidade2){
            printf("A cidade vencedora é: %s - Pontos Total: %d", nome1, pontos_cidade1);
        } else if(pontos_cidade2 > pontos_cidade1){
            printf("A cidade vencedora é: %s - Pontos Total: %d", nome2, pontos_cidade2);
        } else {
            printf("Empate! Ambas as Cidades possuem %d de pontos!", pontos_cidade1);
        }


    return 0;
}
