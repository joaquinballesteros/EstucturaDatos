#include <stdbool.h>
#ifndef STACK_A_H // Evita la inclusión múltiple del archivo de encabezado
#define STACK_A_H

enum Tipo
{
    PLASTICO,
    METAL,
    MADERA
};


struct Node{
    int color;
    float capacidad;
    enum Tipo material;

};

struct Stack_a{
    struct Node *top;
    unsigned size;
    unsigned capacity;
};



/**
 * @brief Inicializa una Stack_a con una capacidad dada.
 * 
 * @param ptrStack_a Puntero a la estructura de la Stack_a que se va a inicializar.
 * @param capacity Capacidad máxima de la Stack_a.
 */
void stack_a_init(struct Stack_a * ptrStack_a, unsigned capacity);


/**
 * @brief Inserta un elemento en la Stack_a.
 * 
 * Esta función agrega un nuevo elemento en la parte superior de la Stack_a.
 * 
 * @param ptrStack_a Puntero a la estructura de la Stack_a.
 * @param element Elemento de tipo Node que se va a insertar en la Stack_a.
 */
void stack_a_push(struct Stack_a *  ptrStack_a, struct Node element);

/**
 * @brief Devuelve el nodo superior de la Stack_a.
 * 
 * @param ptrStack_a Puntero a la estructura de la Stack_a.
 * @return Node El nodo superior de la Stack_a.
 */
struct Node stack_a_top(struct Stack_a *  ptrStack_a);



/**
 * @brief Elimina el elemento en la cima de la Stack_a.
 * 
 * Esta función elimina el elemento que se encuentra en la cima de la Stack_a 
 * apuntada por ptrStack_a. Si la Stack_a está vacía, la función no realiza ninguna 
 * operación y puede devolver un valor que indique el fallo.
 * 
 * @param ptrStack_a Un puntero a la estructura de la Stack_a.
 * @return true si la operación fue exitosa y se eliminó un elemento.
 * @return false si la Stack_a estaba vacía y no se pudo eliminar ningún elemento.
 */
bool stack_a_pop(struct Stack_a *  ptrStack_a);

/**
 * @brief Verifica si la Stack_a está vacía.
 *
 * Esta función comprueba si la Stack_a apuntada por ptrStack_a no contiene elementos.
 *
 * @param ptrStack_a Puntero a la estructura de la Stack_a que se va a verificar.
 * @return true si la Stack_a está vacía, false en caso contrario.
 */
bool stack_a_isEmpty(struct Stack_a *  ptrStack_a);

/**
 * @brief Devuelve el tamaño de la Stack_a.
 *
 * Esta función toma un puntero a una estructura de tipo Stack_a y 
 * devuelve el número de elementos que contiene la Stack_a.
 *
 * @param ptrStack_a Puntero a la estructura de la Stack_a.
 * @return int Número de elementos en la Stack_a.
 */
int stack_a_size(struct Stack_a *  ptrStack_a);

/**
 * @brief Limpia todos los elementos de la Stack_a.
 * 
 * Esta función elimina todos los elementos de la Stack_a apuntada por ptrStack_a,
 * dejando la Stack_a vacía.
 * 
 * @param ptrStack_a Puntero a la estructura de la Stack_a que se desea limpiar.
 */
void stack_a_clear(struct Stack_a *  ptrStack_a);

/**
 * @brief Muestra los elementos de la Stack_a.
 * 
 * Esta función imprime en la salida estándar todos los elementos 
 * presentes en la Stack_a apuntada por ptrStack_a.
 * 
 * @param ptrStack_a Puntero a la estructura de la Stack_a que se desea mostrar.
 */
void stack_a_show(struct Stack_a *  ptrStack_a);

#endif
