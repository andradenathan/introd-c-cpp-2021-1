#include <stdio.h>

int main() {
  double A, B;
  printf("Insira as duas notas de um aluno: \n");
  scanf("%lf %lf", &A, &B);

  double media = (A * 3.5 + B * 7.5) / 11;

  printf("PROD = %.2lf\n", media);
}