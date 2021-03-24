#include <stdio.h>
#include <string.h>

int main() {
    char s1[]="qwerty";
    char s2[]="zxcvbn";
    if (strncmp(s1, s2, 3) == 0)  printf("yes");
    else printf("no");
    return 0;
}