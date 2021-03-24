#include <stdio.h>

 
void hanoy(int n, int from, int on, int k)  
{                                                   
    if (n!= 0) {
        hanoy(n-1, from, k, on);
        printf("from %d to %d\n", from , on);
        hanoy(n-1, k, on, from);
    }
}
 
int main()
{   int n;
    scanf ("%d", &n);
    hanoy(n, 1, 2, 3);
    return 0;
}