/*==========================================================
Viết chương trình nhập vào 1 chuỗi từ bàn phím và xóa các khoảng trắng không cần thiết ở đầu, cuối và ở giữa chuỗi. Chuỗi kết quả là chuỗi chỉ có 1 khoảng trắng phân cách giữa các từ.

Đầu vào

Chuỗi đầu vào có tối đa 500 ký tự
Đầu ra

Dòng đầu tiên là chuỗi nhập
Dòng thứ 2 là chuỗi kết quả được xóa các khoảng trắng không cần thiết
==========================================================*/

#include <stdio.h>
#include <string.h>
void xoakt(char s[], int p){
    while (s[p]!='\0'){
        s[p]=s[p+1];
        p++;
    }
    return;
}
int main(){
    char s[500];
    fgets(s, 500, stdin);
    int len=strlen(s);
    if (s[len-1]=='\n'){
        s[len-1]='\0';
        len--;
    }
    puts(s);
    while (s[0]==' ') xoakt(s,0);
    int i=0;
    while (s[i]!='\0'){        
        if (s[i]==' ' && s[i+1]==' '){ 
            xoakt(s, i);
            i--; //giữ vị trí i vì kí tự đã dồn về phía trước
        }
        i++;
    }
    if (s[len-1]==' ') xoakt(s,len-1);
    printf("%s",s);
    return 0;
}