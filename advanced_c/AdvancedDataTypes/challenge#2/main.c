#include "flex_arr.h"

int main() {
    FlexArr* arr_p = CreateArr();
    PrintArr(arr_p);
    DestroyArr(arr_p);
    return 0;
}