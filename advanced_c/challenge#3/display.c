#include <stdio.h> //printf

extern int counter;

void display() {
    printf("%d ", counter + 1);
}