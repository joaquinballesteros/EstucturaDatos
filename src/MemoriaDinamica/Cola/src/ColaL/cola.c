#include "cola.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person * createPerson(char *name, int age){
    struct Person * person = (struct Person *)malloc(sizeof(struct Person));
    if(person == NULL){
        printf("No se pudo reservar memoria para la persona\n");
        exit(1);
    }
    strcpy(person->name,name);
    person->age = age;
    return person;
}

/**
 * @brief Crea una cola vacía
 * @param queue Puntero a la cola
 */
void createQueue(struct Node **ptrqueue){
    *ptrqueue = NULL;
}

/**
 * @brief Comprueba si la cola está vacía
 * @param queue Puntero a la cola
 * @return true si la cola está vacía, false en caso contrario
 */
bool isEmpty(struct Node * queue){
    return queue == NULL;
}

/**
 * @brief Comprueba el tamaño de la cola
 * @param queue Puntero a la cola
 * @return
 */
int size(struct Node * queue){
    int count = 0;
    if (queue != NULL)
    {
        struct Node * ultimo = queue; //Empezamos por el ultimo
        do
        {
            count++;
            queue = queue->next;
        } while (queue != ultimo);
    }
    return count;
}

/**
 * @brief Añade un elemento al final de la cola
 * @param queue Puntero a la cola. Apuntamos al último insertado.
 * @param person Puntero a persona a añadir
 */
void enqueue(struct Node **ptrqueue, struct Person * person){
    //Creamos el nodo con sus datos
    struct Node * newNode = (struct Node *)malloc(sizeof(struct Node));
    if(newNode == NULL){
        printf("No se pudo reservar memoria para el nodo\n");
        exit(1);
    }
    newNode->person = person;

    //Si la cola está vacía, el nuevo nodo será el primero
    if(*ptrqueue == NULL){
        *ptrqueue = newNode;
        newNode->next = *ptrqueue;
    }else{
        //Si no está vacía, insertamos el nodo nuevo entre el último y el primero
        struct Node * antultimo = *ptrqueue; //guaramos un puntero al anterior último
        *ptrqueue = newNode; //El nuevo nodo será el último
        newNode->next = antultimo->next; //El nuevo nodo apuntará al primero
        antultimo->next = newNode; //El anterior último, apuntará al nuevo último
    }

    
}

/**
 * @brief Elimina el primer elemento de la cola
 * @param queue Puntero a la cola
 */
void dequeue(struct Node **ptrqueue){
    if((*ptrqueue != NULL) && ((*ptrqueue)->next == *ptrqueue)){
        //SOlo un elemento
        free(*ptrqueue);
        *ptrqueue = NULL;
    }
    else if(*ptrqueue != NULL){
        //SAbemos que hay más de un elemento, al menos 2.
        struct Node * temp = (*ptrqueue)->next;
        (*ptrqueue)->next = (*ptrqueue)->next->next;
        free(temp);
    }
}

/**
 * @brief Obtiene el primer elemento de la cola sin eliminarlo
 * @param queue Cola de la que se quiere obtener el primer elemento
 * @return Persona en la primera posición de la cola
 */
struct Person * first(struct Node * queue){
    struct Person *res = NULL;
    if (queue != NULL)
    {
        res= queue->next->person;
    }
    return res;
}

/**
 * @brief Limpia la cola
 * @param queue Puntero a la cola
 */
void clear(struct Node **ptrqueue){
    while(*ptrqueue != NULL){
        dequeue(ptrqueue);
    }
}

/**
 * @brief Muestra los elementos de la cola
 * @param queue Puntero a la cola
 */
void display(struct Node * queue){
    if (queue!=NULL){
        struct Node * primero = queue->next;
        queue=queue->next; //Avanzamos para imprimir el primero
        do{
            printf("Nombre: %s, Edad: %d\n",queue->person->name,queue->person->age);
            queue = queue->next;
        } while (queue != primero);

    }

  
}
