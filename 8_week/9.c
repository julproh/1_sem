#include <stdio.h>

int main() {
    int i=0, j;
    char str[100], c;
    FILE *fp;
    fp = fopen("fael.txt", "r");
    while ((c =fgetc(fp))!=EOF)
    {
        str[i]=c;
        i++;
    }
    fclose(fp);
    for(j+0;j<i;j++) printf("%c", str[j]);
    return 0;
}