#include <stdio.h>

void genericPrintFunction(void * genericData)
{
  //NOTE: Refer to previous example, we can also do this
  /// float *data = genericData;
  /// printf("%f\n", *data);

  // What does this mean?
  // genericData is a pointer to float, however to get the float value we need to point to that value
  printf("%f\n", (*(float *) genericData) );
}

int main()
{
  float data = 1.37;
  genericPrintFunction((void *) &data);
}
