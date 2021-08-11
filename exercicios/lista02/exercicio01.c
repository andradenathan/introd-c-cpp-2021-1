#include <stdio.h>

int main() {
  int numero1, numero2, numero3;
  printf("Insira tres numeros: ");
  scanf("%d %d %d", &numero1, &numero2, &numero3);

  if(numero1 >= numero2 && numero1 >= numero3) {
    if(numero2 > numero3) {
      printf("Lista dos numeros em ord. cresc.: %d, %d, %d\n", numero1, numero2, numero3);
    }

    else {
      printf("Lista dos numeros em ord. cresc.: %d, %d, %d\n", numero1, numero3, numero2);
    }
  }

  else if(numero2 >= numero1 && numero2 >= numero3) {
    if(numero1 > numero3) {
      printf("Lista dos numeros em ord. cresc.: %d, %d, %d\n", numero2, numero1, numero3);
    }

    else {
      printf("Lista dos numeros em ord. cresc.: %d, %d, %d\n", numero2, numero3, numero1);
    }
  }

  else if(numero3 >= numero1 && numero3 >= numero1) {
    if(numero1 > numero2) {
      printf("Lista dos numeros em ord. cresc.: %d, %d, %d\n", numero3, numero1, numero2);
    }

    else {
      printf("Lista dos numeros numeros em ord.cresc.: %d, %d, %d\n", numero3, numero2, numero1);
    }
  }

  return 0;
}