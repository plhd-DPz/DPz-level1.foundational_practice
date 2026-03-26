/*==========================================================
Viết chương trình nhập vào 1 chuỗi từ bàn phím. Hiển thị từng từ của 1 chuỗi lên màn hình, biết khoảng trắng là ký hiệu phân cách giữa các từ.

Đầu vào

Chuỗi đầu vào có tối đa 500 ký tự
Đầu ra

Mỗi từ của chuỗi nhập được hiển thị trên một dòng khác nhau
==========================================================*/

#include <stdio.h>
#include <string.h>
int main(){
    char s[500];
    fgets(s, 500 ,stdin);
    int i=0, len=strlen(s);
    if (s[len-1]=='\n'){
        s[len-1]='\0';
        len--;
    }
    int first=0;
    while (s[i]!='\0'){
        if (first==0 && s[i]==' '){
            i++; //tránh lặp vô hạn khi test chỉ nhập mỗi dấu cách
            continue;
        }
        else first++;
        if (s[i]!=' ') printf("%c", s[i]);
        else{
            if (s[i+1]!=' ') printf("\n");
        }
        i++;
    }
    return 0;
}