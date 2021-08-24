/** 
 * Disciplina de Introdução à Programação C/C++
 * Autor: Nathan Andrade dos Santos Lobo
 * DRE: 120082390
**/

#include <stdio.h>
#define DIM 10

int checa_vetor(int vetor[], int item) {
  for(int i = 0; i < DIM; i++) {
    if(vetor[i] == item) {
      return 1;
    }
  }

  return 0;
}

int main(void) {
  int vetorA[DIM] = {1, 2, 4, 5, 6, 8, 9, 13, 14, 16};
  int vetorB[DIM]; 
  int vetorC[DIM + 1];
  int indexC = 1;

  vetorC[0] = -1;

  for(int i = 0; i < DIM; i++) {
    printf("Insira um numero na posicao [%d] do vetor B: ", i);
    scanf("%d", &vetorB[i]);
  }

  for(int j = 0; j < DIM; j++) {
    if(checa_vetor(vetorB, vetorA[j])) {
      vetorC[indexC] = vetorA[j];
      indexC++;
    }
  }  

  for(int k = 0; k < indexC; k++) {
    printf("Posicao [%d] do Vetor C: %d\n", k, vetorC[k]);
  }

  return 0;
}