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

  printf("a: %f\nb: %f\n", *a, *b);
}

int main(void) {
  float a = 168.3;
  float b = 72.25;

  troca(&a, &b);

  return 0;
}