#include <stdio.h>
#include <inttypes.h>

typedef enum
{
  UINT8,
  UINT16,
  UINT32
} DataType_t;

void genericPrintFunction(DataType_t dataType, void * data)
{
  if(dataType == UINT8)
  {
    printf("%" PRIu8 "\n", (uint8_t) data);
  }
  else if(dataType == UINT16)
  {
    printf("%" PRIu16 "\n", (uint16_t) data);
  }
  else if(dataType == UINT32)
  {
    printf("%" PRIu32 "\n", (uint32_t) data);
  }
}

int main()
{
  genericPrintFunction(UINT8, (void *) 'a');
  genericPrintFunction(UINT16, (void *) 137);
  genericPrintFunction(UINT32, (void *) 123456780);

  return 0;
}
