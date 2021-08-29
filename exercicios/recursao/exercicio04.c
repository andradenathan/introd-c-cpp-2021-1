/** 
 * Disciplina de Introdução à Programação C/C++
 * Autor: Nathan Andrade dos Santos Lobo
 * DRE: 120082390
**/

#include <stdio.h>

int mdc(int x, int y) {
  if(y == 0) return x;
  return mdc(y, x % y);
}

int main(void) {
  int x, y;

  printf("Insira um numero x: ");
  scanf("%d", &x);
  
  printf("Insira um numero y: ");
  scanf("%d", &y);

  int resultado = mdc(x, y);

  printf("Resultado do mdc(%d, %d): %d\n", x, y, resultado);

  return 0;
}