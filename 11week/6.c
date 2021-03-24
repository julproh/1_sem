#include <stdio.h>

int foo(int *a1, int *b1) {
    int c, d;
    c = *a1+*b1;
    d= *a1-*b1;
    *a1= c;
    *b1=d;
    return 0;
}
int main () {
    int a=11, b=43, c;
    int *a1, *b1, *c1;
    a1=&a;
    b1 = &b;
    foo(a1, b1);
    printf("summ %d diff %d", *a1, *b1);
    return 0;
}