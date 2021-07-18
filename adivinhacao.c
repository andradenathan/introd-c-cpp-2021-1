#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  printf("********\n");
  printf("Bem-vindo ao jogo da adivinhacao!\n");
  printf("********\n");
  
  int segundos = time(0);
  srand(segundos);

  int numero;
  int chute;
  int tentativas;

  double pontuacao = 1000;
  
  int nivel;
  printf("Escolha o nivel de dificuldade: \n");
  printf("(1) - Facil | (2) Medio | (3) Dificil\n");
  printf("Sua opcao: ");
  scanf("%d", &nivel);

  printf("Digite o numero de tentativas: ");
  scanf("%d", &tentativas);
  
  switch(nivel) {
    case 1:
      numero = rand() % 100;
      break;
      
    case 2:
      numero = rand() % 10;
      break;

    default:
      numero = (int) rand() / 2;
      break;
  }

  for(int i = 1; i <= tentativas; i++) {
    printf("Tentativa %d de %d\n", i, tentativas);
    printf("Qual e o seu chute? ");
    scanf("%d", &chute);
    printf("Seu chute foi: %d\n", chute);

    int acertou = (chute == numero);
    int maior = (chute > numero);

    if(chute < 0) {
      printf("Error: Voce nao pode chutar numeros negativos!\n");
      continue;
    }

    if(acertou) {
      printf("Fim de jogo: Voce acertou o numero!\n");
      printf("Voce acertou o jogo em %d tentativas!\n", i);
      printf("Total de pontos: %.1f\n", pontuacao);
      break;
    } 

    else if (maior) {
      printf("Seu chute foi maior que o numero secreto!\n");
    }

    else {
      printf("Seu chute foi menor que o numero secreto!\n");
    }

    double pontos_perdidos = abs((chute - numero) / 2.0);
    pontuacao -= pontos_perdidos; 
  }

  printf("O numero era: %d", numero);
}