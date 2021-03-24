#include <stdio.h>
int main() {
    int n, x1, x2, i, k = 0;
    scanf("%d\n", &n);
    for (i = 0; i <= n-1; i++) {
        scanf("%d", &x1);
        scanf("%d", &x2);
        if (x2 < 0) 
            k++;
    };
    printf("%d", k);
    return 0;
}