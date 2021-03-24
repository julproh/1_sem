#include <stdio.h>

int main() {
    int s, k, g, s1, k1, g1, cena, den, mor; //g=17s s=29k
    scanf("%d %d %d \n", &g1, &s1, &k1);
    scanf("%d %d %d", &g, &s, &k);
    cena = g1*17*29+s1*29+k1;
    den = g*17*29+s*29+k;
    mor = den/cena;
    printf("%d", mor);
    return 0;
}