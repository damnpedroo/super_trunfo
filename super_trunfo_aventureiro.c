// Desafio Super Trunfo - Nível Aventureiro

#include <stdio.h>
int main(){

// Carta 1
    char estado1[30]; // Em char pra aceitar strings
    char codigo1[5]; // Código da carta, em char
    char nome_cidade1[50]; // Nome da cidade, em char
    float populacao1; // Valor inteiro, em float
    float area1; // Em km², em float
    float pib1; // Em bilhões de reais, em float
    int pontos_turisticos1; // Número de pontos turísticos, em int
    float densidade1; // Densidade populacional, em float
    float pib_per_capita1; // Pib per capita, em float

// Carta 2
    char estado2[30]; // Em char pra aceitar strings
    char codigo2[5]; // Código da carta, em char
    char nome_cidade2[50]; // Nome da cidade, em char
    float populacao2; // Valor inteiro, em float
    float area2; // Em km², em float
    float pib2; // Em bilhões de reais, em float
    int pontos_turisticos2; // Número de pontos turísticos, em int
    float densidade2; // Densidade populacional, em float
    float pib_per_capita2; // Pib per capita, em float

// Preenchendo os dados da primeira carta

    printf("Cadastro de carta - Carta 1\n");

    // Nome do Estado
    printf("Digite o nome do Estado\n");
    scanf(" %[^\n]", estado1);

    // Código da carta
    printf("Digite o código da carta\n");
    scanf(" %[^\n]", codigo1);

    // Nome da cidade
    printf("Digite o nome da cidade\n");
    scanf(" %[^\n]", nome_cidade1);  

    // População total   
    printf("Digite a população total da cidade\n");
    scanf("%ld", &populacao1);

    // Área total
    printf("Digite a área total da cidade em km²\n");   
    scanf("%lf", &area1);    

    // PIB
    printf("Digite o PIB em bilhões de reais\n");
    scanf("%lf", &pib1); 

    // Pontos turísticos
    printf("Digite o número de pontos turísticos da cidade\n");
    scanf("%d", &pontos_turisticos1);

    // Calculo da densidade populacional e PIB - Carta 1
    densidade1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;

// Exibindo os dados da primeira carta

    printf("\nDados da Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %ld\n", populacao1);
    printf("Área: %.2lf km²\n", area1);
    printf("PIB: %.2lf bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2lf habitantes/km²\n", densidade1);
    printf("PIB per Capita: %.2lf reais\n", pib_per_capita1);

// Preenchendo os dados da segunda carta

    printf("\nCadastro de carta - Carta 2\n");

    // Nome do Estado
    printf("Digite o nome do Estado\n");
    scanf(" %[^\n]", estado2);

    // Código da carta
    printf("Digite o código da carta\n");
    scanf(" %[^\n]", codigo2);

    // Nome da cidade
    printf("Digite o nome da cidade\n");
    scanf(" %[^\n]", nome_cidade2);

    // População total   
    printf("Digite a população total da cidade\n");
    scanf("%ld", &populacao2);

    // Área total
    printf("Digite a área total da cidade em km²\n");
    scanf("%lf", &area2);

    // PIB
    printf("Digite o PIB em bilhões de reais\n");
    scanf("%lf", &pib2);

    // Pontos turísticos
    printf("Digite o número de pontos turísticos da cidade\n");
    scanf("%d", &pontos_turisticos2);

    // Calculo da densidade populacional e PIB - Carta 2
    densidade2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;

// Exibindo os dados da segunda carta

    printf("\nDados da Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %ld\n", populacao2);
    printf("Área: %.2lf km²\n", area2);
    printf("PIB: %.2lf bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2lf habitantes/km²\n", densidade2);
    printf("PIB per Capita: %.2lf reais\n", pib_per_capita2);

    return 0;

}
