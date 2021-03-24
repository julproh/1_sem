#include <stdio.h>
int main() {
    int a, i;
    FILE*fp;
    fp = fopen("chitat", "r");
    for (i = 0; i<10; i++) {
        fscanf(fp, "%d ", &a);
        printf("%d ", a);}
    return 0;
}