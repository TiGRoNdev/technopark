#include <stdlib.h>
#include <stdio.h>


#define ER_ALLOC 228282
#define ER_DEL 1488322
#define SIZE_DELTA 50
#define ERROR 22234516


typedef struct Arr {
    unsigned int* array;
    unsigned int length;
    unsigned int pointer;
}Arr;


int push(Arr*, unsigned int);
void show(Arr*);
Arr* create_array();
int delete(Arr*);


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


#define MAX_STR_BUFF 200
#define MAX_DEC_POINTS 19


int set_canon(unsigned int num, Arr* array) {
    unsigned int smpl_number = 2;

    if (push(array, 1) == ER_ALLOC)
        return ER_ALLOC;

    while (smpl_number <= num) {
        if (num == 1)
            break;
        while (num % smpl_number == 0) {
            if (push(array, smpl_number) == ER_ALLOC)
                return ER_ALLOC;
            num /= smpl_number;
        }
        ++smpl_number;
    }

    return 0;
}


int err_catcher(int err) {
    if (!err)
        return 0;
    printf("[error]");
    return ERROR;
}


int main() {
    int num = 0;
    char* buff = (char*)malloc(sizeof(char) * MAX_STR_BUFF);
    int res = scanf("%s", buff);
    if (res != 1) {
        free(buff);
        printf("[error]");
        return 0;
    }
    for (int i = 0; i < MAX_STR_BUFF; ++i) {
        if (buff[i] == '\0')
            break;
        if (buff[i] - '0' < 0 || buff[i] - '0' > 9) {
            free(buff);
            printf("[error]");
            return 0;
        }
    }

    num = atoi(buff);

    if (num <= 0) {
        free(buff);
        printf("[error]");
        return 0;
    }

    Arr* array = create_array();
    if (!array) {
        free(buff);
        printf("[error]");
        return 0;
    }

    if (err_catcher(set_canon(num, array)) == ERROR) {
        free(buff);
        return 0;
    }

    show(array);

    if (err_catcher(delete(array)) == ERROR) {
        free(buff);
        return 0;
    }

    free(buff);
    return 0;
}