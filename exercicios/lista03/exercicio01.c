/** 
 * Disciplina de Introdução à Programação C/C++
 * Autor: Nathan Andrade dos Santos Lobo
 * DRE: 120082390
**/

#include <stdio.h>
#define DIM 10

int main(void) {
  int vetor[DIM];
  int i, j;

  for(i = 0; i < DIM; i++) {
    printf("Insira um numero na posicao [%d]: ", i);
    scanf("%d", &vetor[i]);
  }

  for(j = DIM - 1; j >= 0; j--) {
    printf("%d ", vetor[j]);
  }

  printf("\n");
  return 0;
}
