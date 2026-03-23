/*
Viết hàm đệ quy để in các chữ số của số nguyên n theo thứ tự từ trái sang phải

Khuôn dạng (Prototype)

Tên hàm (function name): in_xuoi
Tham số (parameters):
n - Số cần in, kiểu int
Kiểu trả về (return type): void
Thân hàm (Body)

In các chữ số của n theo thứ tự từ trái sang phải, mỗi chữ số cách nhau 1 khoảng trắng.
*/

void in_xuoi(int n){
    if (n==0) return;
    in_xuoi(n/10);
    printf("%d ",n%10);
}
