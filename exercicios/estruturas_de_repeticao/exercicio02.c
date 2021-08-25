#include <stdio.h>

int main() {
  int idade;
  int maiores_idade = 0;

  printf("Insira a idade de 10 pessoas:\n");

  for(int i = 0; i < 10; i++) {
    scanf("%d", &idade);
    if(idade > 18) {
      maiores_idade++;
    }
  }

  printf("A quantidade de pessoas maiores de idade são: %d\n", maiores_idade);

  return 0;
}