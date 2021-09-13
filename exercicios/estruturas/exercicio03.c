/** 
 * Disciplina de Introdução à Programação C/C++
 * Autor: Nathan Andrade dos Santos Lobo
 * DRE: 120082390
**/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LENGTH 100
#define NUM_ALUNOS 5

typedef struct Aluno {
  char *nome;
  char *curso;
  int matricula;
} Aluno;

Aluno criaAlunos(Aluno aluno) {
  aluno.nome = malloc(MAX_LENGTH);
  aluno.curso = malloc(MAX_LENGTH);
  
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
  printf("Aluno %s:\nCurso -> %s\nMatrícula -> %d\n", aluno.nome, aluno.curso, aluno.matricula);
  printf("-----\n");
}

int match(Aluno aluno, char *nome) {
  return strstr(aluno.nome, nome) != NULL;
}

void busca(Aluno aluno[], char *nome) {
  for(int i = 0; i < NUM_ALUNOS; i++) {
    if(match(aluno[i], nome)) mostraAlunos(aluno[i]);
  }
}

int main(void) {
  Aluno aluno[NUM_ALUNOS];
  char nome[] = "Nat";
  for(int i = 0; i < NUM_ALUNOS; i++) {
    aluno[i] = criaAlunos(aluno[i]);
    match(aluno[i], nome);
  }

  busca(aluno, nome);

  return 0;
}