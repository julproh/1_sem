#include<stdio.h>
int main(int argc, char**argv)
{
    int x,i,a=1, k=1, n = 0;
    for(i=1;i<argc;i++){
        sscanf(argv[i], "%d ", &x);
        a*=x;}
return a;
}