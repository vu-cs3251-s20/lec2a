/*
 * CS 3251 - A test file for StackADTC
 *  Julie A. Adams, G. Hemingway
**/

#include <stdio.h>
#include "StackADTC.h"

int  main () {
    /* create multiple stacks */
    Stack stack1, stack2;
    T item, top_item;

    Stack_create(&stack1, 10);                  //structure passed by reference
    Stack_push(&stack1, 10);                    // Push something onto the stack
    Stack_top(&stack1, &item);                  // Copy the value on the top of the stack
    printf("Top of Stack1 %d\n\n", item);

    Stack_create(&stack2, 5);                   // Initialize the second stack
    Stack_push (&stack2, 10);                   // Push some values onto the stack
    Stack_push (&stack2, 20);
    Stack_top(&stack2, &top_item);
    printf("Top of Stack2: %d\n\n", top_item);

    /* Disaster due to aliasing!!! */
    Stack_top(&stack1, &top_item);
    printf("Top of Stack1: %d\n", top_item);
    /* What really happens here?  Are they aliased, or is something worse happening? */
    stack1 = stack2;
    Stack_top(&stack1, &top_item);
    printf("Top of Stack1 after assignment: %d \n\n", top_item);

    Stack_pop (&stack2, &item);                 // Pop a couple of items from the stack
    Stack_top (&stack2, &top_item);
    printf("Top of stack2: %d\n", top_item);
    Stack_top (&stack1, &top_item);
    printf("Top of stack1: %d\n", top_item);

    Stack_destroy(&stack1);
    Stack_destroy(&stack2);                     // Disaster!!!  Why does this fail?
}
