#include "stack_ll.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
int main(void)
{
    struct Stack_ll * pila;
    stack_ll_init(&pila);
    assert(stack_ll_isEmpty(pila));
    assert(stack_ll_size(pila) == 0);

    struct Node element = {1,2.5,METAL,NULL};
    struct Node element2 = {2,3.5,PLASTICO,NULL};
    struct Node element3 = {3, 4.5, MADERA,NULL};

    
    stack_ll_push(pila, element);
    assert(!stack_ll_isEmpty(pila));
    assert(stack_ll_size(pila) == 1);
    assert(pila->top->color == 1);

    stack_ll_push(pila, element2);
    assert(stack_ll_size(pila) == 2);
    assert(pila->top->color == 2);

    stack_ll_push(pila, element3);
    assert(stack_ll_size(pila) == 3);
    assert(pila->top->color == 3);

    printf("Pila 3 elementos:\n");
    stack_ll_show(pila);

    struct Node  elementTop= stack_ll_top(pila);
    assert(elementTop.color == 3);
    assert(stack_ll_size(pila) == 3);

    assert(stack_ll_pop(pila));
    assert(stack_ll_size(pila) == 2);

    printf("Pila 2 elementos:\n");
    stack_ll_show(pila);

    elementTop = stack_ll_top(pila);
    assert(elementTop.color == 2);

    stack_ll_clear(pila);
    assert(stack_ll_isEmpty(pila));
    assert(stack_ll_size(pila) == 0);

    printf("Pila Vacía:\n");
    stack_ll_show(pila);
    free(pila);
    return 0;
}
