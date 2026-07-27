
#include <stdio.h>
#include <stdlib.h>

int main() {
  int *valor1, valor2 = 50;
  char *letra1, letra2 = 'g';

  valor1 = &valor2;
  letra1 = &letra2;

  printf("Valor da variavel valor2 : %d\n", valor2);
  printf("Enderecao da varaiavel valor2: %p\n", &valor2);
  printf("Conteudo da variavel valor1: %p\n", valor1);
  printf("Conteudo apontado pelo variavel valor1: %d\n", *valor1);

  return 0;
}
