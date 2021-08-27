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
  int contador, inicio = 0, fim = 0, tam = 0;

  printf("Insira uma palavra de ate %d caracteres: ", MAX_LENGTH);
  fgets(palavra, MAX_LENGTH, stdin);

  for(int i = 0; i < MAX_LENGTH; i++) {
    if(palavra[i] == '\0') break;
    tam++;
  }

  for(int j = tam - 1; j >= 0; j--) {
    palavra_tras_pra_frente[inicio] = palavra[j];
    inicio++;
  }
  printf("A nova palavra e: %s\n", palavra_tras_pra_frente);

  return 0;
}