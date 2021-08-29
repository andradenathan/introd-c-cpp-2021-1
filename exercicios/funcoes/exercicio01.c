/** 
 * Disciplina de Introdução à Programação C/C++
 * Autor: Nathan Andrade dos Santos Lobo
 * DRE: 120082390
**/

#include <stdio.h>

int potencia(x, y) {
  int res = 1;
  for(int i = 0; i < y; i++) {
    res *= x;
  }

  return res;
}

int calcula_equacao(int x, int y, unsigned int a, unsigned int b) {
  return potencia(x, a) + potencia(y, b) + potencia(x - y, a + b);
}

int main(void) {
  int resultado = calcula_equacao(11, 3, 2, 2);

  printf("%d\n", resultado);

  return 0;
}