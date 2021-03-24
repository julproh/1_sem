#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, c, i=0, t=1, j;
    int *a;
    FILE *fp;
    fp = fopen("fael.txt", "r");
    fscanf(fp, "%d", &n);
    a = (int *)malloc(n*sizeof(int));
    fscanf(fp, "%d", &c);
    a[i] = c;
    if (c*t<0) t = -1; 
    while(fscanf(fp, "%d", &c)!=EOF)
    {
        if (c*t>0) 
        { 
            a[i] += c;
        }
        else 
        {
            if (c*t == 0) 
            {
                t = 1;
                i++;
                a[i]+=c;
            }
            else 
            {
                if(t == 1) 
                    t = -1;
                else 
                    t = 1;
                i++;
                a[i]+=c;
                }
        }
    }
    for (j=0; j<4; j++) printf("%d ", a[j]);
    fclose(fp);
    return 0;
}