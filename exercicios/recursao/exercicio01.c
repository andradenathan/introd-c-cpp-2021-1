/** 
 * Disciplina de Introdução à Programação C/C++
 * Autor: Nathan Andrade dos Santos Lobo
 * DRE: 120082390
**/

#include <stdio.h>
#define DIM 10

int soma_recursiva(int vetor[], int posicao) {
  if(posicao == 0) {
    return vetor[0];
  }
  
  return vetor[posicao] + soma_recursiva(vetor, posicao - 1);
}

int main(void) {
  int vetor[DIM] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int resultado = soma_recursiva(vetor, DIM - 1);

  printf("Resultado: %d\n", resultado);

  return 0;
}