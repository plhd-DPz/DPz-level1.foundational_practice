/*==========================================================
Viết hàm xác định trị tuyệt đối của một số nguyên.

Khuôn dạng (Prototype)

Tên hàm (function name): my_abs
Danh sách tham số (parameters):
a : int
b: con trỏ int
Kiểu trả về (return type): void
Thân hàm (Body)

b sẽ lưu trị tuyệt đối của a
==========================================================*/

void my_abs(int a, int *b){
    if (a<0) *b=-a;
    else *b=a;
    return;
}