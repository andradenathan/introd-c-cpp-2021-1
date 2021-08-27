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
  char ch;
  int qtd_vogais = 0;
  int tam = 0;

  printf("Insira uma palavra de ate %d caracteres: ", MAX_LENGTH);
  fgets(palavra, MAX_LENGTH, stdin);

  for(int i = 0; i < MAX_LENGTH; i++) {
    if(palavra[i] == '\0') {
      break;
    }
    tam++;
  }

  printf("Insira uma vogal ou uma consoante: ");
  scanf(" %c", &ch);
  
  for(int j = 0; j < tam - 1; j++) {
    if(palavra[j] == 'a' || palavra[j] == 'A') {
      qtd_vogais++;
      palavra[j] = ch;
    }

    else if(palavra[j] == 'e' || palavra[j] == 'E') {
      qtd_vogais++;
      palavra[j] = ch;
    }

    else if(palavra[j] == 'i' || palavra[j] == 'I') {
      qtd_vogais++;
      palavra[j] = ch;
    }

    else if(palavra[j] == 'o' || palavra[j] == 'O') {
      qtd_vogais++;
      palavra[j] = ch;
    }

    else if(palavra[j] == 'u' || palavra[j] == 'U') {
      qtd_vogais++;
      palavra[j] = ch;
    }
  }

  printf("Quantidade de vogais: %d\nPalavra alterada: %s", qtd_vogais, palavra);
  
  return 0;
}