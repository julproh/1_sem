#include <stdio.h>

int main() {
    int labirint[40][40];
    int i,j;
    for (i=0;i<40;i++) {
        for (j=0; j<40; j++) 
            scanf("%d", labirint[i][j]);
    };
    scanf("%d %d", i, j);
    if (i==0 && j==0 || i==39 && j==39) {printf("vihod"); exit(0);};
    if (i>0 && j==39 && labirint[i][j-1]==1 && labirint[i-1][j]==1 || )
    return 0;

}