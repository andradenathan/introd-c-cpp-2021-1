/** 
 * Disciplina de Introdução à Programação C/C++
 * Autor: Nathan Andrade dos Santos Lobo
 * DRE: 120082390
**/

#include <stdio.h>
#define DIM 10

void maximoMinimo(int *v, int N, int *maximo, int *minimo) {
  for(int i = 0; i < N; i++) {
    if(v[i] > *maximo) {
      maximo = &v[i];
    }

    if(*minimo > v[i]) {
      minimo = &v[i];
    }
  }

  printf("O menor valor é: %d\n", *minimo);
  printf("O maior valor é: %d\n", *maximo);
}

int main(void) {
  int vetor[DIM] = {3, 8, 22, 11, 5, 4, 9, 7, 33, 25}; 
  int maximo = 0;
  int minimo = 1000;

  maximoMinimo(vetor, DIM, &maximo, &minimo);

  return 0;
}