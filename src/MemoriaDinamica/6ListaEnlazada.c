#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>


typedef struct Node * ptrnodo;

struct Node{
    int data;
    ptrnodo next;
};

void insertar (struct Node ** direccionHead, int dato){
    struct Node * nuevo = (struct Node *) malloc(sizeof(struct Node));
    if (nuevo == NULL){
        printf("No hay memoria disponible\n");
        exit(-1);
    }
    nuevo->data = dato;
    nuevo->next = (*direccionHead);
    (*direccionHead)=nuevo;
   
}

void destruir(struct Node ** direccionHead){
   ;
}

bool eliminar(struct Node ** direccionHead, int data){
    ;
}

void mostrar(struct Node * direccionHead){
    while(direccionHead!=NULL){
        printf("Dato: %d\n Siguiente:%p\n",direccionHead->data, direccionHead->next);
        direccionHead = direccionHead->next;
    }
}

int main(){

    struct Node * head = NULL;
    head = (struct Node *) malloc(sizeof(struct Node));
    head->data = 1;
    head->next = NULL;
    printf("\nEstructura antes de insertar:\n");
    mostrar(head);
    insertar(&head, 10);
    insertar(&head, 30);
    insertar(&head, 20);
    /*eliminar(&head,1);
    eliminar(&head,30);
    eliminar(&head,10);
    eliminar(&head,20);

    //VOlemos a insertar y destruimos
    insertar(&head, 10);
    insertar(&head, 30);
    insertar(&head, 20);

    destruir(&head);
*/

    printf("\n");

    free(head->next);
    free(head);

    return 0;
}