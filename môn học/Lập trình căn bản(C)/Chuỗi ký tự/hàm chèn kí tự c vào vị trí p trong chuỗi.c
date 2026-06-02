/*==========================================================
Viết 1 hàm cho phép chèn ký tự c vào vị trí p trong chuỗi st

Khuôn dạng (Prototype)

Tên hàm (function name): Insert()
Tham số (parameters):
st[] - kiểu char
c - kiểu char
p - kiểu int
Kiểu trả về (return type): void
Thân hàm (Body)

Cho phép chèn ký tự c vào vị trí p trong chuỗi st
==========================================================*/

#include <string.h>
void Insert(char st[], char c, int p){
    int i, len=strlen(st);
    for (i=len-1;i>=p;i--){
        st[i+1]=st[i];
    }
    st[p]=c;
    return;
}

//phải dời ngược từ len-1 về p vì nếu dời chữ xuôi thì sẽ bị ghi đè
//vd: nếu chạy vòng lặp từ p đến len với a[p]=a, a[p+1]=b
//               lúc chạy vòng lặp 1 thì a[p+1] thành a, b biến mất
//      rồi khi chạy vòng lặp 2 thì a[p+2] cũng thành a do copy a[p+1]