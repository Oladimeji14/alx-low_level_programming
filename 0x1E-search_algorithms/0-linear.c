#include <stdio.h>
#include "search_algos.h"

int main(void)
{
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);
    int value = 3;

    int index = linear_search(array, size, value);
    if (index != -1)
        printf("Value %d found at index %d\n", value, index);
    else
        printf("Value %d not found in the array\n", value);

    return 0;
}
