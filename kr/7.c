#include <stdio.h>
int main() {
    int a[1001] = {0};
    int i, n, m = 1, l, recept_id, id;
    unsigned timestamp;
    scanf("%d", &n);
    for (i = 0; i <= n-1; i++) {
        scanf("%iu", &timestamp);
        scanf("%d", &id);
        scanf("%d", &recept_id);
        a[id - 1] = a[id - 1] +1;
    }
    ;
    for (i = 0; i <= 1001; i++) {
        m = i;
        if (a[i] != 0) break;
    }
    ;
    for (i = 1000; i >= 0; i--) {
        l = i;
        if (a[i] != 0) break;
    }
    ;
    for (i = m; i <= l; i++) {
        printf("%d %d\n", i+1, a[i]);
    }
    ;
    return 0;
}