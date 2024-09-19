#include <stdlib.h>
#include <stdio.h>

typedef struct Node * ptrnodo;

struct Node{
    int data;
    ptrnodo next;
};

void insertar (struct Node ** copiaHead, int dato){
    struct Node * nuevo = (struct Node *) malloc(sizeof(struct Node));
    if (nuevo == NULL){
        printf("No hay memoria disponible\n");
        exit(-1);
    }
    nuevo->data = dato;
    nuevo->next = *copiaHead;
    (*copiaHead) = nuevo;

    
}


void mostrar(struct Node * copiaHead){
    while(copiaHead!=NULL){
        printf("Dato: %d\nPosición de memoria:%p\n",copiaHead->data, copiaHead->next);
        copiaHead = copiaHead->next;
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
    printf("\nEstructura tras insertar:\n");
    mostrar(head);
    printf("\n");

    free(head->next);
    free(head);

    return 0;
}