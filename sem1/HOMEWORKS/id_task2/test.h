#ifndef TEST_H
#define TEST_H

#define START_SIZE 30
#define SIZE_DELTA 20

typedef struct BigNumber {
    unsigned short int* cyphs;
    unsigned short int len;
    unsigned short int size;
}BigNumber;

char* test();
char* rstrip(char*, int);
void reverseArr(unsigned short int*, int);
BigNumber* createBigNum();
int fillBigNum(BigNumber*, char*);
int addBigNum(BigNumber*, BigNumber*);
int excBigNum(BigNumber*, BigNumber*);
int divBigNum(BigNumber*, BigNumber*);
int mulBigNum(BigNumber*, BigNumber*);
char* strBigNum(BigNumber*);
int delBigNum(BigNumber*);


#endif //TEST_H
