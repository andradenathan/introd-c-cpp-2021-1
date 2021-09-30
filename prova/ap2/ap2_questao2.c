/** 
 * Disciplina de Introdução à Programação C/C++
 * Autor: Nathan Andrade dos Santos Lobo
 * DRE: 120082390
**/

#include <stdio.h>

void troca(float *a, float *b) {
  float *temp;

  temp = a;
  a = b;
  b = temp;
  printf("a: %.2f\nb: %.2f\n", *a, *b);
}

int main(void) {
  float a = 139.55;
  float b = 94.33;
  
  troca(&a, &b);

  return 0;
}