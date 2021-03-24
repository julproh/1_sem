#include <stdio.h>
int main() {
    int a[3][3] = {0}, sum, i , j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) 
            scanf("%d", &a[i][j]);
    }
    sum = a[0][0]+a[1][1]+a[2][2];
    printf("%d", sum);
    return 0;
}