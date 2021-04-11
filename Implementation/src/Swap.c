#include "Sorting.h"

void swap(int* variable_one, int* variable_two)
{
    int temp=*variable_one;
    *variable_one=*variable_two;
    *variable_two=temp;
}