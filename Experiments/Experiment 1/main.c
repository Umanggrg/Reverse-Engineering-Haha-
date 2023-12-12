#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void heapOverflow() {
    char *buffer = (char *)malloc(8);
    strcpy(buffer, "This is a longer string than the allocated buffer can hold.");
    free(buffer);
}

void integerOverflow() {
    int maxInt = 2147483647; // Maximum signed integer value
    int overflowedValue = maxInt + 1;
    printf("Overflowed Value: %d\n", overflowedValue);
}

void stackOverflow() {
    stackOverflow(); // Recursively calling the function until the stack overflows
}

int main() {
    printf("1. Heap Overflow:\n");
    heapOverflow();

    printf("\n2. Integer Overflow:\n");
    integerOverflow();

    printf("\n3. Stack Overflow:\n");
    stackOverflow();

    return 0;
}

