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
    printf("Digite o estado da primeira carta:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1); // Adicionado espaço antes de %c para consumir o '\n'
    printf("Código da carta (ex: A01): ");
    scanf("%3s", codigo1); // Limitado a 3 caracteres
    printf("Nome da cidade: ");
    scanf("%49s", nomeCidade1); // Limitado a 49 caracteres
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Leitura dos dados da segunda carta
    printf("\nDigite o estado da segunda carta:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2); // Adicionado espaço antes de %c para consumir o '\n'
    printf("Código da carta (ex: A01): ");
    scanf("%3s", codigo2); // Limitado a 3 caracteres
    printf("Nome da cidade: ");
    scanf("%49s", nomeCidade2); // Limitado a 49 caracteres
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    return 0;
}