/*==========================================================
Viết 1 hàm so sánh 2 chuỗi đầu vào (không phân biệt hoa thường). Lưu ý không sử dụng hàm strmp() của thư viện string.h


Khuôn dạng (Prototype)

Tên hàm (function name): Compare()
Tham số (parameters):
s1[] - kiểu char
s2[] - kiểu char
Kiểu trả về (return type): int
Thân hàm (Body)

Nếu s1 < s2: kết quả trả về là một số nguyên âm nào đó
Nếu s1 > s2: kết quả trả về là một số nguyên dương nào đó
Nếu s1 = s2: kết quả trả về là 0
==========================================================*/

#include <ctype.h>
int Compare(char s1[], char s2[]){
    int d=0, i=0;
    while (s1[i]!=0 && s2[i]!=0 && d==0){
        d=tolower(s1[i])-tolower(s2[i]);
        i++;
    }
    if(d != 0) return d;
    return tolower(s1[i])-tolower(s2[i]);
}

//đề nói không phân biệt hoa/thường ->phải dùng tolower() để tính
//biến d dùng để kiểm soát việc khác nhau giữa chuỗi
//nếu while dừng vì hết chuỗi '\0' 
//thì phải check xem 2 chuỗi có dài bằng nhau không bằng cách return tolower(s1[i])-tolower(s2[i]);
//vì nếu không thì sẽ lỗi nếu so 2 chuỗi vd như "abc" so với "abcd"