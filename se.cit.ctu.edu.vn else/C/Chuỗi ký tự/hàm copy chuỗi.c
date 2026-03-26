/*==========================================================
Viết hàm copy nội dung của chuỗi này vào chuỗi kia.

Khuôn dạng (Prototype)

Tên hàm (function name): mystrcpy
Tham số (parameters):
char *s1: chuỗi gốc
char *s2: chuỗi copy
Kiểu trả về (return type): void
Thân hàm (Body)

Copy nội dung chuỗi s1 vào chuỗi s2. giả sử chuỗi s2 có đủ chỗ để chứa toàn bộ nội dung chuỗi s1.
==========================================================*/

void mystrcpy(char *s1, char *s2){
    int i=0;
    while (*(s1+i)!='\0'){
        *(s2+i)=*(s1+i);
        i++;
    }
    *(s2+i)='\0'; //i chứ không phải i-1 vì hết vòng lặp đã là cuối
    return;
}