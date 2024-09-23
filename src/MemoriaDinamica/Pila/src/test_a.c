#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "stack_a.h"

#define TEST_SIZE 100000

int main() {
    struct Stack_a pila;
    stack_a_init(&pila,8);
    clock_t start, end;
    double cpu_time_used;

    start = clock();
    struct Node element = {1,2.5,METAL};
    for (int i = 0; i < TEST_SIZE; i++) {
        stack_a_push(&pila, element);
    }
    for (int i = 0; i < TEST_SIZE; i++) {
        stack_a_pop(&pila);
    }
    end = clock();

    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Time taken to push and pop elements: %f seconds\n", cpu_time_used);

    return 0;
}