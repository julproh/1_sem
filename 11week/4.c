#include <stdio.h>

int foo(int a, int b ){
 printf("%d\n", a+b);
 printf("a %p b %p\n", &a, &b);
 return 0;
}

int main() {
    int a=1, b=3;
    foo(a, b);
    printf("a %p b %p", &a, &b);
    return 0;
}