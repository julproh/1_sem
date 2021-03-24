#include <stdio.h>
struct student
{
    char sname[50], name[50];
    int group, year, ball[5]; 
};

int main() {
    int i, k=0;
    struct student first = {"Ignatov","Ivan", 901, 2001, {5, 3, 4, 5, 5} };
    struct student second = {"Petrova", "Olga", 902, 2001, {4, 5, 2, 3, 5}};
    struct student third = {"Tsvetochkin", "Andrey", 905, 2000, {5, 5, 5, 5, 5}};
    struct student last;
    scanf("%s %s %d %d", &last.sname, &last.name, &last.group, &last.year);
    for (i=0; i<5; i++) {scanf("%d", &last.ball[i]);};
    for (i=0; i<5; i++) {if (last.ball[i] != 5) k = 1;}; 
    if (k == 1)
        printf("%s %c. has only exelent marks\n", last.sname, last.name[0]);
    k=0;
    for (i=0; i<5; i++) {
        if (first.ball[i] != 5) k = 1;}; 
    if (k == 1) 
        printf("%s %c. has only exelent marks\n", first.sname, first.name[0]);
    k=0;
    for (i=0; i<5; i++) {
        if (second.ball[i] != 5) k = 1;}; 
    if (k == 1) 
        printf("%s %c. has only exelent marks\n", second.sname, second.name[0]);
    k=0;
    for (i=0; i<5; i++) {
        if (third.ball[i] != 5) k = 1;}; 
    if (k == 1)
        printf("%s %c. has only exelent mark\n", third.sname, third.name[0]);
    if (first.year == last. year) printf("%s \n", first.sname);
    if (second.year == last. year) printf("%s\n", second.sname);
    if (third.year == last. year) printf("%s\n", third.sname);
    return 0;
}