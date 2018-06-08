#include <stdio.h>
#include <inttypes.h>

float val = 1.37;

void *test()
{
  //void pointers only hold the address, they do not know the type
  void *test = &val;
  return test;
}

int main()
{
  //The cast can be removed (added for clarity)
  //We supply the address, while telling the variable that it is a float
  float *f = (float *) test();
  printf("%f\n", *f);
  return 0;
}
