#include<stdio.h>
int main()
{
    int n, k, i;
    for(n=2; n<10000; n++){
        k=1;
    for(i=2; i*i<n+1; i++)
    {
        if(n%i==0)
        {
            k=0;
            break;
        }
    }
    if(k == 1)
    printf("%i ", n);
    }
   
}