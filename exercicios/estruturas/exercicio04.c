/** 
 * Disciplina de Introdução à Programação C/C++
 * Autor: Nathan Andrade dos Santos Lobo
 * DRE: 120082390
**/

#include <stdio.h>

typedef struct Pessoa {
  float qtd_filho;
  float salario;
} Pessoa;

Pessoa criar(Pessoa pessoa) {
  printf("Insira a quantidade de filhos: ");
  scanf("%f", &pessoa.qtd_filho);

  printf("Insira o seu salário: R$");
  scanf("%f", &pessoa.salario);

  printf("-----\n");
  return pessoa;
}

int main(void) {
  Pessoa p[3];
  float media_salario = 0.0;
  float media_filhos = 0.0;
  for(int i = 0; i < 3; i++) {
    p[i] = criar(p[i]);
    media_filhos += p[i].qtd_filho / 3.0;
    media_salario += p[i].salario / 3.0;
  }

  printf("Média dos salários na cidade: R$%.2f\n", media_salario);
  printf("Média de filhos na cidade: %.2f\n", media_filhos);

  return 0;
}