#define MAX 100

typedef struct {
    int items[MAX];
    int top;
} MyStack;

void stack_init(MyStack *s);

int stack_push(MyStack *s, int value);

int stack_pop(MyStack *s);

int stack_top(MyStack *s);