#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Como alocar um vetor dinâmico na linguagem C?  | Aula 199

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
    }else {
        printf("Erro ao alocar o memoria!");
    }

    return 0;
}
