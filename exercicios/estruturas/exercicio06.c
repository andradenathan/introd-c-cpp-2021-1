/** 
 * Disciplina de Introdução à Programação C/C++
 * Autor: Nathan Andrade dos Santos Lobo
 * DRE: 120082390
**/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define CPF_LENGTH 11
#define MEMORY_INITIAL_SIZE 50

typedef struct Pessoa {
  char *nome;
  char *data_nascimento;
  char *cpf;
} Pessoa;

void criaPessoa(Pessoa *pessoa) {
  pessoa->nome = malloc(MEMORY_INITIAL_SIZE);
  pessoa->data_nascimento = malloc(MEMORY_INITIAL_SIZE); 
  pessoa->cpf = malloc(MEMORY_INITIAL_SIZE);

  printf("Insira o nome: ");
  scanf(" %s", pessoa->nome);

  pessoa->nome = realloc(pessoa->nome, strlen(pessoa->nome));

  printf("Insira a data de nascimento: ");
  scanf(" %s", pessoa->data_nascimento);

  pessoa->data_nascimento = realloc(pessoa->data_nascimento, strlen(pessoa->data_nascimento));

  printf("Insira um CPF: ");
  scanf(" %s", pessoa->cpf);
  while(strlen(pessoa->cpf) != CPF_LENGTH) {
    printf("Insira o CPF novamente: ");
    scanf(" %s", pessoa->cpf);
  }
  
  pessoa->cpf = realloc(pessoa->cpf, strlen(pessoa->cpf));
}

void imprimePessoa(Pessoa *pessoa) {
  printf("Pessoa %s:\nCPF -> %s\nData de Nascimento: %s\n", pessoa->nome, pessoa->cpf, pessoa->data_nascimento);
}

int main(void) {
  Pessoa *p = malloc(sizeof(Pessoa));
  criaPessoa(p);
  imprimePessoa(p);
  free(p);
  return 0;
}