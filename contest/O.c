#include <stdio.h>

int main() {
    int s1 = 0, s2 = 0;
    char c;
    c = getchar();
    while (c=='(' || c==')') {
        if (c == '(') s1 = s1+1;
        else
            s2 = s2+1;
        if (s2 > s1) break;
        c = getchar();
    }
    if (s1 != s2) printf("NO");
    else
        printf("YES");
    printf("%d %d", s1, s2);
    return 0;
}