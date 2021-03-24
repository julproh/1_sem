#include <stdio.h>

int main() {
    int a[1001]={0};
    int i,j, k, ch, p=1;
    scanf("%d", &k);
    for (i=0; i<k; i++) {
        scanf("%d",&ch);
        if (a[ch]==0) {
            printf(" %d", ch);
            a[ch] = 1;
        };};
    return 0;
} 