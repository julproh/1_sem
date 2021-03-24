#include <stdio.h>

int main() {
    int i,j, k1 = 0, k2 = 0, d;
    int mas[3] [3] = {{1,1,1,},{2,2,2},{3,3,3}};    
    int a = mas[1][1], b = mas[2][1];
    for (i=0; i<3; i++) {
        for (j=0;j<3; j++) {
            if (a>= mas[i][j]) {a=mas[i][j]; k1=i;};
            if (b<= mas [i][j]) {b=mas[i][j]; k2=i;};
        }
    };
    for (j=0; j<3; j++) {
        d = mas[k1][j];
        mas[k1][j] = mas[k2][j];
        mas[k2][j] = d;
    };
    for (i=0; i<3; i++) {
        for (j=0;j<3; j++) 
        printf("%d", mas[i][j]);
        printf("\n");
    };
    return 0;
}