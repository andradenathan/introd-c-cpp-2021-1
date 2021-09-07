/** 
 * Disciplina de Introdução à Programação C/C++
 * Autor: Nathan Andrade dos Santos Lobo
 * DRE: 120082390
**/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *strcopy(char *str) {
  char *copia = malloc(strlen(str) * sizeof(char));
  for(int i = 0; i < strlen(str); i++) {
    copia[i] = str[i];
  }

  printf("Original: %s\nCópia: %s\n", str, copia);
  free(copia);
}

int main(void) {
  char str[] = "Nathan";

  *strcopy(str);
}