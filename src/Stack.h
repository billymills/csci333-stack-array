#ifndef __STACK_H__
#define __STACK_H__


//Stack class declaration

class Stack {
 	private:
  		int* theStack;
		int* newStack;
  		int top;
		int full;

 	public:
  		Stack(int initialSize = 10);
  		~Stack(); //destructor
  		void push(int value);
  		int pop();
  		int peek();
  		int size();
};


#endif
