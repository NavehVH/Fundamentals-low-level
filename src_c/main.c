#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "basics/methods.c"

int main() {
    char *x = "hiiii";
    char *checks = "hiiiix";
    printf("Hi %d\n", my_strcmp(x, checks));
    return 0;
}

