/** 
 * Disciplina de Introdução à Programação C/C++
 * Autor: Nathan Andrade dos Santos Lobo
 * DRE: 120082390
**/

#include <stdio.h>
#include <stdlib.h>
#define MAX_LENGTH 100

char *copia;

int strtam(char string[]) {
  int tam = 0;
  for(int i = 0; i < MAX_LENGTH; i++) {
    if(string[i] == '\0') break;
    tam++;
  }
  return tam;
}

char *strcopy(char *str) {
  char *copia = malloc(strtam(str) * sizeof(char));
  for(int i = 0; i < strtam(str); i++) {
    copia[i] = str[i];
  }

  printf("Original: %s\nCópia: %s\n", str, copia);
  return copia;
}

int main(void) {
  char str[] = "Nathan";
  *strcopy(str);
  free(copia);
  return 0;
}