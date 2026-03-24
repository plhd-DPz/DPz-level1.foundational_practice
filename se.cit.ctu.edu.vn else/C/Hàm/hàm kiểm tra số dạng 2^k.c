/*==========================================================
Viết một hàm kiểm tra 1 số nguyên dương có ở dạng 
 hay không?

Khuôn dạng (Prototype)

Tên hàm (function name): isPower2
Tham số (parameters):
n - số cần kiểm tra, kiểu: int (1<=n<=10^6)
Kiểu trả về (return type): int
Thân hàm (Body)

Nếu n ở dạng  
  trả về 1
Ngược lại trả về 0.
==========================================================*/

int isPower2(int n){
    int a=1, k=0;
    while (a<n){
        a*=2;
        k++;
    }
    if (a==n) return 1;
    return 0;
}
