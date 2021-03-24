#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int i=1, n=1;
    float x, y, sum=0, e=0.001;
    scanf("%f", &x);
    y=x;
    while (fabs(y)>e) {if (i%2==1) { sum+=y;
        i++;
        n++;
        y = y*(-x)/n;} 
    else {
        i++;
        n++;
        y = y*x/n;
    }
    printf("y= %f\n", fabs(y));
    };
    printf("sinx= %f", sum);
    return 0;
}