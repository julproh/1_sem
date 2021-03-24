#include <stdio.h>
#include <string.h>

int main() {
    char s1[]="1234567893", s2[]="0987654321";
    int i;
    scanf("%d", &i);
    s1[strchr(s1, s2[i-1])-s1]='*';
    printf("%s", s1);
    return 0;
}