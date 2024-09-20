#include "pila.h"
#include <stdio.h>
#include <assert.h>
int main(void)
{
    PtrNode pila = NULL;
    assert(isEmpty(pila));
    assert(size(pila) == 0);

    struct Node element = {1, 2.5, METAL, NULL};
    struct Node element2 = {2, 3.5, PLASTICO, NULL};
    struct Node element3 = {3, 4.5, MADERA, NULL};
    PtrNode elementTop;
    
    push(&pila, element);
    assert(!isEmpty(pila));
    assert(size(pila) == 1);
    assert(pila->color == 1);

    push(&pila, element2);
    assert(size(pila) == 2);
    assert(pila->color == 2);

    push(&pila, element3);
    assert(size(pila) == 3);
    assert(pila->color == 3);

    printf("Pila 3 elementos:\n");
    show(pila);

    elementTop = top(pila);
    assert(elementTop->color == 3);
    assert(size(pila) == 3);

    assert(pop(&pila));
    assert(size(pila) == 2);

    printf("Pila 2 elementos:\n");
    show(pila);

    elementTop = top(pila);
    assert(elementTop->color == 2);

    clear(&pila);
    assert(isEmpty(pila));
    assert(size(pila) == 0);

    printf("Pila Vacía:\n");
    show(pila);
    
    return 0;
}
