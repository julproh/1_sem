#include <stdio.h>
int main() {
    int a[]={1, 2 ,5 ,6,7, 10};
    int b[]={0, 2, 4, 8, 9};
    int c[11];
    int i, mina, na=0, nb=0, minb;
    mina = a[0];
    minb= b[0];
    for (i=0; i<10; i++) { 
        if ((na<6 )&& (nb<5)) {
        if (mina < minb) {
            c[i]= mina;
            na++;
            mina = a[na];
             printf(" %d", c[i]);
            }
        else {
            c[i] = minb;
            nb++;
            minb = b[nb];  
             printf(" %d", c[i]);
        }
        }
        if (na == 6 && nb<5) {
            c[i] = b[nb];
            nb++;
             printf(" %d", c[i]);
        }
        if (nb == 5 && na<6) {
            c[i] = a[na];
            na++;
             printf(" %d", c[i]);
        }

    }
    return 0;
}