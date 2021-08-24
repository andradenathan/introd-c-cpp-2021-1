/** 
 * Disciplina de Introdução à Programação C/C++
 * Autor: Nathan Andrade dos Santos Lobo
 * DRE: 120082390
**/

#include <stdio.h>

int main(void) {
  int tamanho_vetor_a;
  int tamanho_vetor_b;
  int soma_vetor_a = 0;
  int soma_vetor_b = 0;
  int produto_escalar = 0;
  
  printf("Insira um tamanho para o Vetor A: ");
  scanf("%d", &tamanho_vetor_a);
  
  printf("Insira um tamanho para o Vetor B: ");
  scanf("%d", &tamanho_vetor_b);

  int vetorA[tamanho_vetor_a + 1];
  int vetorB[tamanho_vetor_b + 1];
  int vetorC[tamanho_vetor_a + 1];
  int vetorD[tamanho_vetor_b + 1];

  for(int i = 0; i < tamanho_vetor_a + 1; i++) {
    printf("Insira um numero para o Vetor A: ");
    scanf("%d", &vetorA[i]);
    soma_vetor_a += vetorA[i];
  }

  printf("----------\n");
  
  for(int j = 0; j < tamanho_vetor_b + 1; j++) {
    printf("Insira um numero para o Vetor B: ");
    scanf("%d", &vetorB[j]);
    soma_vetor_b += vetorB[j];
  }

  for(int k = 0; k < tamanho_vetor_a + 1; k++) {
    vetorC[k] = vetorA[k] + vetorB[k];
    printf("Vetor C [%d]: %d\n", k, vetorC[k]);
  }
  
  for(int n = 0; n < tamanho_vetor_b + 1; n++) {
    vetorD[n] = vetorB[n] - vetorA[n];
    printf("Vetor D [%d]: %d\n", n, vetorD[n]);
  }

  for(int t = 0; t < tamanho_vetor_a + 1; t++) {
    produto_escalar += vetorA[t] * vetorB[t];
  }

  printf("Soma de todos os elementos do Vetor A: %d\n", soma_vetor_a);
  printf("Soma de todos os elementos do Vetor B: %d\n", soma_vetor_b);
  printf("Produto Escalar: %d\n", produto_escalar);
  
  return 0;
}