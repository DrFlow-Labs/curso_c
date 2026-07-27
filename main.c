
#include <stdio.h>
#include <stdlib.h>

void imprimir_vetor(int *v, int tam) {
  int i;
  for (i = 0; i < tam; i++) {
    printf("%d ", *(v + i));
  }
}

int main() {
  int i, vet[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  printf("%p\t%p\n", vet, &vet[0]);

  for (i = 0; i < 10; i++) {
    printf("%d", *(vet + i));
  }

  printf("\n\n");
  imprimir_vetor(vet, 10);

  return 0;
}
