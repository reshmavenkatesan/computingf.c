#include <stdio.h>

int main() {
    int a = 1;
    int b = 2;
    int c = 3;

    printf("Before swapping: a=%d, b=%d, c=%d\n", a, b, c);

    a = a + b + c;
    b = a - b - c;
    c = a - b - c;
    a = a - b - c;

    printf("After swapping: a=%d, b=%d, c=%d\n", a, b, c);

    return 0;
