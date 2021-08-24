#include <stdio.h>

int main() {
  double numero1, numero2, resultado;
  char operador;

  printf("Digite o primeiro número: ");
  scanf("%lf", &numero1);

  printf("Digite um operador: ");
  scanf(" %c", &operador);

  printf("Digite o segundo número: ");
  scanf("%lf", &numero2);

  switch(operador) {
    case '+':
      resultado = numero1 + numero2;
      printf("O resultado da soma entre %.2lf e %.2lf é: %.2lf\n", numero1, numero2, resultado);
      break;

    case '-':
      resultado = numero1 - numero2;
      printf("O resultado da subtração entre %.2lf e %.2lf é: %.2lf\n", numero1, numero2, resultado);
      break;

    case '*':
      resultado = numero1 * numero2;
      printf("O resultado da subtração entre %.2lf e %.2lf é: %.2lf\n", numero1, numero2, resultado);
      break;

    case '/':
      resultado = numero1 / numero2;
      printf("O resultado da divisão entre %.2lf e %.2lf é: %.2lf\n", numero1, numero2, resultado);
      break;

    default:
      printf("Operador inserido incorretamente. Operadores disponiveis: +, -, *, /");
      break;
  }
  
  return 0;
}