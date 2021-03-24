#include <stdio.h>
int main() {
    char a;
    FILE*fp;
    fp = fopen("chitat2", "r");
    while (!feof(fp)) {
        a = getc(fp);
        printf("%c ", a);}
    return 0;
}