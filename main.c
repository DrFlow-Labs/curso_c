#include <stdio.h>
#include <stdlib.h>

// Alocação dinâmica de memória com a função CALLOC | Aula 198

int main() {
    int *x;
    x = calloc(1,sizeof(int));
    if (x) {
        printf("malloc ok\n");
        printf("X: %d\n",*x);
        *x = 1;
        printf("X: %d\n",*x);
    }else {
        printf("malloc failed\n");
    }
    return 0;
}
