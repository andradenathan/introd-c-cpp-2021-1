/** 
 * Disciplina de Introdução à Programação C/C++
 * Autor: Nathan Andrade dos Santos Lobo
 * DRE: 120082390
**/

#include <stdio.h>

int situacao_final(float media_final) {
  if(media_final <= 4.9) {
    printf("D\n");
  }

  else if(media_final <= 6.9) {
    printf("C\n");
  }

  else if(media_final <= 8.9) {
    printf("B\n");
  }

  else if(media_final <= 10.0) {
    printf("A\n");
  }

  return 0;
}

int main(void) {
  float media = 6.7;
  printf("Situacao final: ");
  printf("%c", situacao_final(media));

  return 0;
}