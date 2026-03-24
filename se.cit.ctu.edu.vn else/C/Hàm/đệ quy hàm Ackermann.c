/*==========================================================
Cho m, n nguyên dương. Lập hàm đệ quy để tính hàm Ackermann được cho như sau:(công thức trong đề) với (0<=m,n<=4)
Khuôn dạng (Prototype)

Tên hàm (function name): A
Tham số (parameters):
m - kiểu int
n  - kiểu int
Kiểu trả về (return type): int
Thân hàm (Body)

Áp dụng công thức đệ quy trên để tính giá trị của hàm Ackermann
==========================================================*/

int A(int m, int n){
    if (m==0) return n+1;
    if (m>0 && n==0) return A(m-1,1);
    return A(m-1, A(m,n-1));
}

//không được dùng if{} nếu không kết thúc hàm bằng return
//int A(int m, int n){
//    if (m==0) return n+1;
//    if (m>0){
//        if (n==0) return A(m-1,1);
//        return A(m-1, A(m,n-1));
//    }  ->chỗ này warning vì không có return sau '}'
//}
