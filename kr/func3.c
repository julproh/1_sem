#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float sinus(float x) {
    float e = 0.000001;
    float s, k;
    double t;
    k = -x*x*x/6;
    s = x;
    t = s - sin(x);
    int n = 3;
    while ( fabs(k) > e) {
        n = n + 2;
        s = s + k;
        k = (-1)*k*x*x/(n-1)/(n); 
        };
    return s;
}
int main() {
    float x;
    scanf("%f", &x);
    printf("%f", sinus(x) );
    return 0;
}