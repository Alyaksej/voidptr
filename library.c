#include "library.h"

#include <stdio.h>
#include <malloc.h>
#include <memory.h>

int* byteToInt(void* ptr_in, int len) {
    int numInts = len / sizeof(int); // number of ints
    printf("numInts: %d", numInts);
    int *arrInts = malloc(numInts * sizeof(int)); // dinamic memory fo int array
    for (int i = 0; i < numInts; i++) {
        char* bytePtr = (char*)ptr_in + (i * sizeof(int)); // char to ints
        memcpy(&arrInts[i], bytePtr, sizeof(int)); // copy bytes to int array
    };
    return arrInts;
}
