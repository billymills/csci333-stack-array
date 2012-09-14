#include "gtest/gtest.h"
#include "../src/Stack.h"

TEST(StackTest, Push) {
  Stack* s = new Stack();
  s->push(6);

  EXPECT_EQ(6, s->peek());
  delete s;
}

TEST(ResizeTest, Push) {
	Stack* s = new Stack();	
	for(int i=1;i<=12;i++){
		s->push(i);
	}
	EXPECT_EQ(12, s->size());
	delete s;
}


