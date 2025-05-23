#include <stdio.h>
#include <string.h>

int main() {
    // Dados da Carta 1
    char estado1[30];
    char cidade1[40];
    char codigo1[4];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    // Dados da Carta 2
    char estado2[30];
    char cidade2[40];
    char codigo2[4];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    //cadastro das informações da primeira carta

    printf("Cadastro da primeira carta:\n");
    printf("Digite o nome do estado:\n");
    fgets(estado1, sizeof(estado1), stdin);
    estado1[strcspn(estado1, "\n")] = 0;

    printf("Digite o nome da cidade:\n");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = 0;

    printf("Digite o código da carta (Ex: A01):\n");
    fgets(codigo1, sizeof(codigo1), stdin);
    codigo1[strcspn(codigo1, "\n")] = 0;

    printf("Digite a população:\n");
    scanf("%d", &populacao1);

    printf("Digite a área (em km²):\n");
    scanf("%f", &area1);

    printf("Digite o PIB:\n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontos_turisticos1);

    getchar(); // Limpa o \n do buffer antes do próximo fgets

    // cadastro das informações da segunda carta

    printf("\nCadastro da segunda carta:\n");
    printf("Digite o nome do estado:\n");
    fgets(estado2, sizeof(estado2), stdin);
    estado2[strcspn(estado2, "\n")] = 0;

    printf("Digite o nome da cidade:\n");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;

    printf("Digite o código da carta (Ex: B02):\n");
    fgets(codigo2, sizeof(codigo2), stdin);
    codigo2[strcspn(codigo2, "\n")] = 0;

    printf("Digite a população:\n");
    scanf("%d", &populacao2);

    printf("Digite a área (em km²):\n");
    scanf("%f", &area2);

    printf("Digite o PIB:\n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontos_turisticos2);

    //Exibição dos dados da primeira carta

    printf("\n---- Dados da Primeira Carta ----\n");
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("Código: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos1);

    // Exibição dos dados da segunda carta

    printf("\n---- Dados da Segunda Carta ----\n");
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("Código: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos2);

     // calculo da densidade poulacional

    float densidade1 = (float)populacao1 / area1;
    float densidade2 = (float)populacao2 / area2;
    printf("\ndensidade populacional da primeira carta: %.2f habitantes/km²\n", densidade1);
    printf("densidade populacional da segunda carta: %.2f habitantes/km²\n", densidade2);

    // calculo do pib per capita

    float pib_per_capita1 = pib1 / populacao1;
    float pib_per_capita2 = pib2 / populacao2;
    printf("\npib per capita da primeira carta: %.2f\n", pib_per_capita1);
    printf("pib per capita da segunda carta: %.2f\n", pib_per_capita2);

    return 0;
}
