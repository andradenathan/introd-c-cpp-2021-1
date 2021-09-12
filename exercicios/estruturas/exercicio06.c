/** 
 * Disciplina de Introdução à Programação C/C++
 * Autor: Nathan Andrade dos Santos Lobo
 * DRE: 120082390
**/

#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

typedef struct Pessoa {
  char *nome;
  char *data_nascimento;
  char *cpf;
} Pessoa;

Pessoa criaPessoa(Pessoa *pessoa) {
  printf("Insira o nome: ");
  scanf(" %s", pessoa->nome);

  printf("Insira a data de nascimento: ");
  scanf(" %s", pessoa->data_nascimento);

  printf("Insira um CPF: ");
  scanf(" %s", pessoa->cpf);
  while(strlen(pessoa->cpf) != 11) {
    printf("Insira o CPF novamente: ");
    scanf(" %s", pessoa->cpf);
  }
  return *pessoa;
}

void imprimePessoa(Pessoa *pessoa) {
  printf("Pessoa %s:\nCPF -> %s\nData de Nascimento: %s\n", pessoa->nome, pessoa->cpf, pessoa->data_nascimento);
}

int main(void) {
  Pessoa *p;
  criaPessoa(&p);
  imprimePessoa(&p);
  return 0;
}