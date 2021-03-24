#include <stdio.h>

int main() {
    int a[4][2];
    int (*ptr)[2];
    int i, j;
    ptr = a;
    for(i=0; i<4; i++) for (j=0; j<2; j++) scanf("%d", *(ptr+i)+j);
    for(i=0; i<4; i++) for (j=0; j<2; j++) printf("a[%d][%d]= %d, &a= %p\n", i, j, *(*(ptr+i)+j), *(ptr+i)+j);
    return 0;
}