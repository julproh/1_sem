#include <string.h>
#include <stdio.h>

int main() {
    char s1[]="qwerty", s2[5], s3[50];
    int i, k; 
    gets_s(s2);
    if (strstr(s2, s1)>0) {
        for (i=0; i<strlen(s2);i++)
            s1[strstr(s2,s1)-s1+i]=s1[strstr(s2,s1)-s1+strlen(s2)+i];
        strncpy(s3,s1,strlen(strstr(s2,s1)-s1+strlen(s2)));
    }; 
    puts(s3);
    return 0;
}