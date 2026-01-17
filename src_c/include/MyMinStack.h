#include "../basics/MyStack.h"

typedef struct
{
    MyStack stack;
    MyStack minStack;
} MyMinStack;

void init_min_stack(MyMinStack *ms);

int min_stack_push(MyMinStack *ms, int value);

int min_stack_pop(MyMinStack *ms);

int min_stack_get_min(MyMinStack *ms);