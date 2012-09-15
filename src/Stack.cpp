#include "Stack.h"
#include <iostream>

Stack::Stack(int initialSize) {
  theStack = new int[initialSize];
  top = 0;
}

Stack::~Stack() {
  delete[] theStack;
}

void Stack::push(int value) {
  	if (theStack->size==top){
		Stack* newStack = new Stack[(theStack->size) * 2];
		//memcpy(newStack, theStack, newStack->size);
		for (int i=0;i<=theStack->size()-1;++i){
			newStack[i]=theStack[i];
		}
		delete[] theStack;
		theStack = newStack;
	}
  // create new stack twice as big
  // copy all elements to new stack
  // delete old stack
  // point old stack pointer to new stack
  theStack[top] = value;
  top++;
}

int Stack::pop() {
  top--;
  return theStack[top];
}

int Stack::peek() {
  return theStack[top-1];
}

int Stack::size() {
  return top;
}
