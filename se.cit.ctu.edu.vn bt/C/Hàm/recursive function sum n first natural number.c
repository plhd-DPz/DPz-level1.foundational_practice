/*
Write a recursive function that computes sum of n first natural numbers i.e. S = 1 + 2 + ... + n.

Prototype

function name: sum
parameters: an integers n (1 <= n <= 105).
return type: long long
Body

compute 1 + 2 + ... n.
*/

long long sum(int n){
    if (n==0) return 0;
    return sum(n-1)+n;
}
