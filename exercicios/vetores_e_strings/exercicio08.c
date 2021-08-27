/** 
 * Disciplina de Introdução à Programação C/C++
 * Autor: Nathan Andrade dos Santos Lobo
 * DRE: 120082390
**/

#include <stdio.h>
#define DIM 20

int main(void) {
  int vetor[DIM] = {1, 2, 4, 5, 6, 8, 10, 12, 14, 16, 28, 29, 31, 33, 40, 42, 46, 48, 50, 52};
  int aux, fim_vetor = DIM - 1;

  for(int i = 0; i < DIM/2; i++) {
    aux = vetor[i];
    vetor[i] = vetor[fim_vetor];
    vetor[fim_vetor] = aux;
    fim_vetor--;
  }

  for(int j = 0; j < DIM; j++) {
    printf("Vetor alterado: %d\n", vetor[j]);
  }

  return 0;
}