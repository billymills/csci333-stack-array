//filename:	Stack.cpp
//desc:		implementation file

#include "Stack.h"
#include <iostream>
#include <assert.h>

using std::cout;
using std::endl;


//Stack method definition within Stack Class
Stack::Stack(int initialSize) {
  	theStack = new int[initialSize];
  	top = 0;
	full = initialSize;  //var to hold max capacity of array
}

//Stack destructor method with Stack Class
Stack::~Stack() {
  	delete[] theStack;
}

//push method definition for Stack Class
void Stack::push(int value) {
  	if (top==full){  //if the array is full resize it
		int* newStack = new int[full*2];  //if full double size of array
		for (int i=0;i<full;++i){
			newStack[i]=theStack[i];  //copy elements from old array to new array
		}
		delete[] theStack;  //delete old stack
		theStack = newStack; //this is reassigning the pointer
		full *= 2; //update full
	}
	assert(top != full);  //additional test condition
  	theStack[top] = value;
	top++;
}

//pop method definition for Stack Class
int Stack::pop() {
  top--;
  return theStack[top];
}

//peek method definition for Stack Class
int Stack::peek() {
  return theStack[top-1];
}

//size method definition for Stack Class
int Stack::size() {
  return top;
}
