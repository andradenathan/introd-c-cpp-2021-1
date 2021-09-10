/** 
 * Disciplina de Introdução à Programação C/C++
 * Autor: Nathan Andrade dos Santos Lobo
 * DRE: 120082390
**/

#include <stdio.h>
#define DIM 5

int main(void) {
  int vetor[DIM] = {2, 4, 6, 8, 10};
  int *p = vetor;

  printf("Notação de índice:\n");
  for(int i = 0; i < DIM; i++) {
    printf("Vetor[%d]: %d\n", i, vetor[i]);
  }
  printf("------\n");
  printf("Notação de ponteiro: \n");
  for(int i = 0; i < DIM; i++) {
    printf("Vetor[%d]: %d\n", i, *(p+i));
  }
  return 0;
}