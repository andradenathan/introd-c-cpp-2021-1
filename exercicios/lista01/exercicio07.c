#include <stdio.h>

int main() {
  int idade, opiniao;
  int qtd_pessoas_regular = 0;
  int qtd_pessoas_bom = 0;
  int qtd_pessoas_otimo = 0;
  double media = 0.0;
  double porcentagem = 0.0;

  for(int i; i < 15; i++) {
    printf("Insira a sua idade: ");
    scanf("%d", &idade);

    printf("Insira a sua opiniao (1 - Regular/2 - Bom/3 - Otimo): ");
    scanf("%d", &opiniao);

    if(opiniao == 1) qtd_pessoas_regular++;
    if(opiniao == 2) qtd_pessoas_bom++;
    if(opiniao == 3) {
      qtd_pessoas_otimo++;
      media += idade;
    }
  }

  media /= qtd_pessoas_otimo;
  porcentagem = ((double) qtd_pessoas_bom / 15.0) * 100;

  printf("Media das idades das pessoas que responderam otimo: %.2lf\n", media);
  printf("Quantidade de pessoas que responderam regular: %d\n", qtd_pessoas_regular);
  printf("Porcentagem das pessoas que responderam bom entre todas: %.2lf%%\n", porcentagem);

  return 0;
}