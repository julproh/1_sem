#include <stdio.h>
#define N 100
struct _Decimal {
    char a[N];   // number is a[0]*10^0 + a[1]*10^1 + ..+ a[n]*10^n
    unsigned int n;       // наибольшая степень десяти
};
typedef struct _Decimal Decimal;

Decimal zero = {{0}, 0};    // представление 0 в виде структуры

void set (Decimal * res, const char * str){
    res->n = 0;
    while (str[res->n] <= '9' && str[res->n]>='0') {
        res -> a[res->n] = str[res->n];   
        res->n++;
    };
}

int main(){
    Decimal res;
    set(&res, "12345678901234567890   ");  // res = 12345678901234567890
    return 0;
}
