#include <stdio.h>

int fiban(int n){
    int f;
    if (n==1 || n==2) f = 1;
    else f = fiban(n-1)+fiban(n-2);
    return f;
    };
int main() {
    int n, i;
    scanf("%d", &n);
    printf("%d", fiban(n));
    return 0;
}