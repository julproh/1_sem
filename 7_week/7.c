#include <stdio.h>
int fact(int n) {
    int f=1;
    if (n==1) return f;
    else f=n*fact(n-1);
};
int main() {
    int n,intog;
    scanf("%d", &n);
    printf("%d", fact(n));
    return 0;
}