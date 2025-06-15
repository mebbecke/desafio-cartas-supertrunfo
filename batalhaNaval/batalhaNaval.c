#include <stdio.h>

int tabuleiro[10][10] = {0};
// Coordenadas iniciais
int linhaH = 2, colunaH = 4; // navio horizontal
int linhaV = 5, colunaV = 1; // navio vertical

void posicionaNavios()
{
  // Posicionando navio horizontal
  for (int i = 0; i < 3; i++)
  {
    tabuleiro[linhaH][colunaH + i] = 3;
  }

  // Posicionando navio vertical
  for (int i = 0; i < 3; i++)
  {
    tabuleiro[linhaV + i][colunaV] = 3;
  }
}

void imprimeTabuleiro()
{
  // Imprimindo o tabuleiro
  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      printf("%d ", tabuleiro[i][j]);
    }
    printf("\n");
  }
}

int main()
{
  posicionaNavios();
  imprimeTabuleiro();
  return 0;
}
