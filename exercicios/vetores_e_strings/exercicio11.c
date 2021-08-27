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
  char palavra_tras_pra_frente[MAX_LENGTH];
  int contador, inicio, fim = 0;

  printf("Insira uma string de ate %d caracteres: ", MAX_LENGTH);
  fgets(palavra, MAX_LENGTH, stdin);
  
  printf("A nova palavra e: %s\n", palavra);

  return 0;
}