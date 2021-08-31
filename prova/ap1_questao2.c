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
  for(int i = 0; i < tamanho(destino); i++) {
    concatenado[i] = destino[i];
  }

  for(int i = 0; i < tamanho(origem); i++) {
    concatenado[i + tamanho(destino)] = origem[i];
  }
}

void inverte(char origem[], char destino[]) {
  for(int i = 0; i < tamanho(destino); i++) {
    destino[i] = origem[tamanho(origem) - i - 1];
  }
}

int compara(char string1[], char string2[]) {
  int tam_str1 = tamanho(string1);
  int tam_str2 = tamanho(string2);

  if(tam_str1 == tam_str2) {
    return 0;
  }
  
  else if(tam_str1 < tam_str2 || tam_str1 > tam_str2) {
    return 1;
  } 
}

int main(void) {
  char palavra1[MAX_LENGTH];
  char palavra2[MAX_LENGTH];
  int tam_p1;
  int tam_p2;

  printf("Insira uma palavra: ");
  fgets(palavra1, MAX_LENGTH, stdin);

  printf("Insira outra palavra: ");
  fgets(palavra2, MAX_LENGTH, stdin);

  tam_p1 = tamanho(palavra1);
  tam_p2 = tamanho(palavra2);

  printf("Tamanho da Palavra 1: %d\n", tam_p1);
  printf("Tamanho da Palavra 2: %d\n", tam_p2);

  char palavra_copiada[MAX_LENGTH];
  copia(palavra1, palavra_copiada);
  printf("Palavra original: %sPalavra copiada: %s\n", palavra1, palavra_copiada);

  concatena(palavra1, palavra2);
  printf("Palavra concatenada: %s\n", concatenado);

  printf("Comparacao das palavras: %d\n", compara(palavra1, palavra2));

  inverte(palavra1, palavra2);
  printf("Palavra invertida: %s\n", palavra2);

  return 0;
}