#include <stdio.h>

// First card data
char estado[10];
char codigo[4];
char nomeCidade[50];
int populacao;
float area;
float pib;
int pontosTuristicos;

// Second card data
char estado2;
char codigo2[4];
char nomeCidade2[50];
int populacao2;
float area2;
float pib2;
int pontosTuristicos2;

void entradaDados()
{
  printf("Cadastre a primeira carta!\n");

  // Solicita os dados da primeira carta
  printf("Digite a letra do estado (de A a H): ");
  scanf(" %c", estado);

  printf("Digite a o código da carta (Ex.: A01): ");
  scanf("%s", codigo);

  printf("Digite o nome da cidade: ");
  scanf("%s", nomeCidade);

  printf("Digite a população: ");
  scanf("%d", &populacao);

  printf("Digite a área em km²: ");
  scanf("%f", &area);

  printf("Digite o PIB: ");
  scanf("%f", &pib);

  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &pontosTuristicos);

  printf("Primeira carta registrada com sucesso! Agora cadastre a segunda carta.\n");

  // Solicita os dados da segunda carta
  printf("\nDigite a letra do estado (de A a H): ");
  scanf(" %c", &estado2);

  printf("Digite o código da carta (Ex.: A01): ");
  scanf("%s", codigo2);

  printf("Digite o nome da cidade: ");
  scanf("%s", nomeCidade2);

  printf("Digite a população: ");
  scanf("%d", &populacao2);

  printf("Digite a área em km²: ");
  scanf("%f", &area2);

  printf("Digite o PIB: ");
  scanf("%f", &pib2);

  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &pontosTuristicos2);

  printf("Segunda carta registrada com sucesso!\n");
}

float calcularDensidadePopulacional(int populacao, float area)
{
  if (area == 0)
  {
    return 0;
  }
  return populacao / area;
}

float calcularPibPerCapita(float pib, float populacao)
{
  if (populacao == 0)
  {
    return 0;
  }
  return (pib * 1e9) / populacao;
}

void exibirDados()
{
  // Exibe os dados das cartas
  printf("\nCarta 1:\n");
  printf("Estado: %s\n", estado);
  printf("Código: %s\n", codigo);
  printf("Cidade: %s\n", nomeCidade);
  printf("População: %d\n", populacao);
  printf("Área: %.2f km²\n", area);
  printf("PIB: %.2f bilhões de reais\n", pib);
  printf("Pontos turísticos: %d\n", pontosTuristicos);
  printf("Densidade populacional: %.2f hab/km²\n", calcularDensidadePopulacional((float)populacao, area));
  printf("PIB per capita: %.2f reais\n", calcularPibPerCapita(pib, (float)populacao));

  printf("\nCarta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Cidade: %s\n", nomeCidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Pontos turísticos: %d\n", pontosTuristicos2);
  printf("Densidade populacional: %.2f hab/km²\n", calcularDensidadePopulacional((float)populacao2, area2));
  printf("PIB per capita: %.2f reais\n", calcularPibPerCapita(pib2, (float)populacao2));

  printf("=========================================================\n");
}

void exibirCartaVencedora()
{
  printf("Comparação das cartas:\n");

  // Compara o atributo "população" das cartas
  if (populacao > populacao2)
  {
    printf("Carta 1 venceu!\n");
  }
  else if (populacao < populacao2)
  {
    printf("Carta 2 venceu!\n");
  }
  else
  {
    printf("Empate!\n");
  }
}

int main()
{
  entradaDados();
  exibirDados();
  exibirCartaVencedora();
  return 0;
}