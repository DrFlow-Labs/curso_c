#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Como percorrer uma matriz dinâmica com aritmética de ponteiros? Aula 204
int main() {
    int **mat,i,j;
    srand(time(NULL));
    mat = malloc(4 * sizeof(int*));
    for(i=0;i<4;i++) {
        mat[i] = malloc(4 * sizeof(int));
    }
    for(i=0;i<4;i++) {
        for(j=0;j<4;j++) {
            //mat[i][j] = rand() % 100;
            *(*(mat + i) + j) = rand() % 100;
        }
    }
    for(i=0;i<4;i++) {
        for(j=0;j<4;j++) {
            //printf("%d ",mat[i][j]);
            printf("%d",*(*(mat + i) + j));
        }
        printf("\n");
    }
    for(i=0;i<4;i++) {
        //free(mat[i]);
        free(*(mat + i));
    }
    free(mat);
    return 0;
}
