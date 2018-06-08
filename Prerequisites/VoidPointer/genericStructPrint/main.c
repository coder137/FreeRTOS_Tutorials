#include <stdio.h>
#include <inttypes.h>

typedef struct Data_t
{
    uint32_t ucData;
    char id;
} GenericData_t;

void genericStructPrint(void *xStruct)
{
    GenericData_t * data = (GenericData_t *) xStruct;
    printf("ucData: %" PRIu32 "\n", data->ucData);
    printf("id: %c\n", data->id);
}

int main()
{
    GenericData_t data1 = {100, 'a'};
    GenericData_t data2 = {200, 'z'};
    genericStructPrint((void *) &data1);
    genericStructPrint((void *) &data2);
    return 0;
}
