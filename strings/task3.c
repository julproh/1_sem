#include <stdio.h>
#include <string.h>

int main() {
    char s1[]="123456789";
    char s2[]="987654321";
    s2[4]=s1[1];
    s2[6]=s1[2];
    s2[7]=s1[3];
    printf("%s", s2);
    return 0;
}