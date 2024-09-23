#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "stack_ll.h"

#define TEST_SIZE 100000

int main(void) {
    struct Stack_ll * pila;
    stack_ll_init(&pila);
    clock_t start, end;
    double cpu_time_used;

    start = clock();
    struct Node element = {1,2.5,METAL,NULL};
    for (int i = 0; i < TEST_SIZE; i++) {
        stack_ll_push(pila, element);
    }
    for (int i = 0; i < TEST_SIZE; i++) {
        stack_ll_pop(pila);
    }
    end = clock();

    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Time taken to push and pop elements: %f seconds\n", cpu_time_used);

    return 0;
}

//TA  Time taken to push and pop elements: 0.000807 seconds
//TLL Time taken to push and pop elements: 0.004597 seconds