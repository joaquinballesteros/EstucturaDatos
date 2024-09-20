#include "cola.h"
#include <stdio.h>
#include <assert.h>
#include <string.h>

int main(void)
{
    Queue queue;
    createQueue(&queue);

    struct Person *person1 = createPerson("Alice", 25);
    struct Person *person2 = createPerson("Bob", 30);
    struct Person *person3 = createPerson("Charlie", 35);

    enqueue(&queue, person1);

    assert(size(queue) == 1);
    assert(!isEmpty(queue));
    assert(first(queue)->age == 25);
    assert(strcmp(first(queue)->name, "Alice") == 0);

    enqueue(&queue, person2);

    assert(size(queue) == 2);
    assert(!isEmpty(queue));
    assert(first(queue)->age == 25);
    assert(strcmp(first(queue)->name, "Alice") == 0);
    assert(strcmp(queue->person->name, "Bob") == 0);
    assert(queue->person->age == 30);

    enqueue(&queue, person3);

    assert(size(queue) == 3);
    assert(!isEmpty(queue));
    assert(first(queue)->age == 25);
    assert(strcmp(first(queue)->name, "Alice") == 0);
    assert(strcmp(queue->person->name, "Charlie") == 0);
    assert(queue->person->age == 35);

    display(queue);

    printf("First: Name: %s, Age: %d\n", first(queue)->name, first(queue)->age);

    dequeue(&queue);

    assert(size(queue) == 2);
    assert(!isEmpty(queue));
    assert(first(queue)->age == 30);
    assert(strcmp(first(queue)->name, "Bob") == 0);
    assert(strcmp(queue->person->name, "Charlie") == 0);
    assert(queue->person->age == 35);

    display(queue);

    printf("First: Name: %s, Age: %d\n", first(queue)->name, first(queue)->age);

    clear(&queue);
    assert(isEmpty(queue));
    assert(size(queue) == 0);

    display(queue);

    return 0;
}
