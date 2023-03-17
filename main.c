#include <stdio.h> 
#include <stdlib.h>
#include "input.h"
#include "arrays.h"
int main() {
    int v[5] = {2, 3, 6, 4, 7};
    printArray(v,5);
    mean(v,5);
    sum(v,5);
    variance(v,5);
    printf("Teste \n");



    return EXIT_SUCCESS;
}
