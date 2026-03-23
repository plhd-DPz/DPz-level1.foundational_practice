/*
Viết hàm đệ quy để tìm chữ số thứ k của số nguyên dương (theo thứ tự từ phải sang trái). 
Chữ số ở hàng đơn vị là là chữ số thứ 0, chữ số ở hàng chục là chữ số thứ 1, ...

Ví dụ: n = 12345

Chữ số thứ 0 là 5
Chữ số thứ 1 là 4
...
Chữ số thứ 4 là 1


Khuôn dạng (Prototype)

Tên hàm (function name): kth_digit
Tham số (parameters):
n - kiểu int
k - kiểu int
Kiểu trả về (return type): int
Thân hàm (Body)

Tìm và trả về chữ số thứ k của số n (tính từ phải sang trái).
*/

int kth_digit(int n, int k){
    if (k==0) return n%10;
    return kth_digit(n/10, k-1);
}
