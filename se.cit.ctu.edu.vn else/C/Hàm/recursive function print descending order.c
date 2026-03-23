/*
Write a recursive function that prints the numbers 1...n in descending order.

Prototype

function name: PrintN
parameters:
an integer n - the number (1 <= n <= 50)
return type: none
Body

recursively print the numbers 1, 2, 3, ... n in descending order, one number per line.
*/

void PrintN(int n){
    if (n==0) return;
    printf("%d\n",n);
    PrintN(n-1);
}
