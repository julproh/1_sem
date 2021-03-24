#include <stdio.h>
int main() {
    int a[]={4, 2, 3, 6, 9, 0, 1, 5, 7, 8};
    int i, j, min,n;
    for (i=0;i<10; i++) {
        min = a[i];
        for (j=i; j<10; j++) {
            if (a[j]<min) { 
                min = a[j]; 
                n = j;
        };
        }
        if (a[n]<a[i]){
        a[n] = a[i];
        a[i] = min;}
    };
    for (i=0; i<10; i++) printf(" %d", a[i]);
    return 0;
}