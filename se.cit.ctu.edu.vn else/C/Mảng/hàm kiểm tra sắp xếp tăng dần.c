/*
Viết 1 hàm cho phép kiểm tra n số nguyên đầu vào (0<=n<=1000) có được sắp xếp tăng dần hay không?

Khuôn dạng (Prototype)

Tên hàm (function name): isSort()
Tham số (parameters):
A[] - kiểu int
n - kiểu int
Kiểu trả về (return type): int
Thân hàm (Body)

Nếu mảng A tăng dần, kết quả của hàm là 1, ngược lại kết quả là 0
*/

int isSort(int a[], int n){
    for (int i=1;i<n;i++){
        if (a[i]<a[i-1]){
            return 0;
        }
    }
    return 1;
}
