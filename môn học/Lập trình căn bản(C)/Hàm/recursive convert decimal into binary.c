/*==========================================================
Write a recursive function that converts a decimal number into a binary number and prints the binary number.

Prototype

function name: dec2bin
parameters:
an integer n - the number (1 <= n <= 64)
return type: none
Body

recursively print the binary bits of n.
==========================================================*/

void dec2bin(int n){
    if (n==0) return;
    dec2bin(n/2);
    printf("%d", n%2);
}
