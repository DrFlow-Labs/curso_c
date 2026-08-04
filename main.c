#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// como liberar memória alocada dinamicamente com a função free()? Aula 201

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
        free(vet);
    }else {
        printf("Erro ao alocar o memoria!");
    }

    return 0;
}
