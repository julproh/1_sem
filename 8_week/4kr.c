#include <stdio.h>
int main() {
    int a, b;
    FILE *fp;
    fp = fopen("input.txt", "r");
    fscanf(fp, "%d", &a);
    fscanf(fp, "%d", &b);
    fclose(fp);
    fp = fopen("output.txt", "w");
    fprintf(fp, "%d", a-b);
    fclose(fp);
    return 0;
}