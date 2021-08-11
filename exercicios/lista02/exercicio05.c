#include <stdio.h>

int main() {
  int numero1, numero2, numero3, numero4;
  printf("Insira quatro numeros: \n");
  scanf("%d %d %d %d", &numero1, &numero2, &numero3, &numero4);

  int diferenca = (numero1 * numero2) - (numero3 * numero4);
  
  printf("Diferenca = %d\n", diferenca);
  return 0;
}