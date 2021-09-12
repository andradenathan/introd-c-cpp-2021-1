/** 
 * Disciplina de Introdução à Programação C/C++
 * Autor: Nathan Andrade dos Santos Lobo
 * DRE: 120082390
**/

#include <stdio.h>
#define MAX_LENGTH 100

typedef struct Aluno {
  char *nome[MAX_LENGTH];
  char *curso[MAX_LENGTH];
  int matricula;
} Aluno;

Aluno criaAlunos() {
  Aluno aluno;
  printf("Insira um nome: ");
  scanf("%s", &aluno.nome);
  printf("Insira o curso do aluno: ");
  scanf("%s", &aluno.curso);
  printf("Insira a matrícula do aluno: ");
  scanf("%d", &aluno.matricula);
  printf("-----\n");
  return aluno;
}

void mostraAlunos(Aluno aluno) {
  printf("Aluno %s:\nMatrícula -> %d\nCurso -> %s\n", aluno.nome, aluno.matricula, aluno.curso);
  printf("-----\n");
}

int main(void) {
  Aluno alunos[3];
  for(int i = 0; i < 3; i++) {
    alunos[i] = criaAlunos();
  }
  
  for(int i = 0; i < 3; i++) {
    mostraAlunos(alunos[i]);
  }

  return 0;
}