#include <stdio.h>
#include <string.h>



void cabecalho() {
  printf("********\n");
  printf(" Jogo de Forca \n");
  printf("********\n");
}

void chuta(char chutes[26], int tentativas) {
    char chute;
    scanf(" %c", &chute);
    
    chutes[tentativas] = chute;
}

int main() {
  char palavra_secreta[20];

  sprintf(palavra_secreta, "BISCOITO");

  int acertou = 0;
  int enforcou = 0;

  char chutes[26];
  int tentativas = 0;

  cabecalho();
  
  do {
    for(int i = 0; i < strlen(palavra_secreta); i++) {

      int acertou = 0;
      
      for(int j = 0; j < tentativas; j++) {
        if(chutes[j] == palavra_secreta[i]) {
          acertou = 1;
          break;
        }
      }

      if(acertou) {
        printf("%c ", palavra_secreta[i]);

      } else {
         printf("_ ");
      }
    }
  
    printf("\n");

    chuta(chutes, tentativas);
    tentativas++;
    
  } while(!acertou && !enforcou);
}