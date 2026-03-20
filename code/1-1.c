#include <stdio.h>

int add(int x, int y) {
    return x + y;
}

int sub(int x, int y) {
    return x - y;
}

int mul(int x, int y) {
    return x * y;
}

int div(int x, int y) {
    return x / y;
}

int main(void) {
    int a = 10, b = 5;

    printf("10 + 5 = %d\n", add(a, b));
    printf("10 - 5 = %d\n", sub(a, b));
    printf("10 * 5 = %d\n", mul(a, b));
    printf("10 / 5 = %d\n", div(a, b));

    return 0;
}
