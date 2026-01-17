#include <stddef.h>
#include <stdlib.h>
#include "../include/MyLinkedList.h"


node* list_new(int value) {
    node *list = malloc(sizeof(node));

    if (list == NULL)
        return NULL;

    list->data = value;  
    list->next = NULL;
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

node* list_add_front(node* list, int value) {
    node* new = list_new(value); 
    if (new == NULL) return list;

    new->next = list;
    return new;
}

node* list_add_back(node* list, int value) {
    node* temp = list;
    if (list == NULL)
       return list_new(value);

    while(temp->next != NULL)
        temp = temp->next;

    temp->next = list_new(value);
    return list;
}

void list_clear(node* list) {
    while (list != NULL) {
        node* temp = list;
        list = list->next;
        free(temp);
        temp = NULL;
    }
}
