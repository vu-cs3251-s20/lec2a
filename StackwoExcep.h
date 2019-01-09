/**
 * Filename: StackwoException.h
 * Class: CS3251
 *
 * @author Julie A. Adams, G. Hemingway
 * Description: This file implements an abstract data type stack class using
 *              data hiding. This file does use exception handling.
 */

#ifndef STACKWOEXCEPT_H
#define STACKWOEXCEPT_H

#include <cstdint>
#include <cstdlib>

// Type of Stack element
typedef int T;

class Stack {
public:
  /* Constructors */
  Stack(uint32_t size);

  /* Destructor */
  ~Stack();

  void push(const T &item);
  void pop(T &item);
  int top(T &cur_top);
  bool isEmpty() const;
  bool isFull() const;

private:
  uint32_t stackTop, size;
  T *stack;
};

#endif
