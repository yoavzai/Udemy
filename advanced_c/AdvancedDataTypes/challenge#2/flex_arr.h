#ifndef FLEX_ARR_H
#define FLEX_ARR_H

#include <stddef.h> //size_t

typedef struct FlexArr {
    size_t size;
    char arr[];
} FlexArr;

FlexArr* CreateArr();
void PrintArr(FlexArr *arr);
void DestroyArr(FlexArr* arr);

#endif // FLEX_ARR_H