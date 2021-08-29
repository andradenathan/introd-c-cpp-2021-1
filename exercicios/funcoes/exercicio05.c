/** 
 * Disciplina de Introdução à Programação C/C++
 * Autor: Nathan Andrade dos Santos Lobo
 * DRE: 120082390
**/

#include <stdio.h>
#define MAX_LENGTH 100

char concatenado[MAX_LENGTH];

int tamanho(char string[]) {
  int len = 0;

  for(int i = 0; i < MAX_LENGTH; i++) {
    if(string[i] == '\0') {
      break;
    }
    len++;
  }

  return len - 1;
}

void copia(char origem[], char destino[]) {
  for(int i = 0; i < tamanho(origem); i++) {
    destino[i] = origem[i];
  }
}

void concatena(char origem[], char destino[]) {
  for(int i = 0; i < tamanho(origem); i++) {
    concatenado[i] = origem[i];
  }

  for(int i = 0; i < tamanho(destino); i++) {
    concatenado[i + tamanho(origem)] = destino[i];
  }
}

void inverte(char origem[], char destino[]) {
  for(int i = 0; i < tamanho(destino); i++) {
    destino[i] = origem[tamanho(origem) - i];
  }
}

int compara(char string1[], char string2[]) {
  int tam_str1 = tamanho(string1);
  int tam_str2 = tamanho(string2);

  if(tam_str1 == tam_str2) {
    return 0;
  }
  
  else if(tam_str1 < tam_str2) {
    return -1;
  } else {
    return 1;
  }
  
}

int main(void) {
  char palavra[MAX_LENGTH];
  char nova_palavra[MAX_LENGTH];
  char palavra2[MAX_LENGTH];
  
  int tam;

  printf("Insira uma palavra: ");
  fgets(palavra, MAX_LENGTH, stdin);
  
  tam = tamanho(palavra);

  printf("Insira outra palavra: ");
  fgets(palavra2, MAX_LENGTH, stdin);

  copia(palavra, nova_palavra);
  printf("Quantidade de caracteres da palavra: %d\n", tam);
  printf("Original: %sCopia: %s\n", palavra, nova_palavra);

  concatena(palavra, palavra2);
  printf("Palavras concatenadas: %s\n", concatenado);
  
 
  int resultado_comparacao = compara(palavra, palavra2);
  printf("Comparacao das palavras: %d\n", resultado_comparacao);
  
  inverte(palavra, palavra2);
  printf("Palavra invertida: %s", palavra2);
  
  return 0;
}