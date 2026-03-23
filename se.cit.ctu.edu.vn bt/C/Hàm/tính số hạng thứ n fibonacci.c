/*
Viết 1 hàm tính số hạng thứ n (0<=n<=40) của dãy Fibonaci theo công thức sau:

Khuôn dạng (Prototype)

Tên hàm (function name): F
Tham số (parameters):
n - kiểu int
Kiểu trả về (return type): int
Thân hàm (Body)

Tính số hạng thứ n của dãy theo công thức trên bằng đệ quy hoặc vòng lặp

Chỉ viết hàm, KHÔNG VIẾT TOÀN BỘ CHƯƠNG TRÌNH
*/

int F(int n){
    int f0=1, f1=1, next;
    if (n==0) return f0;
    if (n==1) return f1;
    for (int i=2;i<=n;i++){
        next=f0+f1;
        f0=f1;
        f1=next;
    }
    return f1;
}

//bài này bắt đầu từ f0=1, f1=1 chứ không phải f0=0, f1=1
