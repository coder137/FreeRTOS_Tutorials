#include <stdio.h>

//NOTE, This function takes in an int and prints the output
void genericFunction(void (*printFunction)(int), int data);

void writeYourOwnPrintFunction(int data);
void yourNewPrintFunction(int newData);

int main()
{
  genericFunction(writeYourOwnPrintFunction, 10);
  genericFunction(yourNewPrintFunction, 10);

  return 0;
}

void genericFunction(void (*printFunction)(int), int data)
{
  printFunction(data);
}

void writeYourOwnPrintFunction(int data)
{
  printf("Hello Data: %d\n", data);
}

void yourNewPrintFunction(int newData)
{
  printf("New Function: %d\n", newData);
}
