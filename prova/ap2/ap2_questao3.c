/** 
 * Disciplina de Introdução à Programação C/C++
 * Autor: Nathan Andrade dos Santos Lobo
 * DRE: 120082390
**/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define CPF_LENGTH 11
#define MEMORY_INITIAL_SIZE 100

typedef struct Pessoa {
  char *nome;
  char *data_nascimento;
  char *cpf;
} Pessoa;

int validaCPF(char *cpf) {
  int contador = 0;
  for(int i = 0; i < strlen(cpf); i++) {
    if(cpf[i] < 48 || cpf[i] > 57) {
      continue;
    }
    contador++;
  }

  if(contador == CPF_LENGTH)
    return 1;
  
  return 0;
}

void criaPessoa(Pessoa *pessoa) {
  pessoa->nome = malloc(MEMORY_INITIAL_SIZE);
  pessoa->data_nascimento = malloc(MEMORY_INITIAL_SIZE);
  pessoa->cpf = malloc(MEMORY_INITIAL_SIZE);

  printf("Insira o nome: ");
  scanf("%[^\n]", pessoa->nome);

  pessoa->nome = realloc(pessoa->nome, strlen(pessoa->nome));
  
  printf("Insira a data de nascimento: ");
  scanf(" %s", pessoa->data_nascimento);
  pessoa->data_nascimento = realloc(
    pessoa->data_nascimento, strlen(pessoa->data_nascimento
  ));

  printf("Insira um CPF: ");
  scanf(" %s", pessoa->cpf);
  while(!(validaCPF(pessoa->cpf))) {
    printf("CPF digitado incorretamente, o CPF precisa ter 11 digitos!\n");
    printf("Por favor, insira o CPF novamente: ");
    scanf(" %s", pessoa->cpf);
  }

  pessoa->cpf = realloc(pessoa->cpf, strlen(pessoa->cpf));
}

void imprimePessoa(Pessoa *pessoa) {
  printf("Pessoa %s:\nCPF -> %s\nData de nascimento -> %s\n", pessoa->nome, pessoa->cpf, pessoa->data_nascimento);
}

int main(void) {
  Pessoa *p = malloc(sizeof(Pessoa));
  criaPessoa(p);
  imprimePessoa(p);
  free(p);
  return 0;
}