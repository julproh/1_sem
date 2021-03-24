#include <stdio.h>

int main() {
    int (*ptr)[4];
    int i, j;
    ptr=(int(*)[4])malloc(3*4*sizeof(int));
    for (i=0; i<3; i++) for (j=0;j<4; j++) scanf("%d", *(ptr+i)+j);
    for (i=0; i<3; i++) for (j=0;j<4; j++) printf("massive[%d][%d]= %d, adres= %p\n", i, j, *(*(ptr+i)+j), *(ptr+i)+j);
    return 0;
}