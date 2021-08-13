#include <stdio.h>

int main() {
  int numero;
  int soma;
  int maior = 0;
  int menor = 0;
  
  while(numero != 0) {
    printf("Insira um numero (0 p/parar): ");
    scanf("%d", &numero);

    if(numero < 0) {
      printf("O numero informado e negativo! Envie novamente: ");
      scanf("%d", &numero);
    } 

    if(numero > maior) {
      maior = numero;
    }

    if(numero < menor) {
      menor = numero;
    }
  }

  printf("Maior e menor numero: %d e %d\n", maior, menor);

  return 0;
}