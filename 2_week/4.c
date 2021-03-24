#include <stdio.h>
#include <math.h>
int main () {
    int n1, n2, n3;
    double p1, p2, p3, z1, z2, z3, z_1;
    scanf("%d %d %d %lf %lf %lf", &n1, &n2, &n3, &p1, &p2, &p3);
    z1=n1*p1*10.0;
    z2=n2*p2*10.0;
    z3=n3*p3*10.0;
   printf("%lf", (modf(z1,&z1)+modf(z2,&z2)+modf(z3,&z3))/10.0);
    return 0;
} 