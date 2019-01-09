/*
 * CS 3251 - Stack Example 1 - A Bare Bones Stack
 *  Julie A. Adams, G. Hemingway
**/

#include <stdio.h>

#define MAX_STACK 100 /* const int MAX_STACK = 100 */

typedef int T;

int main() {
    // Declare an integer stack that can hold up to 100 items
    T stack[MAX_STACK];
    int top = 0;
    T item = 10;

    // push the first item onto the stack
    stack[top++] = item;

    // push the second item onto the stack
    item = 20;
    stack[top++] = item;

    // assign a new value to item and print it out
    item = 30;
    printf("Item is: %d\n", item);

    // pop the top item off the stack and store the value in item.
    item = stack[--top]; // pop
    printf("Item is: %d\n", item);
}
