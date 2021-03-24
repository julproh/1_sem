#include <stdio.h>

int main () {
    int i, j, k, l, max= 0;
    int a[3][3]={{1,2, 3},{0,7,5},{0,8,10}};
    int min = a[2][2];
    for (i=0; i<3; i++) {
        for (j = 0; j <3; j++) {
                if (min >= a[i][j]) {
                 min = a[i][j]; 
                 k=j;
            };
        if (max<min) max= min;  l = i;};    
    };
    printf("%d %d %d", max,k, l);
    return 0;
}