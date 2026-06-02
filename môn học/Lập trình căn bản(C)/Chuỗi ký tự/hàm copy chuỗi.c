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


//dưới đây là 1 hướng giải nhanh bài này, chỉ để tham khảo thôi chứ khó hiểu hơn cách trên

//void mystrcpy(char *s1, char *s2){
//   while ((*s2++=*s1++) != '\0');   //*s2, *s1 tăng dần, copy cho đến khi đã copy \0
//    return;                         //while với lệnh trong điều kiện nên ; ở cuối
//}