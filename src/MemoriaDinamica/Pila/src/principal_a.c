#include "stack_a.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
int main(void)
{

    struct Stack_a pila;
    stack_a_init(&pila,8);
    assert(stack_a_isEmpty(&pila));
    assert(stack_a_size(&pila) == 0);

    struct Node element = {1,2.5,METAL};
    struct Node element2 = {2,3.5,PLASTICO};
    struct Node element3 = {3, 4.5, MADERA};

    stack_a_push(&pila, element);
    assert(!stack_a_isEmpty(&pila));
    assert(stack_a_size(&pila) == 1);
    assert(pila.top[pila.size-1].color==1);

    stack_a_push(&pila, element2);
    assert(stack_a_size(&pila) == 2);
     assert(pila.top[pila.size-1].color==2);

    stack_a_push(&pila, element3);
    assert(stack_a_size(&pila) == 3);
     assert(pila.top[pila.size-1].color==3);

    printf("Pila 3 elementos:\n");
    stack_a_show(&pila);

    struct Node elementTop= stack_a_top(&pila);
    assert(elementTop.color == 3);
    assert(stack_a_size(&pila) == 3);

    assert(stack_a_pop(&pila));
    assert(stack_a_size(&pila) == 2);

    printf("Pila 2 elementos:\n");
    stack_a_show(&pila);

    elementTop = stack_a_top(&pila);
    assert(elementTop.color == 2);

    stack_a_clear(&pila);
    assert(stack_a_isEmpty(&pila));
    assert(stack_a_size(&pila) == 0);

    printf("Pila Vacía:\n");
    stack_a_show(&pila);


    return 0;
}
