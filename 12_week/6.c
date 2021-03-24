#include <stdlib.h>
#include <stdio.h>

void pechat(int **ptr) {
    int i, j;
    for (i=0; i<4; i++) for (j=0;j<2; j++) printf("massive[%d][%d]= %d, adres= %p\n", i, j, *(*(ptr+i)+j), *(ptr+i)+j);
} 
int ** videl(int a, int b) {
    int **ptr, i;
    ptr=(int**)malloc(a*sizeof(int*));
    for (i=0; i<a; i++) *(ptr+i)=(int*)malloc(b*sizeof(int));
    return ptr;
}

int main() {
    int **ppp, a, b, i,j;
    scanf("%d %d", &a, &b);
    ppp=videl(a,b);
    for (i=0; i<a; i++) for (j=0;j<b; j++) scanf("%d", *(ppp+i)+j);
    pechat(ppp);
    free(ppp);
    return 0;
}