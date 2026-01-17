#include <stddef.h>
#include "../include/MyLinkedList.h"


node* list_new(int value) {
    node *list = malloc(sizeof(node));

    if (list == NULL)
        return NULL;
    return list;
}

int list_count(node* list) {
    int count = 0;
    while (list != NULL) {
        count++;
        list = list->next;
    }
    return count;
}

int list_is_empty(node* list) {
    return (list == NULL);
}


