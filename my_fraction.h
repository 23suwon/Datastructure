#ifndef MY_FRACTION_H
#define MY_FRACTION_H


typedef struct {
    int num;  
    int den; 
} Fraction;


Fraction reduce(Fraction f);

Fraction frac_add(Fraction f1, Fraction f2);
Fraction frac_sub(Fraction f1, Fraction f2);
Fraction frac_mul(Fraction f1, Fraction f2);
Fraction frac_div(Fraction f1, Fraction f2);

Fraction str_to_frac(const char* s);

void print_frac(Fraction f);

#endif
