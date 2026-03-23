/*
Viết hàm kiểm tra tính và trả về bội số chung nhỏ nhất của hai số nguyên a và b.

Khuôn dạng (Prototype)

Tên hàm (function name): LCM
Tham số (parameters):
a, b - hai số cần tính bội chung nhỏ nhất, kiểu: int (1<=a,b<=10^6)
Thân hàm (Body)

Tính và trả về bội số chung nhỏ nhất của a và b.
*/

#include <stdlib.h>
int LCM(int a, int b){
    a=abs(a);
    b=abs(b);
    int r, ba=a, bb=b;  //ba là a gốc, bb là b gốc
    while (b!=0){
        r=a%b;
        a=b;
        b=r;
    }
    return abs(ba*bb)/a;
