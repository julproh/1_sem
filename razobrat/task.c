#include <stdio.h>

int main() {
    int i,j;
    int mas[3] [3] = {{1,1,1,},{2,2,2},{3,3,3}};
    int newmas[4] = {0};
    for (i=0; i<3; i++) 
    {
        for (j=0; j<3; j++) 
        {
            newmas[i] += mas[i][j];
        };
        newmas[3]+= mas [i][i];
    }
    for (i=0; i<4; i++) printf("%d ", newmas[i]);
    return 0;
}