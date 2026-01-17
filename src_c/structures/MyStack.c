
#include "../basics/MyStack.h"

// Initialization
void stack_init(MyStack *s) {
    s->top = 0; 
}

// Adds a value to a simple stack.
int stack_push(MyStack *s, int value) {
    if (s->top == MAX) return 0;
    s->items[s->top++] = value;  
    return 1;
}

// Removes and returns the top value from a simple stack.
int stack_pop(MyStack *s) {
    if (s->top == 0) return -1;  
    return s->items[--s->top];
}

// Returns the top value without removing it.
int stack_peek(MyStack *s) {
    if (s->top == 0) return -1;
    return s->items[s->top - 1];
}