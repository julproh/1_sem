#include <stdio.h>
#include <stdlib.h>

void pechat(int **ptr) {
    int i, j;
    for (i=0; i<4; i++) for (j=0;j<2; j++) printf("massive[%d][%d]= %d, adres= %p\n", i, j, *(*(ptr+i)+j), *(ptr+i)+j);
} 

int main() {
    int **ptr, i,j;
    ptr=(int**)malloc(4*sizeof(int*));
    for (i=0; i<4; i++) *(ptr+i)=(int*)malloc(2*sizeof(int));
    for (i=0; i<4; i++) for (j=0;j<2; j++) scanf("%d", *(ptr+i)+j);
    pechat(ptr);
    return 0;
}