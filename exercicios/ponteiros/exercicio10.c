/** 
 * Disciplina de Introdução à Programação C/C++
 * Autor: Nathan Andrade dos Santos Lobo
 * DRE: 120082390
**/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
  int *vetor;
  int *tam_vetor;

} Resposta;

Resposta res;
int tamanho = 0;

Resposta busca(char string[], char letra) {
  res.vetor = malloc(strlen(string) * sizeof(int));
  res.tam_vetor = malloc(sizeof(int *));
  for(int i = 0; i < strlen(string); i++) {
    if(string[i] == letra) {
      res.vetor[tamanho] = i;
      tamanho++;
    }
  }
  
  if(tamanho == 0) {
   printf("Letra %c não encontrada na palavra\n", letra); 
  }

  else {
    printf("Letra %c nos índices: ", letra);
    for(int i = 0; i < tamanho; i++) {
      printf("%d ", res.vetor[i]);
    }
    printf("\n");
    
  }
  res.tam_vetor = &tamanho;
  printf("Tamanho do vetor: %d\n", *res.tam_vetor);
  return res;
}

int main(void) {  
  char string[] = "Nathan";
  char letra;

  printf("Insira uma letra: ");
  scanf(" %c", &letra);
  busca(string, letra);
  free(res.vetor);
  return 0;
}
