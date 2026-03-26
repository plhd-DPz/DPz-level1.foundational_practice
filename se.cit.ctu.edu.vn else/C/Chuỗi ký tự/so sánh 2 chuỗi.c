/*==========================================================
Viết chương trình nhập vào 2 chuỗi từ bàn phím (mỗi chuỗi có độ dài tối đa 100 ký tự)  và tiến hành so sánh 2 chuỗi dựa vào theo bảng chữ cái

Đầu vào

Dòng 1: chuỗi thứ nhất
Dòng 2: chuỗi thứ hai
Đầu ra

Dòng duy nhất ghi:
         - 1 < 2 nếu chuỗi thứ nhất nhỏ hơn chuỗi thứ 2

         - 1 > 2 nếu chuỗi thứ nhất lớn hơn chuỗi thứ 2

         - 1 = 2 nếu 2 chuỗi giống nhau
==========================================================*/

#include <stdio.h>
#include <string.h>
int main(){
	char a[100],b[100];
	fgets(a,100,stdin);
	fgets(b,100,stdin);
	if (strcmp(a,b)==0){
		printf("1 = 2");
	}
	else if (strcmp(a,b)<0){
		printf("1 < 2");
	}
	else printf("1 > 2");
	return 0;
}