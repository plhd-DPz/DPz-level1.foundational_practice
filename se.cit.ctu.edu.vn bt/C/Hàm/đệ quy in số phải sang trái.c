/*
Viết hàm đệ quy để in các chữ số của số nguyên theo thứ tự từ phải sang trái.

Khuôn dạng (Prototype)

Tên hàm (function name): in_nguoc
Tham số (parameters):
n - Số cần in, kiểu int
Kiểu trả về (return type): void
Thân hàm (Body)

In các chữ số của n theo thứ tự từ phải sang trái, mỗi chữ số cách nhau 1 khoảng trắng.


Chú ý

Giá trị của các tham số luôn hợp lệ, không cần kiểm tra.
Chỉ viết hàm, KHÔNG VIẾT TOÀN BỘ CHƯƠNG TRÌNH
Phải sử dụng đệ quy, không được dùng vòng lặp for, while, ...
Xem thêm chi tiết trong phần For example.
*/

void in_nguoc(int n){
    if (n==0) return;
    printf("%d ",n%10);
    in_nguoc(n/10);
}
