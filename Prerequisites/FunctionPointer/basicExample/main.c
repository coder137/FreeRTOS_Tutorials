#include <stdio.h>

int add(int a, int b)
{
  return a+b;
}

int main()
{
  int (*pAdd)(int, int) = &add;

  int data = (*pAdd)(10, 20);
  printf("%d\n", data);
  return 0;
}
