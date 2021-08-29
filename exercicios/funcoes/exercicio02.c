/** 
 * Disciplina de Introdução à Programação C/C++
 * Autor: Nathan Andrade dos Santos Lobo
 * DRE: 120082390
**/

#include <stdio.h>

int perfeito(int num) {
  int divisores = 0;

  for(int i = 1; i < num; i++) {
    if(num % i == 0) {
      divisores += i;
    }
  }

  if(divisores == num) {
    return 1;
  }

  return 0; 
}

int main(void) {
  int num = 33550336;
  int resultado = perfeito(num);

  printf("Numero %d:\n0 - Nao e perfeito\n1 - Perfeito\nResultado: %d\n", num, resultado);

  return 0;
}