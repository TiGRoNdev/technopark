#ifndef ARR_H
#define ARR_H


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



#endif //ARR_H
