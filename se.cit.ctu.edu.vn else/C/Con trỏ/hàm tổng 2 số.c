/*==========================================================
Viết hàm tính tổng 2 số nguyên.

Khuôn dạng (Prototype)

Tên hàm (function name): add
Danh sách tham số (parameters):
a và b: int
c: con trỏ int
Kiểu trả về (return type): void
Thân hàm (Body)

Tính a + b và lưu kết quả vào ô nhớ mà c trỏ đến
==========================================================*/

void add(int a, int b, int *c){
    *c=a+b;
    return;
}