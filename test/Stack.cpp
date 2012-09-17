#include "gtest/gtest.h"
#include "../src/Stack.h"

TEST(StackTest, Push) {
  	Stack* s = new Stack();
  	s->push(6);

 	EXPECT_EQ(6, s->peek());
  	EXPECT_EQ(1, s->size()); 
	delete s;
}

TEST(StackTest, Resize) {
	Stack* s = new Stack();	
	for(int i=1;i<=11;i++){
		s->push(i);
	}
	EXPECT_EQ(11, s->size());
	delete s;	
}

TEST(StackTest, ResizeAgain) {
	Stack* t = new Stack();	
	for(int j=1;j<=21;j++){
		t->push(j);
	}
	EXPECT_EQ(21, t->size());
	delete t;	
}

/*
TEST(StackTest, PushPastCapacity) {
	Stack* s = new Stack();
	for(int i = 0; i<999; i++) {
		s->push(i);
	}
	EXPECT_EQ(999, s->peek());

}*/


