#include <stdio.h>
struct chisla {
        int d;
        int m;
    };

struct chisla comp(struct chisla a[]) {
    int i;
    struct chisla itog;
    itog.d = 0;
    itog.m = 0;
    for (i = 0; i<5; i++) {
        itog.d += a[i].d;
        itog.m += a[i].m;
    };
    return itog;
    
}

int main() {
    struct chisla a[5] = {{1,1},{2,2},{6,-4},{0,8},{9,1}};
    struct chisla r;
    r = comp(a);
    printf("%d %d", r.d, r.m);
    return 0;
}
