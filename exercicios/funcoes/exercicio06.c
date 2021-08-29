/** 
 * Disciplina de Introdução à Programação C/C++
 * Autor: Nathan Andrade dos Santos Lobo
 * DRE: 120082390
**/

#include <stdio.h>
#define MAX_LENGTH 100

int direcao = 0, x = 0, y = 0;

void avancar() {
  y += 1;
}

void voltar() {
  y -= 1;
}

void girar_esquerda() {
  x -= 1;
}

void girar_direita() {
  x += 1;
}

void imprimir() {
  printf("Posicao no momento\nDirecao: %d, X: %d, Y: %d\n", direcao, x, y);
}

void ligar() {
  int menu;
  
  while(1) {
    imprimir();

    printf("MENU:\n");
    printf("0 - Parar o Robo\n");
    printf("1 - Avancar Robo\n");
    printf("2 - Voltar Robo\n");
    printf("3 - Girar a Esquerda\n");
    printf("4 - Girar a Direita\n");
    printf("Sua opcao: ");
    scanf("%d", &menu);

    if(menu == 0) {
      printf("-------\n");
      printf("O Robo parou em X: %d Y: %d\n", x, y);
      break;
    }

    else if(menu == 1) {
      printf("Voce avancou com o Robo.\n");
      direcao = 1;
      avancar();
      printf("-------\n");
    }

    else if(menu == 2) {
      printf("Voce voltou com o Robo.\n");
      direcao = 2;
      voltar();
      printf("-------\n");
    }

    else if(menu == 3) {
      printf("Voce girou para esquerda com o Robo.\n");
      direcao = 3;
      girar_esquerda();
      printf("-------\n");
    }

    else if(menu == 4) {
      printf("Voce girou para direita com o Robo.\n");
      direcao = 4;
      girar_direita();
      printf("-------\n");
    }
  }
}

int main(void) {
  ligar();
  return 0;
}