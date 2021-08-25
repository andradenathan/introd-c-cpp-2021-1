#include <stdio.h>

int main() {
  int numero;
  printf("Insira um numero para calcular a tabuada deste numero: ");
  scanf("%d", &numero);

  for(int i = 1; i <= 10; i++) {
    printf("%d x %d = %d\n", numero, i, numero * i);
  }

  return 0;
}