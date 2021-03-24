#include <stdio.h>

int main() {
    int a=2, b=7, c;
    int *a1, *b1, *c1;
    a1 = &a;
    b1 = &b;
    c1 = &c;
    *c1 = *a1 + *b1;
    printf("%d", *c1);
    return 0;
}