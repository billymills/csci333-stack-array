//filename:	Stack.cpp
//desc:		implementation file

#include "Stack.h"
#include <iostream>

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
		int* newStack = new int[full*2];  //if full resize array
		for (int i=0;i<full;++i){
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
	//int temp = theStack->size();
	//cout << temp << endl;
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
