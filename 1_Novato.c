#include <stdio.h>

int main() {
    // Declaração de variáveis para armazenar os dados das cartas
    char estado, estado2; // Representa o estado (A-H)
    char cod_carta[20], cod_carta2[20]; // Código da carta (ex: A1, B3)
    char nome_cidade[50], nome_cidade2[50];  // Nome da cidade
    unsigned long int populacao, populacao2; // População da cidade 
    float area, area2; // Área da cidade em km²
    float pib, pib2;  // PIB da cidade em bilhões
    int pont_turisticos, pont_turisticos2;  // Número de pontos turísticos
    float densi_populacional, densi_populacional2; // Densidade populacional (habitantes / área)
    float pib_capital, pib_capital2; // PIB per capita (PIB / população)    
    float super_poder1, super_poder2; // Super poder da carta, baseado nos atributos  

    // Entrada de dados para a carta 1
    printf("Insira uma letra de 'A' a 'H' para representar um estado (Carta 1): \n");
    scanf(" %c", &estado); // Espaço antes de %c para evitar problemas com buffer
    
    printf("Insira a letra do estado seguida de um número de 01 a 04 (ex: A1, B3) (Carta 1): \n");
    scanf("%s", cod_carta); // Captura o código da carta

    printf("Insira o nome da cidade (Carta 1): \n");
    scanf("%s", nome_cidade); // Nome da cidade
    
    printf("Insira o numero de habitantes (Carta 1): \n");
    scanf("%lu", &populacao); // Captura a população

    printf("Insira a área da cidade em km² (Carta 1): \n");
    scanf("%f", &area); // Captura a área

    printf("Insira o PIB da cidade em bilhões (Carta 1): \n");
    scanf("%f", &pib); // Captura o PIB

    printf("Insira a quantidade de pontos turísticos (Carta 1): \n");
    scanf("%d", &pont_turisticos); // Captura a quantidade de pontos turísticos

    // Cálculo dos atributos derivados
    densi_populacional = populacao / area;
    pib_capital = pib / populacao;
    super_poder1 = populacao + area + pib + pont_turisticos + pib_capital + (1 / densi_populacional);
    
    // Entrada de dados para a carta 2
    printf("Insira uma letra de 'A' a 'H' para representar um estado (Carta 2): \n");
    scanf(" %c", &estado2);
    
    printf("Insira a letra do estado seguida de um número de 01 a 04 (ex: A1, B3) (Carta 2): \n");
    scanf(" %s", cod_carta2);
    
    printf("Insira o nome da cidade (Carta 2): \n");
    scanf("%s", nome_cidade2);

    printf("Insira o número de habitantes (Carta 2): \n");
    scanf("%lu", &populacao2);
    
    printf("Insira a área da cidade em km² (Carta 2): \n");
    scanf("%f", &area2);
    
    printf("Insira o PIB da cidade em bilhões (Carta 2): \n");
    scanf("%f", &pib2);
    
    printf("Insira a quantidade de pontos turísticos (Carta 2): \n");
    scanf("%d", &pont_turisticos2);

    // Cálculo dos atributos derivados para a segunda carta
    densi_populacional2 = populacao2 / area2;
    pib_capital2 = pib2 / populacao2;
    super_poder2 = populacao2 + area2 + pib2 + pont_turisticos2 + pib_capital2 + (1 / densi_populacional2);

    // Exibição dos dados da Carta 1
    printf("\n ****Carta 1****\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", cod_carta);
    printf("Nome da cidade: %s\n", nome_cidade);
    printf("População: %lu\n", populacao);
    printf("Àrea: %.2f Km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turístico: %d\n", pont_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densi_populacional);
    printf("PIB per capital: %.2f reais\n", pib_capital);

    // Exibição dos dados da Carta 2
    printf("\n ****Carta 2****\n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s\n", cod_carta2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %lu\n", populacao2);
    printf("Àrea: %.2f Km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turístico: %d\n", pont_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densi_populacional2);
    printf("PIB per capital: %.2f reais\n", pib_capital2);

    
    // Comparação das cartas
     // 1 representa a carta 1 e 0 representa a carta 2
     printf("\n **** Comparação de Cartas ****\n");
     printf("**** 1 representa a carta 1 e 0 representa a carta 2 ****\n");
     printf("População: Carta %d venceu\n", (populacao > populacao2));
     printf("Área: Carta %d venceu\n", (area > area2));
     printf("PIB: Carta %d venceu\n", (pib > pib2));
     printf("Pontos Turísticos: Carta %d venceu\n", (pont_turisticos > pont_turisticos2));
     printf("Densidade Populacional: Carta %d venceu\n", (densi_populacional < densi_populacional2)); // O menor valor de densidade vence a rodada  
     printf("PIB per capita: Carta %d venceu\n", (pib_capital > pib_capital2));
     printf("Super Poder: Carta %d venceu\n", (super_poder1 > super_poder2));

    // Comparação de população
    printf("\n **** Comparação dos Atributos ****\n");

printf("\n Comparação de Populações \n");
    printf("Carta 1 - %s: %lu \n", nome_cidade, populacao);
    printf("Carta 2 - %s: %lu \n", nome_cidade2, populacao2);
    if (populacao > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
    }

    // Comparação de área
printf("\n Comparação de Áreas \n");
    printf("Carta 1 - %s: %.2f \n", nome_cidade, area);
    printf("Carta 2 - %s: %.2f \n", nome_cidade2, area2);
    if (area > area2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
    }

    // Comparação de PIB
printf("\n Comparação dos PIBs \n");
    printf("Carta 1 - %s: %.2f \n", nome_cidade, pib);
    printf("Carta 2 - %s: %.2f \n", nome_cidade2, pib2);
    if (pib > pib2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
    }
    // Comparação de densidade população
printf("\n Comparação de Densidade Populacional \n");
    printf("Carta 1 - %s: %.2f \n", nome_cidade, densi_populacional);
    printf("Carta 2 - %s: %.2f \n", nome_cidade2, densi_populacional2);

  if (densi_populacional < densi_populacional2) {
    printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade);
  } else{
    printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
  }  // O menor valor de densidade vence a rodada  

    // Comparação do PIB per Capital
printf("\n Comparação do PIB per Capital \n");
    printf("Carta 1 - %s: %.2f \n", nome_cidade, pib_capital);
    printf("Carta 2 - %s: %.2f \n", nome_cidade2, pib_capital2);

  if (pib_capital > pib_capital2) {
    printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade);
  } else{
    printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
  }

    return 0;
}