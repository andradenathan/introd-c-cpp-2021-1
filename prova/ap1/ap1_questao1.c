/** 
 * Disciplina de Introdução à Programação C/C++
 * Autor: Nathan Andrade dos Santos Lobo
 * DRE: 120082390
**/

#include <stdio.h>

int main(void) {
  int opcao = -1;
  int qtd_voto_cand_1 = 0;
  int qtd_voto_cand_2 = 0;
  int qtd_voto_cand_3 = 0;
  int qtd_voto_cand_4 = 0;
  int nulo = 0;
  int branco = 0;
  int total = 0;
  double porcentagem_nulo;
  double porcentagem_branco;

  while(1) {
    printf("Escolha a sua opcao de candidato (1, 2, 3 ou 4): \n");
    printf("5 para opcao nulo\n");
    printf("6 para votar em branco\n");
    printf("Sua opcao: ");
    scanf("%d", &opcao);

    if(opcao == 1) {
      qtd_voto_cand_1++;
      printf("Voce votou no candidato 1!\n");
      printf("------\n");
    }

    else if(opcao == 2) {
      qtd_voto_cand_2++;
      printf("Voce votou no candidato 2!\n");
      printf("------\n");
    }

    else if(opcao == 3) {
      qtd_voto_cand_3++;
      printf("Voce votou no candidato 3!\n");
      printf("------\n");
    }

    else if(opcao == 4) {
      qtd_voto_cand_4++;
      printf("Voce votou no candidato 4!\n");
      printf("------\n");
    }

    else if(opcao == 5) {
      nulo++;
      printf("Voce votou nulo!\n");
      printf("------\n");
    }
  
    else if(opcao == 6) {
      branco++;
      printf("Voce votou branco!\n");
      printf("------\n");
    }

    if(opcao == 0) {
      break;
    }

    total++;
  }

  porcentagem_nulo = nulo / (double) total;
  porcentagem_branco = branco / (double) total;

  printf("Total de voto(s) candidato 1: %d\n", qtd_voto_cand_1);
  printf("Total de voto(s) candidato 2: %d\n", qtd_voto_cand_2);
  printf("Total de voto(s) candidato 3: %d\n", qtd_voto_cand_3);
  printf("Total de voto(s) candidato 4: %d\n", qtd_voto_cand_4);
  printf("Total de voto(s) nulo: %d\n", nulo);
  printf("Total de voto(s) branco: %d\n", branco);
  printf("Porcentagem de voto(s) nulo: %.2f%%\n", porcentagem_nulo * 100);
  printf("Porcentagem de voto(s) branco: %.2f%%\n", porcentagem_branco * 100);

  return 0;
}