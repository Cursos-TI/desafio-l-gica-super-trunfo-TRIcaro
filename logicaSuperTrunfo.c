int main() {
    // Declaração das variáveis para a Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    // Declaração das variáveis para a Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    // Leitura dos dados da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Estado : A");
    scanf(" %c", &estado1); 
    printf("Código da Carta : A01");
    scanf("%s", codigo1);
    printf("Nome da Cidade: Teresina");
    scanf(" %49[^\n]", cidade1); 
    printf("População: 866.300");
    scanf("%d", &populacao1);
    printf("Área: 1.392");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): 23,8 ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: 20");
    scanf("%d", &pontos_turisticos1);
    printf("\n");

    // Leitura dos dados da Carta 2
    printf("Cadastro da Carta 2:\n");
    printf("Estado : B");
    scanf(" %c", &estado2);
    printf("Código da Carta: B02");
    scanf("%s", codigo2);
    printf("Nome da Cidade: Sao Luis");
    scanf(" %49[^\n]", cidade2);
    printf("População: 1.038.000 ");
    scanf("%d", &populacao2);
    printf("Área: 834,8");
    scanf("%f", &area2);
    printf("PIB : 36,535");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: 30");
    scanf("%d", &pontos_turisticos2);
    printf("\n");

    // Exibição dos dados da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("\n");

    // Exibição dos dados da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("\n");

    return 0;
}
