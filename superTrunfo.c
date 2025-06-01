#include <stdio.h>

// First card data
char estado;
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

int main()
{
  printf("Cadastre a primeira carta!\n");
  // Solicita os dados da primeira carta
  printf("Digite a letra do estado (de A a H): ");
  scanf(" %c", &estado);

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

  // Exibe os dados das cartas
  printf("\nCarta 1:\n");
  printf("Estado: %c\n", estado);
  printf("Código: %s\n", codigo);
  printf("Cidade: %s\n", nomeCidade);
  printf("População: %d\n", populacao);
  printf("Área: %.2f km²\n", area);
  printf("PIB: %.2f\n", pib);
  printf("Pontos turísticos: %d\n", pontosTuristicos);

  printf("\nCarta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Cidade: %s\n", nomeCidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f\n", pib2);
  printf("Pontos turísticos: %d\n", pontosTuristicos2);

  return 0;
}