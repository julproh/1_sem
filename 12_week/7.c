#include <stdlib.h>
#include <stdio.h>

int main() {
    int **ptr, i, j,k, **max1, **max2, **min1, **min2, min=100000, max=-1000000, sum;
    ptr=(int**)malloc(6*sizeof(int*));
    for(i=0; i<6; i++) *(ptr+i)=(int*)malloc(2*sizeof(int));
    for (i=0; i<6; i++) for (j=0;j<2; j++) scanf("%d", *(ptr+i)+j);
    for (i=0; i<6; i++) {
        for (j=i+1; j<6; j++) {
            for (k=0; k<2; k++) sum+=(*(*(ptr+i)+k))*(*(*(ptr+j)+k));
        
        if (sum > max) {max = sum; max1=ptr+i; max2=ptr+j;};
        if (sum< min) {min = sum; min1=ptr+i; min2=ptr+j;};};
    } ;
    printf("max1");
    for (j=0; j<2; j++) printf(" %d", *(*max1+j));
    printf("\n");
    printf("max2");
    for (j=0; j<2; j++) printf(" %d", *(*max2+j));
    printf("\n");
    printf("min1");
    for (j=0; j<2; j++) printf(" %d", *(*min1+j));
    printf("\n");
    printf("min2");
    for (j=0; j<2; j++) printf(" %d", *(*min2+j));
    return 0;
}