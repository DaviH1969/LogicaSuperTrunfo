#include <stdio.h>

int main() {
// Declaração de variáveis para armazenar os dados das cartas
char pais, pais2; // Representa o país (A-H)
char cod_carta[20], cod_carta2[20]; // Código da carta (ex: A1, B3)
char nome_pais[50], nome_pais2[50];  // Nome do país
unsigned long int populacao, populacao2; // População do país
float area, area2; // Área do país em km²
float pib, pib2;  // PIB do país
int pont_turisticos, pont_turisticos2;  // Número de pontos turísticos
float densi_populacional, densi_populacional2; // Densidade populacional (habitantes / área)
float pib_capital, pib_capital2; // PIB per capita (PIB / população)    
float super_poder1, super_poder2; // Super poder da carta, baseado nos atributos  

// Entrada de dados para a carta 1
printf("Insira uma letra de 'A' a 'H' para representar o país (Carta 1): \n");
scanf(" %c", &pais); // Espaço antes de %c para evitar problemas com buffer

printf("Insira a letra do país seguida de um número de 01 a 04 (ex: A1, B3) (Carta 1): \n");
scanf("%s", cod_carta); // Armazena o código da carta

printf("Insira o nome do país (Carta 1): \n");
scanf("%s", nome_pais); // Nome do país

printf("Insira o numero de habitantes (Carta 1): \n");
scanf("%lu", &populacao); // Armazena a população

printf("Insira a área do país em km² (Carta 1): \n");
scanf("%f", &area); // Armazena a área

printf("Insira o PIB do país em bilhões (Carta 1): \n");
scanf("%f", &pib); // Armazena o PIB

printf("Insira a quantidade de pontos turísticos (Carta 1): \n");
scanf("%d", &pont_turisticos); // Captura a quantidade de pontos turísticos

// Cálculo dos atributos derivados
densi_populacional = populacao / area;
pib_capital = pib / populacao;
super_poder1 = populacao + area + pib + pont_turisticos + pib_capital + (1 / densi_populacional);

// Entrada de dados para a carta 2
printf("Insira uma letra de 'A' a 'H' para representar o país (Carta 2): \n");
scanf(" %c", &pais2);

printf("Insira a letra do país seguida de um número de 01 a 04 (ex: A1, B3) (Carta 2): \n");
scanf(" %s", cod_carta2);

printf("Insira o nome do país (Carta 2): \n");
scanf("%s", nome_pais2);

printf("Insira o número de habitantes (Carta 2): \n");
scanf("%lu", &populacao2);

printf("Insira a área do país em km² (Carta 2): \n");
scanf("%f", &area2);

printf("Insira o PIB do país em bilhões (Carta 2): \n");
scanf("%f", &pib2);

printf("Insira a quantidade de pontos turísticos (Carta 2): \n");
scanf("%d", &pont_turisticos2);

// Cálculo dos atributos derivados para a segunda carta
densi_populacional2 = populacao2 / area2;
pib_capital2 = pib2 / populacao2;
super_poder2 = populacao2 + area2 + pib2 + pont_turisticos2 + pib_capital2 + (1 / densi_populacional2);

// Exibição dos dados da Carta 1
printf("\n ==== Carta 1 ====\n");
printf("País: %c\n", pais);
printf("Código: %s\n", cod_carta);
printf("Nome do país: %s\n", nome_pais);
printf("População: %lu\n", populacao);
printf("Àrea: %.2f Km²\n", area);
printf("PIB: %.2f bilhões de reais\n", pib);
printf("Número de Pontos Turístico: %d\n", pont_turisticos);
printf("Densidade Populacional: %.2f hab/km²\n", densi_populacional);
printf("PIB per capital: %.2f reais\n", pib_capital);

// Exibição dos dados da Carta 2
printf("\n ==== Carta 2 ====\n");
printf("País: %c \n", pais2);
printf("Código: %s\n", cod_carta2);
printf("Nome do país: %s\n", nome_pais2);
printf("População: %lu\n", populacao2);
printf("Àrea: %.2f Km²\n", area2);
printf("PIB: %.2f bilhões de reais\n", pib2);
printf("Número de Pontos Turístico: %d\n", pont_turisticos2);
printf("Densidade Populacional: %.2f hab/km²\n", densi_populacional2);
printf("PIB per capital: %.2f reais\n", pib_capital2);

    // Menu de atributos
int atributo1 = 0, atributo2 = 0;
printf("\n==== Menu de atributos ====\n");
printf("\nEscolha o PRIMEIRO atributo para comparar: \n");
printf("1 - População \n2 - Área \n3 - PIB \n4 - Pontos Turísticos \n5 - Densidade Populacional \n6 - PIB per capita \nOpção: ");
scanf("%d", &atributo1);

printf("Escolha o SEGUNDO atributo (diferente do primeiro) \nOpção: ");
scanf("%d", &atributo2);

if (atributo1 < 1 || atributo1 > 6 || atributo2 < 1 || atributo2 > 6) {
    printf("Erro: Um ou ambos os atributos são inválidos.\n=== Encerrando o programa. ===\n");
    return 1;
} else if (atributo1 == atributo2) {
    printf("Erro: Os atributos devem ser diferentes.\n=== Encerrando o programa. ===\n");
    return 1;
}

    // Obter os valores
    float valor1_c1 = 0, valor1_c2 = 0, valor2_c1 = 0, valor2_c2 = 0;

    // Atributo 1
    if (atributo1 == 1) {
        valor1_c1 = populacao;
        valor1_c2 = populacao2;
    } else if (atributo1 == 2) {
        valor1_c1 = area;
        valor1_c2 = area2;
    } else if (atributo1 == 3) {
        valor1_c1 = pib;
        valor1_c2 = pib2;
    } else if (atributo1 == 4) {
        valor1_c1 = pont_turisticos;
        valor1_c2 = pont_turisticos2;
    } else if (atributo1 == 5) {
        valor1_c1 = densi_populacional;
        valor1_c2 = densi_populacional2;
    } else if (atributo1 == 6) {
        valor1_c1 = pib_capital;
        valor1_c2 = pib_capital2;
    }

    // Atributo 2
    if (atributo2 == 1) {
        valor2_c1 = populacao;
        valor2_c2 = populacao2;
    } else if (atributo2 == 2) {
        valor2_c1 = area;
        valor2_c2 = area2;
    } else if (atributo2 == 3) {
        valor2_c1 = pib;
        valor2_c2 = pib2;
    } else if (atributo2 == 4) {
        valor2_c1 = pont_turisticos;
        valor2_c2 = pont_turisticos2;
    } else if (atributo2 == 5) {
        valor2_c1 = densi_populacional;
        valor2_c2 = densi_populacional2;
    } else if (atributo2 == 6) {
        valor2_c1 = pib_capital;
        valor2_c2 = pib_capital2;
    }

    float soma1 = valor1_c1 + valor2_c1;
    float soma2 = valor1_c2 + valor2_c2;

    printf("\n--- Comparação Final ---\n"); //Determinação do vencedor da partida
    printf("%s: %.2f + %.2f = %.2f\n", nome_pais, valor1_c1, valor2_c1, soma1);
    printf("%s: %.2f + %.2f = %.2f\n", nome_pais2, valor1_c2, valor2_c2, soma2);

    if (soma1 > soma2)
        printf("Resultado: %s venceu!\n", nome_pais);
    else if (soma2 > soma1)
        printf("Resultado: %s venceu!\n", nome_pais2);
    else
        printf("Resultado: Empate!\n");

    return 0;
}