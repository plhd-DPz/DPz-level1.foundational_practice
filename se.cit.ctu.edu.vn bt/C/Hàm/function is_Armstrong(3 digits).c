/*
An Armstrong number of three digits is an positive integer such that the sum of the cubes of its digits is equal to the number itself.

Example: 371=33 +73 +13

Write a function that checks whether an integer is an Armstrong number or not.

Prototype

function name: is_Armstrong
parameters: an integer n - the integer to be checked (1000 <= n <= 999)
return type: integer
Body

return 1 if n is an Armstrong number, otherwise return 0.
*/

#include <math.h>
int is_Armstrong(int n){
    int n0=n, sum=0;
    while(n!=0){
        sum+=(int)pow(n%10, 3);
        n/=10;
    }
    if (sum==n0) return 1;
    return 0;
}
