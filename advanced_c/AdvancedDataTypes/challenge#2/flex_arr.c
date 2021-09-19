#include <stdio.h> //printf, scanf
#include <malloc.h> //malloc, free
#include <stddef.h> //size_t
#include <assert.h> //assert
#include "flex_arr.h"


void _InitArr(FlexArr *arr, size_t size)
{
    size_t i = 0;
    arr -> size = size;
    for (i ; i < (size - 1); ++i)
    {
        arr -> arr[i] = 'A' + i;
    }
    arr -> arr[i] = '\0';
}


FlexArr* CreateArr() {
    size_t size = 0;
    printf("enter array size: ");
    scanf("%zd", &size);
    FlexArr *arr_p = malloc(sizeof(FlexArr) + (size * sizeof(char)));
    assert(arr_p);
    _InitArr(arr_p, size);
    return arr_p;
}



void PrintArr(FlexArr *arr) {
    printf("array size: %zd\n", arr->size);
    printf("array data: %s\n", arr->arr);
}


void DestroyArr(FlexArr* arr) {
    free(arr);
    arr = NULL;
}