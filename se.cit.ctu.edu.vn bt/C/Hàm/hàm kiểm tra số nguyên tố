/*
Viết hàm kiểm tra số n có phải là số nguyên tố không.

Khuôn dạng (Prototype)

Tên hàm (function name): isPrime
Tham số (parameters):
n - số cần kiểm tra, kiểu: int (1<=n<=10^6)
Kiểu trả về (return type): int
Thân hàm (Body)

Nếu n là số nguyên tố trả về 1
Ngược lại trả về 0.
*/

#include <math.h>
int isPrime(int n){
    if (n<2) return 0;
    for (int i=2;i<=sqrt(n);i++){
        if (n%i==0){
            return 0;
        }
    }
    return 1;
}

//lưu ý trường hợp n<2
