#include <stdio.h>

int main() {
    //--- Carta 1 ---
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int ptsTuristicos1;

    //--- Carta 2 ---
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int ptsTuristicos2;
    
    //--- Cadastro Carta 1 ---

    printf("Cadastro da Carta 1:\n");
    printf("Digite o Estado (A-H): ");
    scanf("%c", &estado1);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a Área (Km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões de Reais): ");
    scanf("%f", &pib1);

    printf("Digite o número de Pontos Turísticos: ");
    scanf("%d", &ptsTuristicos1);

    //--- Cadastro Carta 2 ---

    printf("Cadastro da Carta 2:\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a Área (Km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de Reais): ");
    scanf("%f", &pib2);

    printf("Digite o número de Pontos Turísticos: ");
    scanf("%d", &ptsTuristicos2);

    //--- Exibição dos dados ---

    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", ptsTuristicos1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", ptsTuristicos2);

    return 0;
}