// Super Trunfo - Nível Mestre

#include <stdio.h>
int main(){

// Carta 1
    char estado1[30]; 
    char codigo1[5]; 
    char nome_cidade1[50]; 
    unsigned long int populacao1; 
    float area1; 
    float pib1; 
    int pontos_turisticos1; 
    float densidade1; 
    float pib_per_capita1; 
    float super_poder1; 

// Carta 2
    char estado2[30]; 
    char codigo2[5]; 
    char nome_cidade2[50]; 
    unsigned long int populacao2; 
    float area2; 
    float pib2; 
    int pontos_turisticos2; 
    float densidade2; 
    float pib_per_capita2; 
    float super_poder2; 

// Preenchendo os dados da primeira carta
    printf("Cadastro de carta - Carta 1\n");
    printf("Digite o nome do Estado: ");
    scanf(" %[^\n]", estado1);
    printf("Digite o código da carta: ");
    scanf(" %[^\n]", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade1);  
    printf("Digite a população total da cidade: ");
    scanf("%lu", &populacao1);
    printf("Digite a área total da cidade em km²: ");   
    scanf("%f", &area1);    
    printf("Digite o PIB em bilhões de reais: ");
    scanf("%f", &pib1); 
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos1);

    densidade1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;
    super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1.0/densidade1);

// Preenchendo os dados da segunda carta
    printf("\nCadastro de carta - Carta 2\n");
    printf("Digite o nome do Estado: ");
    scanf(" %[^\n]", estado2);
    printf("Digite o código da carta: ");
    scanf(" %[^\n]", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade2);  
    printf("Digite a população total da cidade: ");
    scanf("%lu", &populacao2);
    printf("Digite a área total da cidade em km²: ");   
    scanf("%f", &area2);    
    printf("Digite o PIB em bilhões de reais: ");
    scanf("%f", &pib2); 
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos2);

    densidade2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;
    super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1.0/densidade2);

// Exibindo os dados das cartas
    printf("\n--- CARTA 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", nome_cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade: %.2f\n", densidade1);
    printf("PIB per capita: %.2f\n", pib_per_capita1);
    printf("Super poder: %.2f\n", super_poder1);

    printf("\n--- CARTA 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nome_cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade: %.2f\n", densidade2);
    printf("PIB per capita: %.2f\n", pib_per_capita2);
    printf("Super poder: %.2f\n", super_poder2);

// Comparação das cartas
    printf("\n===== BATALHA =====\n");
    if (populacao1 > populacao2) printf("Carta 1 ganhou na População!\n"); else printf("Carta 2 ganhou na População!\n");
    if (area1 > area2) printf("Carta 1 ganhou na Área!\n"); else printf("Carta 2 ganhou na Área!\n");
    if (pib1 > pib2) printf("Carta 1 ganhou no PIB!\n"); else printf("Carta 2 ganhou no PIB!\n");
    if (pontos_turisticos1 > pontos_turisticos2) printf("Carta 1 ganhou nos Pontos turísticos!\n"); else printf("Carta 2 ganhou nos Pontos turísticos!\n");
    if (densidade1 < densidade2) printf("Carta 1 ganhou na Densidade!\n"); else printf("Carta 2 ganhou na Densidade!\n");
    if (pib_per_capita1 > pib_per_capita2) printf("Carta 1 ganhou no PIB per capita!\n"); else printf("Carta 2 ganhou no PIB per capita!\n");
    if (super_poder1 > super_poder2) printf("Carta 1 ganhou no SUPER PODER!\n"); else printf("Carta 2 ganhou no SUPER PODER!\n");

    printf("\nFim do jogo!\n");

    return 0;
    
}