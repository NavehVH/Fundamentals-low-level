#include "../basics/MyStack.h"

typedef struct
{
    MyStack stack;
    MyStack minStack;
} MyMinStack;

void init_min_stack(MyMinStack *ms) {
    init_stack(&(ms->stack)); 
    init_stack(&(ms->minStack));  
}

#include "../basics/MyStack.h"

// Adds a value to the min-stack and updates the current minimum.
int min_stack_push(MyMinStack *ms, int value) {
    stack_push(&(ms->stack), value);

    if (ms->minStack.top == 0) {
        stack_push(&(ms->minStack), value);
    } else {
        int current_min = stack_peek(&(ms->minStack));
        if (value < current_min)
            stack_push(&(ms->minStack), value);
        else
            stack_push(&(ms->minStack), current_min);
    }
    return 1;
}

// Removes the top from both internal stacks and returns the popped value.
int min_stack_pop(MyMinStack *ms) {
    stack_pop(&(ms->minStack));
    return stack_pop(&(ms->stack));
}

// Returns the minimum value currently in the stack in O(1).
int min_stack_get_min(MyMinStack *ms) {
    return stack_peek(&(ms->minStack));
}