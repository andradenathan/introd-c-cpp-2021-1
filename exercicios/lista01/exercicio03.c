#include <stdio.h>

int main() {
  int idade;
  double total = 1.0;
  int qtd_pessoas_15 = 0;
  double faixa_etaria_15 = 0.0;
  int qtd_pessoas_30 = 0;
  double faixa_etaria_30 = 0.0;
  int qtd_pessoas_45 = 0;
  double faixa_etaria_45 = 0.0;
  int qtd_pessoas_60 = 0;
  double faixa_etaria_60 = 0.0;
  int qtd_pessoas_61 = 0;
  double faixa_etaria_61 = 0.0;

  printf("Insira a idade das 15 pessoas:\n");
  for(int i = 0; i < 15; i++) {
    scanf("%d", &idade);
    if(idade <= 15) {
      qtd_pessoas_15++;
      faixa_etaria_15 = (qtd_pessoas_15 * total) / 15.0;
    }

    if(16 <= idade && idade <= 30) {
      qtd_pessoas_30++;
      faixa_etaria_30 = (qtd_pessoas_30 * total) / 15.0;
    }

    if(31 <= idade && idade <= 45) {
      qtd_pessoas_45++;
      faixa_etaria_45 = (qtd_pessoas_45 * total) / 15.0;
      
    }

    if(46 <= idade && idade <= 60) {
      qtd_pessoas_60++;
      faixa_etaria_60 = (qtd_pessoas_60 * total) / 15.0;
    }

    else {
      qtd_pessoas_61++;
      faixa_etaria_61 = (qtd_pessoas_61 * total) / 15.0;
    }

  }
  
  printf("Na faixa etaria de 1 a 15 anos tem %d pessoas sao %.2lf do total\n", qtd_pessoas_15, faixa_etaria_15 * 100);
  printf("Na faixa etaria de 16 a 30 anos tem %d pessoas sao %.2lf do total\n", qtd_pessoas_30, faixa_etaria_30 * 100);
  printf("Na faixa etaria de 31 a 45 anos tem %d pessoas sao %.2lf do total\n", qtd_pessoas_45, faixa_etaria_45 * 100);
  printf("Na faixa etaria de 46 a 60 anos tem %d pessoas sao %.2lf do total\n", qtd_pessoas_60, faixa_etaria_60 * 100);
  printf("Na faixa etaria de 61 anos tem %d pessoas sao %.2lf do total\n", qtd_pessoas_61, faixa_etaria_61 * 100);
}