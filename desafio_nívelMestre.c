#include <stdio.h>
int main() {
    //Variáveis para a primeira carta
    char estado1;
    char codigo1[4];
    char nomecidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;
    //Variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char nomecidade2[50];
   unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    //Leitura dos dados da primeira carta
    printf("Digite o estado da primeira carta (Uma letra de A até H):\n");
    scanf(" %c", &estado1);
    printf("Digite o código da cidade com 3 dígitos (ex:A01, B02, C03):\n");
    scanf(" %s", codigo1);
    printf("Digite o nome da cidade (Não deve ter espaços):\n");
    scanf(" %s", nomecidade1);
    printf("Digite a população da cidade:\n");
    scanf(" %d", &populacao1);
    printf("Digite a área da cidade (em km²):\n");
    scanf(" %f", &area1);
    printf("Digite o PIB da cidade (em bilhões):\n");
    scanf(" %f", &pib1);
    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf(" %d", &pontosturisticos1);
    //Leitura dos dados da segunda carta
    printf("Digite o estado da segunda carta (Uma letra de A até H):\n");
    scanf(" %c", &estado2);
    printf("Digite o código da cidade com 3 dígitos (ex:A01, B02, C03):\n");
    scanf(" %s", codigo2);
    printf("Digite o nome da cidade (Não deve ter espaços):\n");
    scanf(" %s", nomecidade2);
    printf("Digite a população da cidade:\n");
    scanf(" %d", &populacao2);
    printf("Digite a área da cidade (em km²):\n");
    scanf(" %f", &area2);
    printf("Digite o PIB da cidade (em bilhões):\n");
    scanf(" %f", &pib2);
    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf(" %d", &pontosturisticos2);

    //cálculo da densidade populacional e pib per capita cidade 1   
    float densidade1 = (float) populacao1 / area1;
    float pibpercapita1 = (float) (pib1 * 1000000000) / populacao1; // Convertendo PIB de bilhões para unidades

    //cálculo da densidade populacional e pib per capita cidade 2
    float densidade2 = (float) populacao2 / area2; 
    float pibpercapita2 = (float) (pib2 * 1000000000) / populacao2; // Convertendo PIB de bilhões para unidades

    //cálculo do super poder da carta 1. Somando todos os atributos numéricos:
    //população, área, PIB, número de pontos turísticos, PIB per capita e o INVERSO da densidade populacional
    float superpoder1 = (float) populacao1 + area1 + pib1 + pontosturisticos1 + (1/densidade1) + pibpercapita1;

    //cálculo do super poder da carta 2
    float superpoder2 = (float) populacao2  + area2 + pib2 + pontosturisticos2 + (1/densidade2) + pibpercapita2;


    //Exibição dos dados da primeira carta
    printf("Dados da primeira carta:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nomecidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontosturisticos1);
    printf("A densidade populacional é: %.2f habitantes por km²\n", densidade1);
    printf("O PIB per capita é: %.2f reais por habitante\n", pibpercapita1);
    printf("O super poder da carta 1 é: %.2f\n", superpoder1);

    //Exibição dos dados da segunda carta
    printf("Dados da segunda carta:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontosturisticos2);
    printf("A densidade populacional é: %.2f habitantes por km²\n", densidade2);
    printf("O PIB per capita é: %.2f reais por habitante\n", pibpercapita2);    
    printf("O super poder da carta 2 é: %.2f\n", superpoder2);

    // Escolha de atributos para comparação
    int escolha1, escolha2;
    float valor1_carta1, valor1_carta2;
    float valor2_carta1, valor2_carta2;

    // Menu de escolha do primeiro atributo
    printf("\nEscolha o PRIMEIRO atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade populacional\n");
    printf("6 - PIB per capita\n");
    scanf("%d", &escolha1);

    // Definindo valores do primeiro atributo
    switch (escolha1) {
        case 1: valor1_carta1 = populacao1; valor1_carta2 = populacao2; break;
        case 2: valor1_carta1 = area1; valor1_carta2 = area2; break;
        case 3: valor1_carta1 = pib1; valor1_carta2 = pib2; break;
        case 4: valor1_carta1 = pontosturisticos1; valor1_carta2 = pontosturisticos2; break;
        case 5: valor1_carta1 = densidade1; valor1_carta2 = densidade2; break;
        case 6: valor1_carta1 = pibpercapita1; valor1_carta2 = pibpercapita2; break;
        default: printf("Opção inválida!\n"); return 0;
    }

    // Menu do segundo atributo (dinâmico: não mostra o que já foi escolhido usando o "!=" (diferente de))
    printf("\nEscolha o SEGUNDO atributo para comparação:\n");
    if (escolha1 != 1) printf("1 - População\n");
    if (escolha1 != 2) printf("2 - Área\n");
    if (escolha1 != 3) printf("3 - PIB\n");
    if (escolha1 != 4) printf("4 - Pontos turísticos\n");
    if (escolha1 != 5) printf("5 - Densidade populacional\n");
    if (escolha1 != 6) printf("6 - PIB per capita\n");
    scanf("%d", &escolha2);

    // Garantir que o jogador não escolha o mesmo atributo
    if (escolha2 == escolha1) {
        printf("Erro: você não pode escolher o mesmo atributo duas vezes!\n");
        return 0;
    }

    // Definindo valores do segundo atributo
    switch (escolha2) {
        case 1: valor2_carta1 = populacao1; valor2_carta2 = populacao2; break;
        case 2: valor2_carta1 = area1; valor2_carta2 = area2; break;
        case 3: valor2_carta1 = pib1; valor2_carta2 = pib2; break;
        case 4: valor2_carta1 = pontosturisticos1; valor2_carta2 = pontosturisticos2; break;
        case 5: valor2_carta1 = densidade1; valor2_carta2 = densidade2; break;
        case 6: valor2_carta1 = pibpercapita1; valor2_carta2 = pibpercapita2; break;
        default: printf("Opção inválida!\n"); return 0;
    }

    // Comparação atributo 1
    int vencedor1;
    if (escolha1 == 5) { // Regra para menor densidade vencer
        vencedor1 = (valor1_carta1 < valor1_carta2) ? 1 : (valor1_carta2 < valor1_carta1 ? 2 : 0);
    } else {
        vencedor1 = (valor1_carta1 > valor1_carta2) ? 1 : (valor1_carta2 > valor1_carta1 ? 2 : 0);
    }

    // Comparação atributo 2
    int vencedor2;
    if (escolha2 == 5) { 
        vencedor2 = (valor2_carta1 < valor2_carta2) ? 1 : (valor2_carta2 < valor2_carta1 ? 2 : 0);
    } else {
        vencedor2 = (valor2_carta1 > valor2_carta2) ? 1 : (valor2_carta2 > valor2_carta1 ? 2 : 0);
    }

    // Soma dos atributos escolhidos
    float soma1 = valor1_carta1 + valor2_carta1;
    float soma2 = valor1_carta2 + valor2_carta2;

    // Exibição do resultado
    printf("\n===== Resultado da Comparação =====\n");
    printf("Carta 1 (%s) vs Carta 2 (%s)\n", nomecidade1, nomecidade2);

    // Mostrar nome do atributo escolhido no printf usando switch
    printf("Primeiro atributo escolhido: ");
    switch (escolha1) {
        case 1: printf("População\n"); break;
        case 2: printf("Área\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Pontos turísticos\n"); break;
        case 5: printf("Densidade populacional\n"); break;
        case 6: printf("PIB per capita\n"); break;
    }
    printf("Valores: Carta 1 = %.2f | Carta 2 = %.2f\n", valor1_carta1, valor1_carta2);

    printf("Segundo atributo escolhido: ");
    switch (escolha2) {
        case 1: printf("População\n"); break;
        case 2: printf("Área\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Pontos turísticos\n"); break;
        case 5: printf("Densidade populacional\n"); break;
        case 6: printf("PIB per capita\n"); break;
    }
    printf("Valores: Carta 1 = %.2f | Carta 2 = %.2f\n", valor2_carta1, valor2_carta2);

    // Mostrar soma dos atributos
    printf("Soma dos atributos: Carta 1 = %.2f | Carta 2 = %.2f\n", soma1, soma2);

    // Resultado final comparando qual carta venceu
    if (soma1 > soma2) {
        printf("Vencedora: Carta 1 (%s)\n", nomecidade1);
    } else if (soma2 > soma1) {
        printf("Vencedora: Carta 2 (%s)\n", nomecidade2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}