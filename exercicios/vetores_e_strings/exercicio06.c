/** 
 * Disciplina de Introdução à Programação C/C++
 * Autor: Nathan Andrade dos Santos Lobo
 * DRE: 120082390
**/

#include <stdio.h>
#define DIM 10

int main(void) {
  int vetorA[DIM];
  int vetorB[DIM];
  int sequencia = 0;

  for(int i = 0; i < DIM; i++) {
    printf("Insira um numero para o Vetor A: ");
    scanf("%d", &vetorA[i]);
  }

  for(int j = 0; j < DIM; j++) {
    printf("Insira um numero para o Vetor B: ");
    scanf("%d", &vetorB[j]);
  }

  for(int i = 0; i < DIM; i++) {
    for(int m = 0; m < i; m++) {
      if(vetorA[m] == vetorB[m]) {
        sequencia++;
      }
    }
  }

  printf("A maior sequencia e dada por: %d\n", sequencia);

  return 0;
}
