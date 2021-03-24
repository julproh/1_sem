#include <stdio.h>

int main() {
    int i, j, k=2, n= 5, str, st;
    int a[10][10] = {0};
    a[n-1][n/2] = 1;
    i = n-2;
    j = n/2-1;
    while (k < 26) {
        if (a[i][j] == 0) {
            a[i][j] = k;
            k++; str = i; st = j;
            if (i == 0) i = n-1; else i--;
            if (j == 0) j = n-1; else j--;
            if (a[i][j]!=0) {i = str; j = st;}}
        else {
            if (i == n-1) i = 0; else i++;
            a[i][j] = k;
            k++;
            str = i; st = j;
            if (i == 0) i = n-1; else i--;
            if (j == 0) j = n-1; else j--;
            if (a[i][j]!=0) {i = str; j = st;}
            }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) 
        printf ("%3d ", (a[i][j]));
        printf("\n");};
    return 0;
}