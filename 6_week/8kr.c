#include <stdio.h>

typedef struct IMP {
        int m;
        int v;
} imp;
//int cmp(const void* p1, const void* p2)
//{
  //  *(struct IMP*)p1
    //if(*(struct IMP*)p1->m * *(struct IMP)p1->v )}
int main() {
    imp a [10000];
    int b [10000], n, i, j, c, d, el;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf ("%d %d", &a[i].m, &a[i].v);
        b[i] = a[i].m * a[i]. v;
    }
    
    for (i = 0; i<n; i++)
    {
        for (j = 0; j < n; j++ )
            if (b[j] >= b[i])
            {
                el = b[i];
                b[i] = b[j];
                b[j] = el;
                c = a[i].m;
                d = a[i].v;
                a[i].m = a[j].m;
                a[i].v = a[j].v;
                a[j].m = c;
                a[j].v = d;
            }
        
    }
    for (i = 0; i < n; i++) 
        printf("%d %d\n", a[i].m, a[i].v);
    return 0;
}