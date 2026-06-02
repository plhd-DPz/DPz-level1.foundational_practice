/*==========================================================
Write a recursive function that computes the number of digits of a number.

Prototype

function name: NumDigits
parameters:
an integer n - the number (1 <= n <= 106)
return type: int
Body

recursively compute the number of digits of n.
==========================================================*/

#include <stdlib.h>
int NumDigits(int n){
    n=abs(n);
    if (n<10) return 1;
    return NumDigits(n/10)+1;
}

//n có thể âm->cần abs
