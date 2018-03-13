#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "test.h"


BigNumber* createBigNum() {
    BigNumber* BigNum = (BigNumber*)malloc(sizeof(BigNumber));
    if (!BigNum) {
        return NULL;
    }
    BigNum->cyphs = (unsigned short int*)malloc(sizeof(unsigned short int) * START_SIZE);
    if (!BigNum->cyphs) {
        free(BigNum);
        return NULL;
    }
    BigNum->len = 0;
    BigNum->size = START_SIZE;

    return BigNum;
}


char* rstrip(char* str, int len) {
    int i = 0;
    int k = len - 1;
    for (i; i < len; ++i) {
        if (str[i] == ' ')
            continue;
        else
            break;
    }
    for (k; k > i; --k) {
        if (str[k] == ' ')
            continue;
        else
            break;
    }
    len = k - i + 1;
    int j = 0;
    char* buff = (char*)malloc(sizeof(char) * len);
    if (!buff)
        return NULL;
    for (i; i <= k; ++i) {
        buff[j] = str[i];
        ++j;
    }

    return buff;
}


void reverseArr(unsigned short int* arr, int len) {
    for (int i = 0; i < len/2; ++i) {
        unsigned short int tmp = arr[len - 1 - i];
        arr[len - 1 - i] = arr[i];
        arr[i] = tmp;
    }
}


int fillBigNum(BigNumber* BigNum, char* res) {
    char* buff = rstrip(res, (int)strlen(res));
    int len = (int)strlen(buff);
    for (int i = 0; i < len; ++i) {
        if (buff[i] - '0' < 0 || buff[i] - '0' > 9) {
            free(buff);
            return -1;
        }
    }

    if (BigNum->len != 0) {
        free(BigNum->cyphs);
        BigNum->cyphs = NULL;
        BigNum->size = 0;
        BigNum->len = 0;
    }

    unsigned short int arr_size = BigNum->size;
    while (arr_size < len) {
        arr_size += SIZE_DELTA;
    }
    if (arr_size != BigNum->size) {
        BigNum->cyphs = (unsigned short int*)realloc(BigNum->cyphs, sizeof(unsigned short int) * arr_size);
        if (!BigNum->cyphs)
            return -1;
        BigNum->size = arr_size;
    }

    for (int i = 0; i < len; ++i) {
        BigNum->cyphs[i] = (unsigned short int)(buff[i] - '0');
        ++(BigNum->len);
    }

    return 0;
}


int addBigNum(BigNumber* bn1, BigNumber* bn2) {
    unsigned short int max_len = 0;
    BigNumber* target = NULL;
    BigNumber* sub = NULL;
    if (bn2->len > bn1->len) {
        max_len = bn2->len;
        target = bn2;
        sub = bn1;
    }
    else {
        max_len = bn1->len;
        target = bn1;
        sub = bn2;
    }
    BigNumber* tmp = (BigNumber*)malloc(sizeof(BigNumber));
    tmp->cyphs = (unsigned short int*)malloc(sizeof(unsigned short int) * (max_len + 1));
    tmp->size = (unsigned short int)(max_len + 1);
    tmp->len = 0;

    for (int m = 0; m < tmp->size; ++m)
        tmp->cyphs[m] = 0;

    int j = sub->len - 1;
    int k = 0;
    for (int i = target->len - 1; i >= 0; --i) {
        int num = 0;
        if (j >= 0)
            num = sub->cyphs[j];
        --j;
        num += target->cyphs[i] + tmp->cyphs[k];
        if (num >= 10) {
            tmp->cyphs[k] = (unsigned short int)(num - 10);
            tmp->cyphs[k + 1] += 1;
            ++(tmp->len);
            ++k;
        }
        else {
            tmp->cyphs[k] = (unsigned short int)(num);
            ++(tmp->len);
            ++k;
        }
    }

    reverseArr(tmp->cyphs, tmp->len);

    free(bn1->cyphs);
    bn1->cyphs = tmp->cyphs;
    bn1->len = tmp->len;
    bn1->size = tmp->size;

    return 0;
}


int excBigNum(BigNumber* bn1, BigNumber* bn2) {

}


int divBigNum(BigNumber* bn1, BigNumber* bn2) {

}


int mulBigNum(BigNumber* bn1, BigNumber* bn2) {

}


char* strBigNum(BigNumber* bn) {
    char* buff = (char*)malloc(sizeof(char) * bn->len + 1);
    for (int i = 0; i < bn->len; ++i) {
        buff[i] = (bn->cyphs[i] + '0');
    }
    buff[bn->len] = '\0';
    return buff;
}


int delBigNum(BigNumber* bn) {

}


int main() {
    printf(test());

    return 0;
}