/*==========================================================
Số chính phương là số là cân bậc 2 của một số tự nhiên (hay là bình phương của 1 số tự nhiên). Viết hàm cho phép kiểm tra số nguyên dương n đầu vào có là số chính phương hay không?

   Ví dụ:   9  là số chính phương vì 

              10 không là số chính phương vì 
 


Khuôn dạng (Prototype)

Tên hàm (function name): isSquareNumber()
Tham số (parameters):
n - số cần kiểm tra, kiểu: int (
)
Kiểu trả về (return type): int
Thân hàm (Body)

Nếu n là số chính phương, kết quả trả về là 1, ngược lại kết quả trả về là 0
==========================================================*/

#include <math.h>
int isSquareNumber(int n){
    int r=sqrt(n);
    if (r*r==n) return 1;
    return 0;
}
