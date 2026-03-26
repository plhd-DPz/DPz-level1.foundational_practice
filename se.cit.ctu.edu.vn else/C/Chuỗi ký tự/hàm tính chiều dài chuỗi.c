/*==========================================================
Viết 1 hàm cho biết chiều dài của chuỗi đầu vào là bao nhiêu? Với điều kiện không sử dụng thư viện string.h với hàm strlen().


Khuôn dạng (Prototype)

Tên hàm (function name): Length()
Tham số (parameters):
s[] - kiểu char
Kiểu trả về (return type): int
Thân hàm (Body)

Trả về chiều dài của chuỗi s
==========================================================*/

int Length(char s[]){
    int i=0, len=0;
    while (s[i]!='\0'){
        len++;
        i++;
    }
    return len;
}