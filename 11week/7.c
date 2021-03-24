#include <stdio.h>
int main() {
  char a[5]={'r', 'e','w','q','p'};
  int i, *i1, *ii;
  i1=a;
  ii=a;
  for (i=0; i<5; i++) {
    printf("%c %p\n", a[(i1-ii)/sizeof(char)], &a[i1-ii]);
    i1+=1;
  }
  return 0;
}