/*
Write a recursive function that computes an = a * a * ... * a (the product of multiplying n a's).

Example:

23    = 8
34    = 81
210   = 1024
Prototype

function name: power
parameters:
a - the base, type: float (0 <= |a| <= 5)
n - the exponent, type: int (0 <= n <= 10)
return type: double
Body

recursively compute an- the nth power of a.
*/

double power(float a, int n){
    if (n==0) return 1;
    return power(a, n-1)*a;
}
