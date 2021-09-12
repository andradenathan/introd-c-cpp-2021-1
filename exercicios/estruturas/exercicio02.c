/** 
 * Disciplina de Introdução à Programação C/C++
 * Autor: Nathan Andrade dos Santos Lobo
 * DRE: 120082390
**/

#include <stdio.h>
#define MAX_LENGTH 100

typedef struct { 
  char *nome[MAX_LENGTH];
  int idade;
} Pessoa;

Pessoa criaPessoas() {
  Pessoa p;
  printf("Insira um nome: ");
  scanf("%s", &p.nome);
  printf("Insira a idade: ");
  scanf("%d", &p.idade);
  printf("-----\n");
  return p;
}

int main(void) {
  Pessoa p[5];
  int maiores_idade = 0;
  for(int i = 0; i < 5; i++) {
    p[i] = criaPessoas();
    if(p[i].idade >= 18) maiores_idade++;
  }

  if(maiores_idade) {
    printf("MAIORES DE IDADE:\n");
    for(int i = 0; i < maiores_idade; i ++) {
      if(p[i].idade >= 18) {
        printf("Nome -> %s\n", p[i].nome);
        printf("Idade -> %d\n", p[i].idade);
        printf("-----\n");
      }
    }
  } else {
    printf("Ninguém maior de idade foi registrado.\n");
  }
}