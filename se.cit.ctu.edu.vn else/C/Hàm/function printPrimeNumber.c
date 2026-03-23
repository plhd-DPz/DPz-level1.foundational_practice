/*
You are given a function

int isPrime(int n);
which checks if n is prime or not.

Write a function that prints prime numbers from a to b (included).

Prototype

function name: printPrimeNumbers
parameters: two integers a, b (2 <= a <= b <= 106).
return type: none
Body

print prime numbers between a and b in one line, separated by a space.
*/

void printPrimeNumbers(int a, int b){
    for (int i=a;i<=b;i++){
        if (isPrime(i)) printf("%d ", i);
    }
    return;
}
