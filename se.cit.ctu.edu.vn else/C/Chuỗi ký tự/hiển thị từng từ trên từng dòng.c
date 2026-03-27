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
    fgets(s,500,stdin);
    int len=strlen(s);
    if (s[len-1]=='\n'){
        s[len-1]='\0';
        len--;
    }
    int i, space=1;  //space=1 là cách xử lí nhanh việc in thừa \n nếu test nhập dấu cách trước
    for (i=0;i<len;i++){
        if (s[i]==' ') space++;  //đếm số lượng space liên tiếp nhau
        else space=0;
        if (!space) printf("%c",s[i]);  //không phải space thì in kí tự đó ra
        else if (space==1) printf("\n");  //đảm bảo rằng chỉ có space đầu tiên in xuống dòng
    }
    return 0;
}