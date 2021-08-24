/** 
 * Disciplina de Introdução à Programação C/C++
 * Autor: Nathan Andrade dos Santos Lobo
 * DRE: 120082390
**/

#include <stdio.h>
#define DIM_VETOR_A 10
#define DIM_VETOR_P 10

int main(void) {
  int vetorA[DIM_VETOR_A];
  int vetorP[DIM_VETOR_P];

  for (int i = 0; i < DIM_VETOR_A; i++) {
    printf("Insira um numero na posicao [%d] no vetor A: ", i);
    scanf("%d", &vetorA[i]);
  }
  
  for (int j = 0; j < DIM_VETOR_P; j++) {
    if(vetorA[j] % 2 == 0) {
      vetorP[j] = j;
      printf("Indices armazenados no Vetor P: %d\n", vetorP[j]);
    } else {
      continue;
    }
  }

  return 0;
}