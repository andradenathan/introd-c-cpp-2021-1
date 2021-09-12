/** 
 * Disciplina de Introdução à Programação C/C++
 * Autor: Nathan Andrade dos Santos Lobo
 * DRE: 120082390
**/

#include <stdio.h>

typedef struct Funcionario {
  float salario;
  float vendas;
} Funcionario;

Funcionario criaFuncionario(Funcionario funcionario) {
  printf("Insira o salário: ");
  scanf("%f", &funcionario.salario);

  printf("Insira o valor total das vendas: ");
  scanf("%f", &funcionario.vendas);

  return funcionario;
}

void calculaComissao(Funcionario funcionario) {
  float comissao = 0.0;
  float salarioFinal = 0.0;

  comissao = funcionario.vendas * 0.06;
  salarioFinal = funcionario.salario + comissao;

  printf("Salário: R$%.2f\nTotal de vendas: R$%.2f\nComissão: R$%.2f\nSalário final: R$%.2f\n", 
  funcionario.salario, funcionario.vendas, comissao, salarioFinal);
}

int main(void) {
  Funcionario funcionario = criaFuncionario(funcionario);
  calculaComissao(funcionario);
  return 0;
}