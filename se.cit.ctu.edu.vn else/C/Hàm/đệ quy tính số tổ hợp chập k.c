/*==========================================================
Viết một hàm đệ quy tính số tổ hợp chập k của n theo công thức sau: (công thức trong bài)

Khuôn dạng (Prototype)

Tên hàm (function name): C
Tham số (parameters):
n - kiểu int
k  - kiểu int
Kiểu trả về (return type): int
Thân hàm (Body)

Áp dụng công thức đệ quy trên để tính số tổ hợp chập k của n phần tử
==========================================================*/

int C(int n, int k){
    if (k==0 || k==n) return 1;
    return C(n-1,k-1)+C(n-1,k);
}
