#include <stdio.h>
#include <stdlib.h>
#include "arr.h"


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


