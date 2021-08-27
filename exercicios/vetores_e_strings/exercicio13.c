/** 
 * Disciplina de Introdução à Programação C/C++
 * Autor: Nathan Andrade dos Santos Lobo
 * DRE: 120082390
**/

#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 100

int main(void) {
  char palavra1[MAX_LENGTH];
  char palavra2[MAX_LENGTH];

  int tam1, tam2, palavra_maior_1 = 0, palavra_maior_2 = 0, iguais = 0;
  
  printf("Insira a primeira palavra de ate %d caracteres: ", MAX_LENGTH);
  fgets(palavra1, MAX_LENGTH, stdin);
  tam1 = strlen(palavra1) - 1;

  printf("Insira a segunda palavra de ate %d caracteres: ", MAX_LENGTH);
  fgets(palavra2, MAX_LENGTH, stdin);
  tam2 = strlen(palavra2) - 1;

  if(strcmp(palavra1, palavra2) < 0) {
    palavra_maior_2 = 1;
  } 
  else if(strcmp(palavra1, palavra2) == 0) {
    iguais = 1;
  } 
  else if(strcmp(palavra1, palavra2) > 0) {
    palavra_maior_1 = 1;
  }

  if(palavra_maior_1 == 1) {
    printf("A palavra %s e maior que a palavra %s", palavra1, palavra2);
  }

  else if(palavra_maior_2 == 1) {
    printf("A palavra %s e maior que a palavra %s", palavra2, palavra1);
  }

  else if(iguais == 1) {
    printf("A palavra %s e a palavra %s sao iguais.\n", palavra1, palavra2);
  }

  return 0;
}