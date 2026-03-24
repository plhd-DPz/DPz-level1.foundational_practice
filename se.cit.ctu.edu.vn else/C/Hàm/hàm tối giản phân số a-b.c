/*==========================================================
Viết hàm tối giản phân số a/b và in ra phân số tối giản.

Khuôn dạng (Prototype)

Tên hàm (function name): reduce
Tham số (parameters):
a - tử số, kiểu: int
b - mẫu số, kiểu: int (
)
Kiểu trả về (return type): không
Thân hàm (Body)

Tối giản phân số a/b và in phân số tối giản theo mẫu: a/b = u/v, với u/v là phân số tối giản của phân số a/b.
==========================================================*/

void reduce(int a, int b){
    int r, a0=a, b0=b;
    while(b!=0){
        r=a%b;
        a=b;
        b=r;
    }
    //a là gcd
    printf("%d/%d = %d/%d", a0, b0, a0/a, b0/a);
    return;
}
