/** 
 * Disciplina de Introdução à Programação C/C++
 * Autor: Nathan Andrade dos Santos Lobo
 * DRE: 120082390
**/

#include <stdio.h>

float peso(float alt, char sexo) {
  float formula;

  if(sexo == 'M' || sexo == 'M') {
    formula = (72.7 * alt) - 58.0; 
  }

  else if(sexo == 'F' || sexo == 'f') {
    formula = (62.1 * alt) - 44.7;
  }

  return formula;
}

int main(void) {
  float alt = 1.70;
  char sexo = 'M';

  printf("Peso: %.2f\n", peso(alt, sexo));

  return 0;
}