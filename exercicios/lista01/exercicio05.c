#include <stdio.h>

int main() {
  int voto;
  int qtd_votos_candidato01 = 0;
  int qtd_votos_candidato02 = 0;
  int qtd_votos_candidato03 = 0;
  int qtd_votos_candidato04 = 0;
  int qtd_votos_nulos = 0;
  int qtd_votos_brancos = 0;

  double porcentagem_candidato01 = 0.0;
  double porcentagem_candidato02 = 0.0;
  double porcentagem_candidato03 = 0.0;
  double porcentagem_candidato04 = 0.0; 
  double porcentagem_nulos = 0.0;
  double porcentagem_brancos = 0.0;
  char continuar;

  while(1) {
    printf("Selecione o candidato para votar (1/2/3/4) e (5/6 para nulo ou branco): ");
    scanf("%d", &voto);
    
    if(voto == 1) {
      qtd_votos_candidato01++;
      porcentagem_candidato01 = qtd_votos_candidato01 / 6.0;
    }

    if(voto == 2) {
      qtd_votos_candidato02++;
      porcentagem_candidato02 = qtd_votos_candidato02 / 6.0;
    }

    if(voto == 3) {
      qtd_votos_candidato03++;
      porcentagem_candidato03 = qtd_votos_candidato03 / 6.0;
    }

    if(voto == 4) {
      qtd_votos_candidato04++;
      porcentagem_candidato04 = qtd_votos_candidato04 / 6.0;
    }

    if(voto == 5) {
      qtd_votos_nulos++;
      porcentagem_nulos = qtd_votos_nulos / 6.0;
    }

    if(voto == 6) {
      qtd_votos_brancos++;
      porcentagem_brancos = qtd_votos_brancos / 6.0;
    }

    printf("Deseja continuar votando? [S/N]: ");
    scanf(" %c", &continuar);

    if(continuar == 'N' || continuar == 'n') break;
  }

  printf("Candidato 1: %d voto(s)\n", qtd_votos_candidato01);
  printf("Candidato 2: %d voto(s)\n", qtd_votos_candidato02);
  printf("Candidato 3: %d voto(s)\n", qtd_votos_candidato03);
  printf("Candidato 4: %d voto(s)\n", qtd_votos_candidato04);
  printf("%d voto(s) nulos\n", qtd_votos_nulos);
  printf("%d voto(s) brancos\n", qtd_votos_brancos);
  printf("%.2lf %% votaram no candidato 1\n", porcentagem_candidato01 * 100);
  printf("%.2lf %% votaram no candidato 2\n", porcentagem_candidato02 * 100);
  printf("%.2lf %% votaram no candidato 3\n", porcentagem_candidato03 * 100);
  printf("%.2lf %% votaram no candidato 4\n", porcentagem_candidato04 * 100);
  printf("%.2lf %% votaram nulo\n", porcentagem_nulos * 100);
  printf("%.2lf %% votaram branco\n", porcentagem_brancos * 100);

  return 0;
}