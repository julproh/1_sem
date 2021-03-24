#include <stdio.h>

int main() {
    int a[4][2]={{2,1},{5,0},{10,4}};
    printf("a %p\n", a);
    printf("&a %p\n", &a);
    printf("a[0] %p\n", a[0]);
    printf("&a[0] %p\n", &a[0]);
    printf("&a[0][0] %p\n", &a[0][0]);
    printf("a+1 %p\n", a+1);
    printf("*a+1 %p\n", *a+1);
    printf("*(a+1) %p\n", *(a+1));
    return 0;
}