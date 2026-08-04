#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    Aula 200: Alocação dinâmica de memória com a função realloc.
    -> Retorna um ponteiro para a nova região de memória.
    -> Se o ponteiro for nulo ela aloca memória.
    -> Se o novo tamanho for zero a memória é liberada.
    -> Se não houver memória suficiente retorna null.
*/

int main() {
    int tam, *vet;
    srand(time(NULL));
    printf("Digite a tamanho do vetor: ");
    scanf("%d", &tam);
    vet = (int *) malloc(tam * sizeof(int));
    if (vet) {
        for (int i = 0; i < tam; i++) {
            vet[i] = rand() % 10;
        }
        for (int i = 0; i < tam; i++) {
            printf("%d ", vet[i]);
        }
        printf("\nDigite o novo tamanho do vetor: ");
        scanf("%d", &tam);
        vet = (int *) realloc(vet, tam * sizeof(int));
        printf("Vetor realocado :\n");
       for (int i = 0; i < tam; i++) {
            printf("%d ", vet[i]);
        }
    }else {
        printf("Erro ao alocar o memoria!");
    }

    return 0;
}
