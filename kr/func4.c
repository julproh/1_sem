#include <stdio.h>
int foo(int a[], int n) {
    int i, k = 0, max = 0;
    for (i = 0; i<n; i++) {
        if (a[i] >= max) max = a[i];
    };
    for (i = 0; i<n; i++) {
        if (a[i]== max) k++;
    }; 
    while (k==1) {
        k = 0;
        for (i = 0; i<n; i++) {
            if (a[i]== max) a[i] = 0;
    };
        max = 0;
        for (i = 0; i<n; i++) {
            if (a[i] >= max) max = a[i];
    };
        for (i = 0; i<n; i++) {
            if (a[i]== max) k++;
    }; 
    };
    return max;
}
int main() {
    int a[]={1,2,3,3,4,1,5};
    int t;
    t = foo(a,7);
    printf("%d", t);
    return 0;
}