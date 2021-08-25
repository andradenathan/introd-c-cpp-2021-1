#include <stdio.h>

int main() {
  int idade;
  int qtd_pessoas = 0;
  double altura;
  double media = 0.0;

  while(1) {
    printf("Insira uma idade: ");
    scanf("%d", &idade);

    if(idade == 0) break;
    
    printf("Insira uma altura: ");
    scanf("%lf", &altura);

    if(idade >= 50) {
      qtd_pessoas++;
      media += altura; 
    }
  }
  
  media /= qtd_pessoas;
  printf("A media da altura das pessoas com mais de 50 anos e: %.2lf\n", media);
  return 0;
}