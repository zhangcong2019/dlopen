#include <dlfcn.h>
#include <iostream>
using namespace std;

typedef int (*functype)();

main()
{
  printf("this is main\n");
  //void * f = dlopen("/home/cong/temp/dlopen/libfoo.so", RTLD_NOW);
  void * f = dlopen("/home/cong/temp/dlopen/libfoo.so", RTLD_LAZY);
  perror("dlopen");
  void * obj = dlsym(f, "print");
  functype a = (functype)dlsym(f, "print");
  perror("dlsym");
  int * ptr = (int *) obj;
  //cout << *ptr << endl;
  int b = a();
  printf("");
}
