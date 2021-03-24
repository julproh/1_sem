#include <stdio.h>
#include <stdlib.h>
int main(){
    int l = 0, n;
    scanf("%i", &n);
    while(n > 0)
    {
        l = 10 * (l + n % 10);
        n = n / 10;
    }
    printf("%i", l/10);
}
