#include <stdio.h>

int main() {
    // Declaração das variáveis para a primeira carta
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Declaração das variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Leitura dos dados da primeira carta
    printf("Insira os dados da primeira carta:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", nomeCidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Leitura dos dados da segunda carta
    printf("\nInsira os dados da segunda carta:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", nomeCidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibição dos dados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Exibição dos dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);


 // voce vai começar a fazer a comparação aqui


    // Escolha do atributo para comparação
    int opcao;
    printf("\nEscolha o atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    // Comparação e exibição do resultado
    printf("\nComparação de cartas (Atributo: ");
    switch(opcao) {
        case 1:
            printf("População");
            printf("):\n\n");
            printf("Carta 1 - %s (%c): %d\n", nomeCidade1, estado1, populacao1);
            printf("Carta 2 - %s (%c): %d\n", nomeCidade2, estado2, populacao2);
            printf("\nResultado: ");
            if (populacao1 > populacao2) {
                printf("Carta 1 (%s) venceu!\n", nomeCidade1);
            } else if (populacao2 > populacao1) {
                printf("Carta 2 (%s) venceu!\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;
        case 2:
            printf("Área");
            printf("):\n\n");
            printf("Carta 1 - %s (%c): %.2f km²\n", nomeCidade1, estado1, area1);
            printf("Carta 2 - %s (%c): %.2f km²\n", nomeCidade2, estado2, area2);
            printf("\nResultado: ");
            if (area1 > area2) {
                printf("Carta 1 (%s) venceu!\n", nomeCidade1);
            } else if (area2 > area1) {
                printf("Carta 2 (%s) venceu!\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;
        case 3:
            printf("PIB");
            printf("):\n\n");
            printf("Carta 1 - %s (%c): %.2f bilhões de reais\n", nomeCidade1, estado1, pib1);
            printf("Carta 2 - %s (%c): %.2f bilhões de reais\n", nomeCidade2, estado2, pib2);
            printf("\nResultado: ");
            if (pib1 > pib2) {
                printf("Carta 1 (%s) venceu!\n", nomeCidade1);
            } else if (pib2 > pib1) {
                printf("Carta 2 (%s) venceu!\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;
        case 4:
            printf("Pontos Turísticos");
            printf("):\n\n");
            printf("Carta 1 - %s (%c): %d\n", nomeCidade1, estado1, pontosTuristicos1);
            printf("Carta 2 - %s (%c): %d\n", nomeCidade2, estado2, pontosTuristicos2);
            printf("\nResultado: ");
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Carta 1 (%s) venceu!\n", nomeCidade1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Carta 2 (%s) venceu!\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;
        default:
            printf("Opção inválida!\n");
    }

    return 0;
}