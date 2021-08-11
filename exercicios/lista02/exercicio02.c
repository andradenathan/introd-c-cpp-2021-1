#include <stdio.h>

int main() {
  int numero1, numero2, numero3;

  printf("Insira tres numeros: \n");
  scanf("%d %d %d", &numero1, &numero2, &numero3);

  if(numero1 < numero2 && numero1 < numero3) {
    printf("O menor numero e: %d\n", numero1);
  }

  if(numero2 < numero1 && numero2 < numero3) {
    printf("O menor numero e: %d\n", numero2);
  }

  if(numero3 < numero1 && numero3 < numero2) {
    printf("O menor numero e: %d\n", numero3);
  }

  return 0;
}