/** 
 * Disciplina de Introdução à Programação C/C++
 * Autor: Nathan Andrade dos Santos Lobo
 * DRE: 120082390
**/

#include <stdio.h>
#define DIM 20

int main(void) {
  int vetorA[DIM] = {1, 2, 3, 4, 6, 9, 10, 11, 23, 26, 29, 30, 34, 46, 47, 48, 68, 67, 65};
  int vetorB[DIM] = {1, 2, 3, 7, 8, 9, 10, 11, 23, 26, 29, 30, 33, 34, 35, 61, 68, 67, 65};
  int maior_sequencia = 0;
  int sequencia = 0;

  for(int i = 0; i < DIM; i++) {
    for(int j = 0; j < DIM; j++) {
      if(vetorA[j] == vetorB[j]) {
        sequencia++;
        if(sequencia > maior_sequencia) {
          maior_sequencia = sequencia;
        }
      } else {
        sequencia = 0;
      }
    }
  }

  printf("A maior sequencia e dada por: %d\n", maior_sequencia);

  return 0;
}
