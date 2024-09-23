#include <stdbool.h>
#ifndef STACK_LL_H // Evita la inclusión múltiple del archivo de encabezado
#define STACK_LL_H

enum Tipo
{
    PLASTICO,
    METAL,
    MADERA
};


struct Node
{
    int color;
    float capacidad;
    enum Tipo material;
    struct Node *next;
};

struct Stack_ll
{
    struct Node * top;
    int size;
};


/**
 * @brief Creamos una pila con *size* cero y un puntero *top* a NULL
 * @param ptrStack  Dirección de memoria del puntero a la pila a crear.
 */
void stack_ll_init(struct Stack_ll **ptrStack);

/**
 * @brief Añadimos un elemento a la pila
 * @param ptrStack  Puntero a la pila
 * @param element  Elemento a añadir
 */
void stack_ll_push(struct Stack_ll *ptrStack, struct Node element);


/**
 * @brief Devuelve el elemento en la cima de la pila
 * @param ptrStack  Puntero a la pila 
 * @return Puntero al elemento en la cima de la pila 
 */
struct Node stack_ll_top(struct Stack_ll * ptrStack);

/**
 * @brief Elimina el elemento en la cima de la pila
 * @param ptrStack Puntero a la pila.
 * @return true se puede eliminar, false en caso contrario
 */
bool stack_ll_pop(struct Stack_ll * ptrStack);

/**
 * @brief Comprueba si la pila está vacía
 * @param ptrStack  Puntero a la pila
 * @return true si la pila está vacía, false en caso contrario
 */
bool stack_ll_isEmpty(struct Stack_ll * ptrStack);

/**
 * @brief Devuelve el número de elementos en la pila
 * @param ptrStack  Puntero a la Pila
 * @return Número de elementos en la pila
 */
int stack_ll_size(struct Stack_ll * ptrStack);

/**
 * @brief Elimina todos los elementos de la pila
 * @param ptrStack  Puntero a la Pila
 */
void stack_ll_clear(struct Stack_ll * ptrStack);

/**
 * @brief Muestra los elementos de la pila 
 * @param ptrStack Puntero a la pila a mostrar
 */
void stack_ll_show(struct Stack_ll * ptrStack);

#endif

