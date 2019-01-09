/*
 * Filename: StackwoExceptionMain.cpp
 * Class: CS3251
 *
 * @author Julie A. Adams, G. Hemingway
 * Description: This file is a tester file for the Stack class.
 */

#include "StackwoExcep.h"
#include <iostream>

int main() {
  /* create multiple stacks */
  Stack stack1(1), stack2(100);
  T item, top_item;

  if (!stack1.isFull())
    stack1.push(473);

  if (!stack1.isEmpty()) {
    stack1.top(top_item);
    std::cout << "the top item on stack1 is: " << top_item << std::endl;
  }

  if (!stack2.isFull())
    stack2.push(2112);

  if (!stack2.isEmpty()) {
    stack2.pop(item);
    std::cout << "the item popped off the stack is: " << item << std::endl;
  }

  stack1 = stack2;

  // access violation caught at compile-time
  //stack2.stackTop = 10;
  // Termination and destruction is handled automatically.
  return 0;
}
