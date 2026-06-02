/*==========================================================
Write a C function that check whether a number is prime or not.

Prototype

function name: checkPrime
parameters: an integer p - the number to be checked (2 <= p <= 1012).
return type: integer
Body

check whether p is a prime
return 1 if p is a prime, otherwise return 0
==========================================================*/

#include <math.h>
int checkPrime(long long p){
    for (int i=2;i<=sqrt(p);i++){
        if (p%i==0) return 0;
    }
    return 1;
}

//nếu cần dùng math.h thì include vào, mặc định không có
//đọc kĩ giới hạn, dùng sqrt chạy vòng for để không bị tle(chạy quá thời gian giới hạn)
