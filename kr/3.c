#include <stdio.h>

int main() {
    int n, m;
    FILE * f = fopen("input.txt","rn");
    fscanf(f, "%d", &n); 
    fscanf(f, "%d", &m);
    fclose(f);
    FILE * o = fopen("output.txt", "w");
    fprintf(o,"%d", n-m);
    fclose(o);
    return 0;
}