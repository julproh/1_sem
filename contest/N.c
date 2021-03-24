#include <stdio.h>

int main() {
    char c;
    int k = 0, z;
    c = getchar();
    z = c-'0';
    while (('0'-'0' <= z) && (z <= '9'-'0'))
    {
        k = k + z % 3; 
        c = getchar(); 
        z = c-'0';  
    }
    if (k % 3 == 0) {
        printf("YES");
    }
    else 
        printf("NO");
    return 0;
}