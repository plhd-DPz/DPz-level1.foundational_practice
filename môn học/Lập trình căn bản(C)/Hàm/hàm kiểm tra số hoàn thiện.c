/*==========================================================
Viết hàm kiểm tra số n có phải là số hoàn thiện không.

Khuôn dạng (Prototype)

Tên hàm (function name): isPerfect
Tham số (parameters):
n - số cần kiểm tra, kiểu: int (2<=n<=10^6)
Kiểu trả về (return type): int
Thân hàm (Body)

Nếu n là số hoàn thiện trả về 1
Ngược lại trả về 0.
==========================================================*/

int isPerfect(int n){
    int i, sum=1;
    for (i=2;i<n;i++){
        if (n%i==0){
            sum+=i;
        }
    }
    if (sum==n) return 1;
    return 0;
}
