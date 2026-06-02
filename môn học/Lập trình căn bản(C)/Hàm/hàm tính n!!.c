/*==========================================================
Viết hàm tính n!! (0<=n<=25) theo công thức sau:
n!!=1*3*5*...*n, n lẻ; 2*4*6*...*n, n chẵn
Khuôn dạng (Prototype)

Tên hàm (function name): Factorial2
Tham số (parameters):
n  - kiểu int
Kiểu trả về (return type): long long
Thân hàm (Body)

Áp dụng công thức trên để tính giá trị của n!!
==========================================================*/

long long Factorial2(int n){
    int i;
    long long fac=1;
    if (n%2==0){
        for (i=2;i<=n;i+=2){
            fac*=i;
        }
    }
    else{
        for (i=3;i<=n;i+=2){
            fac*=i;
        }
    }
    return fac;
}
