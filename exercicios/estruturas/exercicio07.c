/** 
 * Disciplina de Introdução à Programação C/C++
 * Autor: Nathan Andrade dos Santos Lobo
 * DRE: 120082390
**/
 
#include <stdio.h>
#include <math.h>

typedef struct Ponto {
  float x;
  float y;
} Ponto;

float distancia(Ponto *a, Ponto *b) {
  float formula = pow((b->x - a->x), 2) + pow((b->y - a->y), 2);
  return sqrt(formula);
}

int main(void) {
  Ponto p;
  Ponto q;
  float resultado;
  
  p.x = 13.3;
  p.y = 11.1;
  q.x = -7.2;
  q.y = 8.5;

  resultado = distancia(&p, &q);
  printf("Distância de P -> Q: %f\n", resultado);
  return 0;
}