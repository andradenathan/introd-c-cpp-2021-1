/** 
 * Disciplina de Introdução à Programação C/C++
 * Autor: Nathan Andrade dos Santos Lobo
 * DRE: 120082390
**/

#include <stdio.h>
#define DIM 10

int main(void) {
  int soma_vetor_a = 0;
  int soma_vetor_b = 0;
  int produto_escalar = 0;

  printf("----------\n");

  int vetorA[DIM];
  int vetorB[DIM];
  int vetorC[DIM];
  int vetorD[DIM];

  for(int i = 0; i < DIM; i++) {
    printf("Insira um numero para o Vetor A[%d]: ", i);
    scanf("%d", &vetorA[i]);
    soma_vetor_a += vetorA[i];
  }

  printf("----------\n");

  for(int i = 0; i < DIM; i++) {
    printf("Insira um numero para o Vetor B[%d]: ", i);
    scanf("%d", &vetorB[i]);
    soma_vetor_b += vetorB[i];
  }

  for(int i = 0; i < DIM; i++) {
    vetorC[i] = vetorA[i] + vetorB[i];
    printf("Vetor C [%d]: %d\n", i, vetorC[i]);
  }

  for(int i = 0; i < DIM; i++) {
    vetorD[i] = vetorB[i] - vetorA[i];
    printf("Vetor D [%d]: %d\n", i, vetorD[i]);
  }

  for(int i = 0; i < DIM; i++) {
    produto_escalar += vetorA[i] * vetorB[i];
  }

  printf("Soma de todos os elementos do Vetor A: %d\n", soma_vetor_a);
  printf("Soma de todos os elementos do Vetor B: %d\n", soma_vetor_b);
  printf("Produto Escalar: %d\n", produto_escalar);

  return 0;
}