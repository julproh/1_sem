#include <stdio.h>
#include <string.h>

int main() {
    char s1[10], s2[10];
    scanf("%s", s1);
    scanf("%s", s2);
    strcat(s1,s2);
    printf("%s\n", s1);
    printf("%ld", strlen(s1));
    return 0;
}