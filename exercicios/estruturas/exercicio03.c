/** 
 * Disciplina de Introdução à Programação C/C++
 * Autor: Nathan Andrade dos Santos Lobo
 * DRE: 120082390
**/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LENGTH 100

typedef struct Aluno {
  char *nome;
  char *curso;
  int matricula;
} Aluno;

Aluno aluno;

Aluno criaAlunos(Aluno aluno) {
  aluno.nome = malloc(MAX_LENGTH * sizeof(char));
  aluno.curso = malloc(MAX_LENGTH * sizeof(char));
  printf("Insira um nome: ");
  scanf(" %s", aluno.nome);
  printf("Insira o curso do aluno %s: ", aluno.nome);
  scanf(" %s", aluno.curso);
  printf("Insira a matricula do aluno: ");
  scanf("%d", &aluno.matricula);
  
  aluno.nome = realloc(aluno.nome, strlen(aluno.nome));
  aluno.curso = realloc(aluno.curso, strlen(aluno.curso));

  return aluno;
}

void mostraAlunos(Aluno aluno) {
  printf("Aluno %s:\nCurso ->%s\nMatrícula -> %d\n", aluno.nome, aluno.curso, aluno.matricula);
}

void busca(Aluno aluno, char nome[]) { 
  for(int i = 0; i < 5; i++) {
    if(aluno.nome[i] == nome[i]) {
      mostraAlunos(aluno);
      break;
    }
  }
}

int main(void) {
  criaAlunos(aluno);
  busca(aluno, "Nat");
  free(aluno.nome);
  free(aluno.curso);
  return 0;
}