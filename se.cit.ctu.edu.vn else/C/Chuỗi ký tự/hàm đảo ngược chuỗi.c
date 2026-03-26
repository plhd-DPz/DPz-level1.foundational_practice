/*==========================================================
Viết 1 hàm cho phép đảo ngược chuỗi đầu vào

Khuôn dạng (Prototype)

Tên hàm (function name): reverse()
Tham số (parameters):
s[] - kiểu char
Kiểu trả về (return type): void
Thân hàm (Body)

Cho phép đảo ngược chuỗi đầu vào
==========================================================*/

#include <string.h>
void reverse(char st[]){
    int len=strlen(st);
    for (int l=0,r=len-1;l<r;l++,r--){  //dùng two pointers
        int temp=st[l];
        st[l]=st[r];
        st[r]=temp;
    }
    return;
}