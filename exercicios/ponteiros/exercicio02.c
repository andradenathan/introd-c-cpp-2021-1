/** 
 * Disciplina de Introdução à Programação C/C++
 * Autor: Nathan Andrade dos Santos Lobo
 * DRE: 120082390
**/

#include <stdio.h>

int main(void) {
  int x, y = 0, *p;  
  p = &y;
  x = *p;
  x = 4;
  (*p)++;
  --x;
  (*p) += x;

  printf("x: %d\ny: %d\np: %d\n", x, y, *p);
} 