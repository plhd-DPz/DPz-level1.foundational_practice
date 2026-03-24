/*==========================================================
An Armstrong number of k digits is an positive integer such that the sum of the kth power of its digits is equal to the number itself.

Example:

371=33 +73 +13
1634 = 14 + 64 + 34 + 44
Write a function that checks whether an integer is an Armstrong number or not.

Prototype

function name: is_Armstrong
parameters: an integer n - the integer to be checked (1 <= n <= 999999)
return type: integer
Body

return 1 if n is an Armstrong number, otherwise return 0.
==========================================================*/

int is_Armstrong(int n){
    int n0=n, sum=0, digit=0;
    int temp=n;
    while (temp!=0){
        digit++;
        temp/=10;
    }
    while(n!=0){
        sum+=(int)pow(n%10, digit);
        n/=10;
    }
    if (sum==n0) return 1;
    return 0;
}
