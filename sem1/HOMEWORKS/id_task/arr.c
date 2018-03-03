#include <stdlib.h>
#include <stdio.h>
#include "arr.h"


Arr* create_array() {
    Arr* arr = (Arr*)malloc(sizeof(Arr));
    if (!arr)
        return NULL;
    arr->array = (unsigned int*)malloc(sizeof(unsigned int) * SIZE_DELTA);
    if (!arr->array)
        return NULL;
    arr->length = SIZE_DELTA;
    arr->pointer = 0;

    return arr;
}


static int enlarge(Arr* array) {
    array->array = (unsigned int*)realloc(array->array, sizeof(unsigned int) * (array->length + SIZE_DELTA));
    if (!array->array)
        return ER_ALLOC;
    array->length += SIZE_DELTA;
    return 0;
}


int push(Arr* array, unsigned int val) {
    if (array->pointer > array->length) {
        if (enlarge(array) == ER_ALLOC)
            return ER_ALLOC;
    }
    array->array[array->pointer] = val;
    ++(array->pointer);
    return 0;
}


void show(Arr* array) {
    if (!array)
        return;
    for (int i = 0; i < array->pointer; ++i)
        printf("%d ", array->array[i]);
}


int delete(Arr* array) {
    if (!array || !(array->array))
        return ER_DEL;
    free(array->array);
    free(array);

    return 0;
}
