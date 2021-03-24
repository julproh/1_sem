#include <stdio.h>

int main() {
    int i=1, j=0, k=2, str, st;
    int a[3][3] = {0};
    a[2][1] = 1;
    while (k < 10) {
        if (a[i][j] == 0) {
            a[i][j] = k;
            k++; str = i; st = j;
            if (i == 0) i = 2; else i--;
            if (j == 0) j = 2; else j--;
            if (a[i][j]!=0) {i = str; j = st;}}
        else {
            if (i == 2) i = 0; else i++;
            a[i][j] = k;
            k++;
            str = i; st = j;
            if (i == 0) i = 2; else i--;
            if (j == 0) j = 2; else j--;
            if (a[i][j]!=0) {i = str; j = st;}
            }
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) 
        printf ("%d ", (a[i][j]));
        printf("\n");};
    return 0;
}