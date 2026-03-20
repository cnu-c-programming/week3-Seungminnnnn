#include <stdio.h>

int call_ccount() {
    static int count = 0;
    return ++count;
}

int main() {
    printf("%d\n", call_ccount());
    printf("%d\n", call_ccount());
    printf("%d\n", call_ccount());

    return 0;
}
