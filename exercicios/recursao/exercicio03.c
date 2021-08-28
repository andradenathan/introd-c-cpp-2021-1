/** 
 * Disciplina de Introdução à Programação C/C++
 * Autor: Nathan Andrade dos Santos Lobo
 * DRE: 120082390
**/

#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 50

int palindromo_recursivo(char string[], int i, int tam, int aux) {
  if(string[i] == string[tam - i - 1]) {
    aux++;
  }
  
  if(i == tam - 1) {
    if(aux == tam) return 1;
    else return 0;
  }
  
  return palindromo_recursivo(string, i + 1, tam, aux);
}


int main(void) {
  char palavra[MAX_LENGTH], palavra_trim[MAX_LENGTH];
  int resultado, tam, tam_trim;
  printf("Insira uma string de ate %d caracteres: ", MAX_LENGTH);
  fgets(palavra, MAX_LENGTH, stdin);

  tam = strlen(palavra) - 1;

  int j = 0;
  
  /*
    O for serve como trim para executar a parte de remover pontuações, 
    acentuações e espaços.
  */

  for(int i = 0; i < tam; i++) {
    if(!(palavra[i] >= 65 && palavra[i] <= 90) && !(palavra[i] >= 97 && palavra[i] <= 122)) {
      continue;
    } 
    
    palavra_trim[j] = palavra[i];
    j++;
  }

  tam_trim = j;

  resultado = palindromo_recursivo(palavra_trim, 0, tam_trim, 0);

  printf("Resultado: %d\n", resultado);

  return 0;
}