#include <stdio.h> //printf

static int static_int = 1;
const int const_int = 2;
int global_int = 3;

int main()
{
    int local_int = 4;
    printf("static_int %d\nconst int %d\nglobal_int %d\nlocal_int %d\n", static_int, const_int, global_int, local_int);
    return 0;
}