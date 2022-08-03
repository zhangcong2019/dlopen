#include "stdio.h"

extern "C" {
  int barleyCorn = 12;
  int print() {printf("ok test\n"); return 111;};
};
//static A a;
class A{
	public:
	A(){printf("construct\n");};
	public:
		int a;
		int func(int x) {return x+x;};
};
static A a;
