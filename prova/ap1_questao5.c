/** 
 * Disciplina de Introdução à Programação C/C++
 * Autor: Nathan Andrade dos Santos Lobo
 * DRE: 120082390
**/

#include <stdio.h>
#define DIM 10

// 5a. Calcula e mostra a soma dos elementos do vetor recursivamente
float soma_elementos(float vetor[], int posicao) {
  if(posicao == 0) {
    return vetor[0];
  }
  
  return vetor[posicao] + soma_elementos(vetor, posicao - 1);
}

// 5b. Verifica se os elementos são ímpares para pegar os seus índices na main
float index_elementos_impares(float vetor[], int posicao) {
  if((int) vetor[posicao] % 2 == 1) return 1;
  else return 0;  
}

// 5c. Calcula o produto dos elementos pares de um dado vetor
float produto_par_recursivo(float vetor[], int posicao) {
  if(posicao == 0) return vetor[0];

  if((int) vetor[posicao] % 2 == 0) 
    return vetor[posicao] * produto_par_recursivo(vetor, posicao - 1);
  
  return produto_par_recursivo(vetor, posicao - 1);
}

//5d. Calcula a soma do triplo dos elementos de índice ímpar
float soma_triplo_indices_impar(float vetor[], int posicao) {
  int elem = 0;
  if(index_elementos_impares(vetor, posicao)) elem += vetor[posicao] * 3;
  return elem;
}

//5e. Divide todos os elementos por 4 e mostra seus novos valores
float divide_elementos(float vetor[], int posicao) {
  vetor[posicao] /= 4.0;
  return vetor[posicao];
}

//5f. Calcula o maior elemento do vetor
float maior_elem(float vetor[], int posicao, float maior) {
  if(vetor[posicao] > maior) {
    maior = vetor[posicao];
  }

  return maior;
}

//5g. Calcula o menor elemento do vetor
float menor_elem(float vetor[], int posicao, float menor) {
  if(vetor[posicao] < menor) {
    menor = vetor[posicao];
  }

  return menor;
}

//5h. Calcula a media dos elementos
float media_elem(float soma, int tamanho) {
  return soma / (float) tamanho;
}

//5i. Calcula os elementos que são menores do que a media
void elem_menor_media(float vetor[], int tamanho, float soma) {
  float media = media_elem(soma, tamanho);
  for(int i = 0; i < tamanho; i++) {
    if(media > vetor[i]) {
      printf("O Elemento %.2f e menor que a media %.2f\n", vetor[i], media);
    }
  }
}

//5j. Calcula o índice dos elementos que são maior do que a média
void index_maior_media(float vetor[], int tamanho, float soma) {
  float media = media_elem(soma, tamanho);
  for(int i = 0; i < tamanho; i++) {
    if(vetor[i] > media) {
      printf("O indice do elemento que e maior que a media: %d\n", i);
    }
  }
}

//5k. Ordena o vetor na estrutura de Bubble Sort
void ordena_vetor(float vetor[], int tamanho) {
  float copia;
  for(int i = 0; i < tamanho - 1; i++) {
    for(int j = 0; j < tamanho - i - 1; j++) {
      if(vetor[j] > vetor[j+1]) {
        copia = vetor[j];
        vetor[j] = vetor[j+1];
        vetor[j+1] = copia;
      }
    }
  }
}

int main(void) {
  int index = 0;
  int vetor_index[DIM];
  float vetor[DIM] = {2.0, 3.0, 4.0, 17.0, 19.0, 38.0, 26.0, 25.0, 10.0, 19.0};
  float somatorio = soma_elementos(vetor, DIM - 1);

  printf("Soma dos elementos do vetor: %.2f\n", somatorio);

  for(int i = 0; i < DIM; i++) {
    if(index_elementos_impares(vetor, i)) {
      vetor_index[index] = i;
      index++;
    }
  }

  for(int i = 0; i < index; i++) {
    printf("Indice de elementos impares do vetor principal: [%d]\n", vetor_index[i]);
  }

  int resultado = produto_par_recursivo(vetor, DIM - 1);
  printf("Produto dos elementos pares do Vetor: %d\n", resultado);

  int soma = 0;

  for(int i = 0; i < DIM; i++) {
    soma += soma_triplo_indices_impar(vetor, i);
  }

  printf("A soma do triplo do valor dos elementos com indice impar: %d\n", soma);

  float media = media_elem(somatorio, DIM);
  printf("A media dos elemento do vetor e: %.2f\n", media);
  
  float maior = 0;
  for(int i = 0; i < DIM; i++) {
    maior = maior_elem(vetor, i, maior);
  }
  printf("O maior elemento do vetor e: %.2f\n", maior);

  float menor = 1000.0;
  for(int i = 0; i < DIM; i++) {
    menor = menor_elem(vetor, i, menor);
  }
  printf("O menor elemento do vetor e: %.2f\n", menor);

  elem_menor_media(vetor, DIM, somatorio);
  index_maior_media(vetor, DIM, somatorio);

  ordena_vetor(vetor, DIM);
  for(int i = 0; i < DIM; i++) {
    printf("Vetor ordenado na pos[%d]: %.2f\n", i, vetor[i]);
  }

  float resultado_divisao;
  for(int i = 0; i < DIM; i++) {
    resultado_divisao = divide_elementos(vetor, i);
    printf("Vetor[%d]/4: %.2f\n", i, resultado_divisao);
  }

  return 0;
}