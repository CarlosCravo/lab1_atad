#include <stdio.h> 
#include <stdlib.h>
#include "input.h"

void printArray(int arr[], int arrLength) {
    printf("[ ");
    for(int i=0; i<arrLength; i++) {
        printf("%d%s", arr[i], (i < arrLength - 1 ? ", " : ""));
    }
    printf("]\n");
}

int sum(int arr[], int arrLength){
    
    int total = 0; 
    for (int i = 0; i < arrLength; i++) { 
        total += arr[i]; 
    }
   printf("%d",total);
   printf("\n");
    return total; 

}
double mean(int arr[], int arrLength) {
    double avg = (double) sum(arr,arrLength) / arrLength;
    printf("%f",avg);
    printf("\n");
    return avg; 
}

double variance(int arr[], int arrLength) {
    double aux = mean(arr,arrLength), variance = 0.0;
    int i;

    // Calcula a variância dos elementos do array
    for(i=0; i < arrLength; ++i){
        variance += (arr[i] - aux) * (arr[i] - aux);
    }
    variance = variance/(arrLength-1);

    printf("%f",variance);
    printf("\n");
    return variance;
}

