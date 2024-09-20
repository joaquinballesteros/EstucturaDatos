#include <stdbool.h>
#ifndef PILA_H // Evita la inclusión múltiple del archivo de encabezado
#define PILA_H

enum Tipo
{
    PLASTICO,
    METAL,
    MADERA
};

typedef struct Node *PtrNode;

struct Node
{
    int color;
    float capacidad;
    enum Tipo material;
    struct Node *next;
} Node;

/**
 * @brief Añadimos un elemento a la pila
 * @param ptrptrNode  Puntero a la pila (que es un puntero a un nodo)
 * @param element  Elemento a añadir
 */
void push(PtrNode *ptrptrNode, struct Node element);


/**
 * @brief Devuelve el elemento en la cima de la pila
 * @param pila  Puntero a la pila 
 * @return Puntero al elemento en la cima de la pila 
 */
PtrNode top(PtrNode pila);

/**
 * @brief Elimina el elemento en la cima de la pila
 * @param ptrptrNode Puntero a la pila (que es un puntero a un nodo) de la que se quiere eliminar el elemento en la cima
 * @return true se puede eliminar, false en caso contrario
 */
bool pop(PtrNode *ptrptrNode);

/**
 * @brief Comprueba si la pila está vacía
 * @param pila  Pila a comprobar
 * @return true si la pila está vacía, false en caso contrario
 */
bool isEmpty(PtrNode pila);

/**
 * @brief Devuelve el número de elementos en la pila
 * @param pila  Pila de la que se quiere obtener el número de elementos
 * @return Número de elementos en la pila
 */
int size(PtrNode pila);

/**
 * @brief Elimina todos los elementos de la pila
 * @param ptrptrNode Puntero a la pila (que es un puntero a un nodo) que se quiere vaciar
 */
void clear(PtrNode *ptrptrNode);

/**
 * @brief Muestra los elementos de la pila 
 * @param pila Pila a mostrar
 */
void show(PtrNode pila);

#endif
