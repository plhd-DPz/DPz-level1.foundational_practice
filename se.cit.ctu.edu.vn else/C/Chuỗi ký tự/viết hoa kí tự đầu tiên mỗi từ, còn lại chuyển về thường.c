/*==========================================================
Viết chương trình nhập vào 1 chuỗi từ bàn phím và viết hoa ký tự đầu tiên mỗi từ thành ký tự hoa, các ký tự còn lại là ký tự thường. Biết khoảng trắng là ký hiệu phân cách mỗi từ.

Đầu vào

Chuỗi đầu vào có tối đa 500 ký tự
Đầu ra

Dòng đầu tiên là chuỗi nhập
Dòng thứ 2 là chuỗi kết quả được viết hoa ký tự đầu tiên, các ký tự khác là ký tự thường
==========================================================*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
	char s[500];
	fgets(s,500,stdin);
	int l=strlen(s);
	if (s[l-1]=='\n')
		s[l-1]='\0';
	puts(s);
	int i=0, space=1;
	while (s[i]!='\0'){
		if (space && isalpha(s[i])){
			s[i]=toupper(s[i]);
			space=0;
		}
		else if(isalpha(s[i])){
			s[i]=tolower(s[i]);
		}
		else if (s[i]==' ') space=1;
		i++;
	}
	printf("%s",s);
	return 0;
}