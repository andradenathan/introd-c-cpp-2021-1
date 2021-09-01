#include <stdio.h>
#include <stdlib.h>

int main() {
  int *p, *q, numero1, numero2;

  printf("Insira um numero: ");
  scanf("%d %d", &numero1, &numero2);

  p = &numero1;
  q = &numero2;

  printf("A soma de p + q: %d\n", *p + *q);

  return 0;
}