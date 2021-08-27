/** 
 * Disciplina de Introdução à Programação C/C++
 * Autor: Nathan Andrade dos Santos Lobo
 * DRE: 120082390
**/

#include <stdio.h>
#define DIM 25

int main(void) {
  int vetor[DIM] = {1, 2, 4, 5, 6, 8, 30, 32, 32, 33, 33, 40, 40, 41, 41, 43, 43, 44, 46, 46, 46, 50, 50, 51, 51};
  int cont;
  int distintos = 0;

  for(int j = 0; j < DIM; j++) {
    cont = 0;
    for(int k = 0; k < DIM; k++) {
      if(vetor[j] == vetor[k]) {
        cont++;
      }
    }

    if(vetor[j] != vetor[j+1]) {
      distintos++;
      printf("O numero %d aparece %d vez(es).\n", vetor[j], cont);
    }
  }

  printf("Qtd. de valores distintos que aparecem no vetor: %d\n", distintos);

  return 0;
}