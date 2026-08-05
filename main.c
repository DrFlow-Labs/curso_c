#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
        Aula 202: Como alocar uma matriz dinâmica?

        vetor de vetores -> int* -> 10 27 32
                            int* -> 11 75 49
                            int* -> 43 82 10
                            int* -> 12 47 62
*/
int main() {
    int **mat,i,j;
    srand(time(NULL));
    mat = malloc(4 * sizeof(int*));
    for(i=0;i<4;i++) {
        mat[i] = malloc(4 * sizeof(int));
    }
    for(i=0;i<4;i++) {
        for(j=0;j<4;j++) {
            mat[i][j] = rand() % 100;
        }
    }
    for(i=0;i<4;i++) {
        for(j=0;j<4;j++) {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<4;i++) {
        free(mat[i]);
    }
    free(mat);
    return 0;
}
