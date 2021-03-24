#include <stdio.h>
int main() {
    int a[]={4, 2, 3, 6, 9, 0, 1, 5, 7, 8};
    int i, j, el;
    for (i=10; i>0; i--) {
        for (j=0; j<i; j++ ) {
            if (a[j]>a[j+1]) {
                el = a[j+1];
                a[j+1]=a[j];
                a[j]=el;
            }
        }
    };
    for (i=0; i<10; i++) printf(" %d", a[i]);
    return 0;
}