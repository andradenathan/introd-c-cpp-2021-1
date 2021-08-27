/** 
 * Disciplina de Introdução à Programação C/C++
 * Autor: Nathan Andrade dos Santos Lobo
 * DRE: 120082390
**/

#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 100

int main(void) {
  char palavra[MAX_LENGTH];
  int palindromo = 0;

  printf("Insira uma string de ate %d caracteres: ", MAX_LENGTH);
  fgets(palavra, MAX_LENGTH, stdin);

  int tam = strlen(palavra) - 1;

  for(int i = 0; i < tam; i++) {
    if(palavra[i] == palavra[tam - i - 1]) {
      palindromo++;
    }
  }

  if(palindromo == tam) {
    printf("Palindromo.\n");
  } else {
    printf("Nao e um palindromo.\n");
  }

  return 0;
}