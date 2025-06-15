#include <stdio.h>
#include <string.h>

int casas = 5;         // Definindo as casas diretamente no código
char direcao[3] = "c"; // Definindo a direção diretamente no código

void moverTorre(int casas, char *direcao)
{
  printf("Movendo a torre %i casas na direção escolhida...\n", casas);

  while (casas > 0) // O loop roda até que as casas restantes sejam 0
  {
    // Imprime a direção conforme a letra escolhida pelo usuário
    if (strcmp(direcao, "c") == 0) // usando a função strcmp() da biblioteca string.h para comparar strings
    {
      printf("Cima\n");
    }
    else if (strcmp(direcao, "b") == 0)
    {
      printf("Baixo\n");
    }
    else if (strcmp(direcao, "e") == 0)
    {
      printf("Esquerda\n");
    }
    else if (strcmp(direcao, "d") == 0)
    {
      printf("Direita\n");
    }
    else
    {
      printf("Direção inválida para a torre\n"); // A peça não será movimentada caso a direção escolhida não seja permitida para ela
      return;                                    // Sai do loop para não repetir a mensagem acima várias vezes
    }

    casas--; // Decrementa as casas restantes para movimentar
  }
}

void moverBispo(int casas, char *direcao)
{
  printf("Movendo o bispo %i casas na direção escolhida...\n", casas);

  while (casas > 0)
  {
    if (strcmp(direcao, "ce") == 0)
    {
      printf("Cima\n");
      printf("Esquerda\n");
    }
    else if (strcmp(direcao, "cd") == 0)
    {
      printf("Cima\n");
      printf("Direita\n");
    }
    else if (strcmp(direcao, "be") == 0)
    {
      printf("Baixo\n");
      printf("Esquerda\n");
    }
    else if (strcmp(direcao, "bd") == 0)
    {
      printf("Baixo\n");
      printf("Direita\n");
    }
    else
    {
      printf("Direção inválida para o bispo\n");
      return;
    }

    casas--;
  }
}

void moverRainha(int casas, char *direcao)
{
  printf("Movendo a rainha %i casas na direção escolhida...\n", casas);

  while (casas > 0)
  {
    // A rainha tem tanto os movimentos da torre quanto os do bispo
    if (strcmp(direcao, "c") == 0)
    {
      printf("Cima\n");
    }
    else if (strcmp(direcao, "b") == 0)
    {
      printf("Baixo\n");
    }
    else if (strcmp(direcao, "e") == 0)
    {
      printf("Esquerda\n");
    }
    else if (strcmp(direcao, "d") == 0)
    {
      printf("Direita\n");
    }
    else if (strcmp(direcao, "ce") == 0)
    {
      printf("Cima\n");
      printf("Esquerda\n");
    }
    else if (strcmp(direcao, "cd") == 0)
    {
      printf("Cima\n");
      printf("Direita\n");
    }
    else if (strcmp(direcao, "be") == 0)
    {
      printf("Baixo\n");
      printf("Esquerda\n");
    }
    else if (strcmp(direcao, "bd") == 0)
    {
      printf("Baixo\n");
      printf("Direita\n");
    }
    else
    {
      printf("Direção inválida\n");
      return;
    }

    casas--;
  }
}

// void entradaDados()
// // Registra o valor das casas e da direção pelo usuário
// {
//   printf("Digite o número de casas: ");
//   scanf("%i", &casas);
//   printf("Digite a direção (c = cima, b = baixo, cd = diagonal para cima e direita, etc...): ");
//   scanf(" %s", direcao);
// }

int main()
{
  // entradaDados();

  printf("Iniciando o movimento das peças...\n");

  // Chamada das funções que movimentam as peças
  moverTorre(casas, direcao);
  moverBispo(casas, direcao);
  moverRainha(casas, direcao);
  return 0;
}