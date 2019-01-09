/**
 * Filename: StackwoException.cpp
 * Class: CS3251
 *
 * @author Julie A. Adams, G. Hemingway
 * Description: This file implements an abstract data type stack class using
 *              data hiding.
 */

#include "StackwoExcep.h"

Stack::Stack(uint32_t size) : stackTop(0), size(size), stack(new T[size]) {}

Stack::~Stack() { delete[] stack; }

void Stack::push(const T &item) {
  stack[stackTop] = item;
  stackTop++;
}

void Stack::pop(T &item) { item = stack[--stackTop]; }

int Stack::top(T &item) {
  item = stack[stackTop - 1];

  return item;
}

bool Stack::isEmpty() const { return stackTop == 0; }

bool Stack::isFull() const { return stackTop == size; }
