
#include <stdio.h>
#include <stdlib.h>

void maior_menor(int vetor[], int tam, int *menor, int *maior) {
  *maior = vetor[0];
  *menor = vetor[0];
  for (int i = 0; i < tam; i++) {
    if (vetor[i] > *maior) {
      *maior = vetor[i];
    }
    if (vetor[i] < *menor) {
      *menor = vetor[i];
    }
  }
  printf("maior numero: %d\n",*maior);
  printf("menor numero: %d\n",*menor);
}

int main() {
  int menor = 0, maior = 0, vetor[] = {110, 265, 30, 410, 544, 684, 74, 880, 95};
  maior_menor(vetor, 9, &menor, &maior);
  printf("Menor valor: %d\n", menor);
  printf("Maior valor: %d\n", maior);
  return 0;
}
