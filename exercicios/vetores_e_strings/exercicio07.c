/** 
 * Disciplina de Introdução à Programação C/C++
 * Autor: Nathan Andrade dos Santos Lobo
 * DRE: 120082390
**/

#include <stdio.h>

#define DIM_VIN 10
#define DIM_VAI 30

int main(void) {
  int VIN[DIM_VIN] = {1, 3, 5, 6, 7, 8, 9, 10, 12, 13};
  int VAI[DIM_VAI];
  int inicio = 0, final = 3;
  
  for(int i = 0; i < DIM_VIN; i++) {
    for(int j = inicio; j < final; j++) {
      VAI[j] = VIN[i];
    } 

    inicio += 3;
    final += 3;
  }

  for(int k = 0; k < DIM_VAI; k++) {
    printf("VAI[%d]: %d\n", k, VAI[k]);
  }

  return 0;
}