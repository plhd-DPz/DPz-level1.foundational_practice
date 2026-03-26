/*==========================================================
Viết chương trình đếm số từ trong một chuỗi đầu vào. Biết khoảng trắng là ký hiệu phân cách mỗi từ.

Đầu vào

Chuỗi đầu vào có tối đa 500 ký tự
Đầu ra

Dòng đầu tiên là chuỗi nhập
Dòng thứ 2 là 1 số nguyên ghi số từ trong chuỗi nhập
==========================================================*/

#include <stdio.h>
#include <string.h>
int main(){
	char s[500];
	fgets(s,500,stdin);
	int len=strlen(s);
	if (s[len-1]=='\n')
		s[len-1]='\0';
	puts(s);
	int i,count=0, first=0;
	for (i=1;i<len;i++){
		if ((s[i]!=' ' && s[i-1]==' ')|| first==0){
			count++;
			first=1;
		}
	}
	printf("%d",count);
	return 0;
}