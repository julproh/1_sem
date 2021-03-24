#include <stdio.h>
#include <stdlib.h>
#include <time.h>
enum masti {
    CLUBLS,
    SPADES,
    HEARTS,
    DIAMOND
    };
enum znach {
    SIX = 6,
    SEVEN,
    EIGHT,
    NINE,
    TEN,
    JACKS,
    QUEEN,
    KING,
    ACE
};
struct cards
{
    enum masti mastcard;
    enum znach cifri;
};


int main() {
    int i, n1, n2, a, j, s;
    struct cards karti[3];
    srand(time(NULL));
    for (i=0; i<3; i++) {
        karti[i].mastcard = rand()%4;
        karti[i].cifri = rand()%9+6;
        if (karti[i].mastcard == 0) printf ("clubls ");
        if (karti[i].mastcard == 1) printf ("spades ");
        if (karti[i].mastcard == 2) printf ("hearts ");
        if (karti[i].mastcard == 3) printf ("diamond ");
        printf("%d\n", karti[i].cifri);};
    printf("name card and choose card position from one to three\n");
    scanf(" %d %d %d", &s, &j, &i);
    n1 = rand()%3;
    n2 = rand()%3;
    a = karti[n1].mastcard;
    karti[n1].mastcard = karti[n2].mastcard;
    karti[n2].mastcard = a;
    a = karti[n1].cifri;
    karti[n1].cifri = karti[n2].cifri;
    karti[n2].cifri = a;
    if (karti[i-1].mastcard == s && karti[i-1].cifri == j ) printf("You are right");
    else printf("You are wrong");
    return 0;
}