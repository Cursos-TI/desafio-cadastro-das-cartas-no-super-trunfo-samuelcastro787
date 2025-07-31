#include <stdio.h>

int main() {
    // Atributos das cartas
    int populacao1, pontosTuristicos1;
    float area1, pib1;

    int populacao2, pontosTuristicos2;
    float area2, pib2;

    // Entrada de dados da carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados da carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo dos novos atributos
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = pib1 / populacao1;

    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = pib2 / populacao2;

    // Saída dos dados da Carta 1
    printf("\n--- Carta 1 ---\n");
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per capita: %.2f\n", pibPerCapita1);

    // Saída dos dados da Carta 2
    printf("\n--- Carta 2 ---\n");
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per capita: %.2f\n", pibPerCapita2);

    return 0;
}
