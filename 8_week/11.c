#include <stdio.h>
int main() {
    char str[100];
    int c;
    FILE *fp;
    fp = fopen("fael.txt", "a+");
    // fseek(fp,0,SEEK_END);
    while((c = getc(stdin)) != EOF) {
        fprintf(fp, "%c", c);
    }
    printf("\n\n\n");
    fseek(fp,0, SEEK_SET);
    while ((c = getc(fp)) != EOF)
    {
        printf("%c", c);
    }
    printf("\n");
    fclose(fp);
    return 0;
} 