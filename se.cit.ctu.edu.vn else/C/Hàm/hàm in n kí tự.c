/*==========================================================
Viết hàm để in n ký tự c ra màn hình.

Khuôn dạng (Prototype)

Tên hàm (function name): print_c
Tham số (parameters):
c - Ký tự cần in, kiểu char.
n - kiểu int.
Kiểu trả về (return type): không có
Thân hàm (Body)

In n ký tự c liên tiếp nhau ra màn hình.
==========================================================*/

void print_c(char c,int n){
    int i;
    for (i=0;i<n;i++){
        printf("%c",c);
    }
    return;
}
