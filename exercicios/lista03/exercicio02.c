/** 
 * Disciplina de Introdução à Programação C/C++
 * Autor: Nathan Andrade dos Santos Lobo
 * DRE: 120082390
**/

#include <stdio.h>
#define DIM 10

int main(void) {
  int vetor[DIM];
  int elem, aux = 0;

  for (int i = 0; i < DIM; i++) {
    printf("Insira um numero na posicao [%d]: ", i);
    scanf("%d", &vetor[i]);
  }

  printf("Escolha um numero para buscar no vetor: ");
  scanf("%d", &elem);
  
  for (int j = 0; j < DIM; j++) {
    if (elem == vetor[j]) {
      aux = 1;
    }
  }

  if(aux == 1) {
    printf("O numero %d esta presente no vetor\n", elem);
    return 0;
  } else {
    printf("O numero %d nao foi encontrado no vetor\n", elem);
    return 1;
  }
}
