#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 20
#define Class struct

Class Pessoa {
  char nome[MAX_LENGTH];
  float peso;
  float altura;
  int idade; 
};

int main(void) {
  Class Pessoa p1;
  
  printf("Insira um nome: ");
  scanf("%s", &p1.nome);

  p1.idade = 20;
  p1.altura = 1.69;
  p1.peso = 68.7;


  printf("Nome: %s\nIdade: %d\nAltura: %.2f\nPeso: %.2f\n", p1.nome, p1.idade, p1.altura, p1.peso);

  return 0;
}