#include <stdio.h>

int main() {
    int a[10000], n, i;
    scanf("%d", &n);
    for (i = 0; i <= n-1; i++) 
        scanf(" %d", &a[i]);
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    for (i = 0; i < n; i++) 
        printf("%d ", a[i]);
    return 0;
}