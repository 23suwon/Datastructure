#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "my_fraction.h"

static int gcd(int a, int b) {
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    while (b) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}


Fraction reduce(Fraction f) {
    if (f.den == 0) {
        fprintf(stderr, "Error: 분모가 0입니다.\n");
        exit(1);
    }
    
    if (f.den < 0) {
        f.num = -f.num;
        f.den = -f.den;
    }
    int g = gcd(abs(f.num), f.den);
    f.num /= g;
    f.den /= g;
    return f;
}
