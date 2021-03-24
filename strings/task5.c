#include <stdio.h>
#include <string.h>

int main() {
    char s1[]="qwertyqwertyqwerty", sim;
    int i;
    scanf("%c",&sim);
    if (strchr(s1,sim) > 0) s1[strchr(s1,sim)-s1]='*';
    if (strrchr(s1,sim) > 0) s1[strrchr(s1,sim)-s1]='*';
    printf("%s", s1);
    return 0;
}