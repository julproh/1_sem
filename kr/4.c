#include <stdio.h>

int main() {
    float x, y;
    scanf("%f %f", &x, &y);
    if (y >= x*x-5 && y <= -x*x+3 && x >= -1 ) 
        printf("YES");
    else 
        printf("NO");
    return 0;
}