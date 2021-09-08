/** 
 * Disciplina de Introdução à Programação C/C++
 * Autor: Nathan Andrade dos Santos Lobo
 * DRE: 120082390
**/

#include <stdio.h>

int main(void){
  char *a, *b;
  a = "abacate";
  b = "uva";

  if(a < b) {
    printf("%s vem antes de %s no dicionário\n", a, b);
  } else {
    printf("%s vem depois de %s no dicionário\n", a, b);
  }
}