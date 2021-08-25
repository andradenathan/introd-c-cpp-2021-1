#include <stdio.h>

int main() {
  int numero1, numero2;
  printf("Insira dois numeros: ");
  scanf("%d %d", &numero1, &numero2);

  int produto = numero1 * numero2;

  printf("Produto = %d\n", produto);
  return 0;
}