/** 
 * Disciplina de Introdução à Programação C/C++
 * Autor: Nathan Andrade dos Santos Lobo
 * DRE: 120082390
**/

#include <stdio.h>
#define DIM 10

int encontra_menor(int vetor[], int posicao, int elem) {
  if(posicao == 0) {
    return elem;
  }

  if(elem > vetor[posicao]) {
    elem = vetor[posicao];
  }

  return encontra_menor(vetor, posicao - 1, elem);
}

int main(void) {
  int vetor[DIM] = {6, 3, 28, 67, 11, 4, 44, 19, 2, 27};
  int resultado;

  for(int i = 0; i < DIM; i++) {
    resultado = encontra_menor(vetor, DIM - 1, vetor[i]);
    printf("Vetor[%d]: %d\n", i, vetor[i]);
  }

  printf("O menor numero do Vetor: %d\n", resultado);

  return 0;
}