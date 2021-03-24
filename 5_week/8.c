#include <stdio.h>
int main() {
    int a[]={2,4,5,6,3,6,8,9};
    int i, n, p=0;
    for (i=0; i<7; i++) if (a[i]>a[i+1]) p++;
    if (p>0) printf(" neyp %d", p);
    else {
        p=1;
        for (i=0; i<6; i++) p*=a[i]-a[i+1]; 
        printf("yp %d",p);
    }
    return 0;
}