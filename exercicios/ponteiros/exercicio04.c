/** 
 * Disciplina de Introdução à Programação C/C++
 * Autor: Nathan Andrade dos Santos Lobo
 * DRE: 120082390
**/

#include <stdio.h>
#define DIM 10

void mm(int vetor[], int *min, int *max) {
  for(int i = 0; i < DIM; i++) {
    if(*min > vetor[i]) {
      min = &vetor[i];
    }
    
    if(vetor[i] > *max) {
      max = &vetor[i];
    } 
  }

  printf("O menor numero e: %d\n", *min);
  printf("O maior numero e: %d\n", *max);
}

int main(void) {
  int vetor[DIM] = {6, 12, 19, 23, 77, 52, 68, 91, 1010, 4};
  int min = 1000;
  int max = 0;

  mm(vetor, &min, &max);
  
  return 0;
}