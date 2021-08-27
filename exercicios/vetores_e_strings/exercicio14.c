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

  printf("Insira uma string de ate %d caracteres: ", MAX_LENGTH);
  fgets(palavra, MAX_LENGTH, stdin);

  return 0;
}