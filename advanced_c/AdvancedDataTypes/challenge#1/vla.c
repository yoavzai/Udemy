#include <stddef.h> //size_t
#include <stdio.h> //printf, scanf

// write sum of numbers in array using variable length array

double VlaSum(size_t num_of_elem, double vla[num_of_elem]) {
    double total = 0;
    for (size_t i = 0; i < num_of_elem; ++i)
    {
        total += vla[i];
    }
    return total;
}

int main() {
    size_t num_of_elem = 0;
    printf("enter number of element: ");
    scanf("%zd", &num_of_elem);
    double numbers[num_of_elem];
    printf("enter numbers. after each number press 'enter'\n");
    for (size_t i = 0; i < num_of_elem; ++i)
    {
        scanf("%lf", &numbers[i]);
    }

    printf("the sum is %lf\n", VlaSum(num_of_elem, numbers));
    return 0;
}