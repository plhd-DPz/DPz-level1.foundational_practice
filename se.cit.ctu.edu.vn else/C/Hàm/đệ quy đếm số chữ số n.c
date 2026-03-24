/*==========================================================
Viết hàm đệ quy đếm số chữ số của số nguyên dương n > 0.

Khuôn dạng (Prototype)

Tên hàm (function name): count
Tham số (parameters):
n - kiểu int (n > 0)
Kiểu trả về (return type): int
Thân hàm (Body)

Tìm số chữ số của n.
==========================================================*/

int count(int n){
    if (n==0) return 0;
    return count(n/10)+1;
}
