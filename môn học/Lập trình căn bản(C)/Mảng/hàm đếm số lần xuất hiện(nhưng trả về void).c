/*==========================================================
Viết 1 hàm cho phép đếm số lần xuất hiện của giá trị X trong mảng số nguyên A gồm n phần tử.

Khuôn dạng (Prototype)

Tên hàm (function name): countX()
Tham số (parameters):
x - kiểu int
A[] - kiểu int
n - kiểu int (0<=n<=1000)
d - Kiểu con trỏ trỏ đến số nguyên để lưu kết quả là số phần tử x trong  mảng A
Kiểu trả về (return type): void
Thân hàm (Body)

Tiến hành duyệt qua mảng A, mỗi lần gặp một giá trị x thì tăng biến đếm lên.
==========================================================*/

void countX(int x, int a[], int n, int *d){
    int i;
    *d=0;
    for (i=0;i<n;i++){
        if (a[i]==x){
            *d=*d+1;
        }
    }
    return;
}
