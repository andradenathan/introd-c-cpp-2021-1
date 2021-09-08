/** 
 * Disciplina de Introdução à Programação C/C++
 * Autor: Nathan Andrade dos Santos Lobo
 * DRE: 120082390
**/

#include <stdio.h>
#include <string.h>

void busca(char string[], char letra) {
  int *TAM_VETOR;
  char *vetor;
  
  for(int i = 0; i < strlen(string); i++) {
    if(string[i] == letra) {
      vetor[i] = i;
      *(TAM_VETOR++);
    }
  }
}

int main(void) {
  char string[] = "Nathan";
  char letra;
  for(int i = 0; i < strlen(string); i++) {
    printf("Insira uma letra: ");
    scanf(" %c", &letra);
    busca(string, letra);
  }
  return 0;
}
