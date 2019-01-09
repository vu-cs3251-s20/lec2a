/** Stack Example ADT - A Data Hiding Stack
    Julie A. Adams, Graham Hemingway
**/

#include <stdio.h>
#include <stdlib.h>
#include "StackADTC.h"

int Stack_create(Stack *s, uint32_t size) {
    s->stack = malloc(size * sizeof(T));
    s->top = 0;
    s->size = size;
    return s->stack == 0 ? -1 : 0;
}

void Stack_destroy(Stack *s) {
    if (s->stack != NULL) {
        free((void *)s->stack);
    }
    s->stack = NULL;
    s->top = 0;
    s->size = 0;
    s->stack = 0;
}

void Stack_push(Stack *s, T item) {
    s->stack[s->top] = item;
    s->top++;
}

void Stack_pop(Stack *s, T *item) {
    *item = s->stack[--s->top];
}

int Stack_top(Stack *s, T *item) {
    *item = s->stack[s->top - 1];

    return *item;
}

int Stack_is_empty(Stack *s) {
    return s->top == 0;
}

int Stack_is_full(Stack *s) {
    return s->top >= s->size;
}
