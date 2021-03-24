#include <stdio.h>
int main() {
    int a[]={4, 2, 3, 6, 9, 0, 1, 5, 7, 8};
    int i, j, el, ch;
    for (i=1; i<10; i++) {
        el=a[i]; 
        j=i;
        while (j>0 && a[j-1]> el) {
            ch = a[j-1];
            a[j-1]=a[j];
            a[j]=ch;
            j--;
        };
    };
    for (i=0; i<10; i++) printf(" %d", a[i]);
    return 0;
}