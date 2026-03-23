/*
Write a recursive function to find the Greatest Common Divisor (GCD) of two numbers a and b.

Prototype

function name: GCD
parameters: two integers a and b (0 <= |a|, |b| <= 10^6)
return type: int
Body

compute the greatest common divisor of a and b.
*/

#include <stdlib.h>
int GCD(int a, int b){
    a=abs(a);
    b=abs(b);
    if (b==0) return a;
    return GCD(b, a%b);
}


//ước chung lớn nhất không âm
