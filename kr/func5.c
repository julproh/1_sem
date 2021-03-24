#include <stdio.h>

int summa(int a[][3], int b, int c) {
    int i, j, sum = 0;
    for (i = 0; i < b; i++) {
        for (j = 0; j < c; j++) {
            if (a[i][j] > 0) sum += a[i][j];
        }
    }
    return sum;
}
int main() {
    int a[3][3] = {{1,-2,3},{0,8,6},{1, 1, 10}};
    int t;
    t = summa(a,3,3);
    printf("%d", t);
    return 0;
}