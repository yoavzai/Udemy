#include <stdio.h>

int sum(int num) {
    static int total = 0;
    total += num;
    return total;
}

int main() {
    printf("%d ", sum(25));
    printf("%d ", sum(15));
    printf("%d ", sum(30));
    return 0;
}