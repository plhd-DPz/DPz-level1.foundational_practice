/*
Viết hàm đệ quy tính tổng: 1+ 1/2 + 1/3 + ... +1/n

với n nguyên dương là tham số đầu vào.

Khuôn dạng (Prototype)

Tên hàm (function name): S
Tham số (parameters):
N - kiểu int
Kiểu trả về (return type): double
Thân hàm (Body)

Định nghĩa cách tính tổng S theo đệ quy và viết hàm theo công thức đệ quy này
*/

double S(int n){
    if (n==0) return 0;
    return S(n-1)+1.0/n;
}
