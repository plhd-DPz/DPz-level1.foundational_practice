/*
Viết chương trình tìm kiếm và thay thế tất cả các giá trị X trong mảng số nguyên A thành giá trị Y.

Đầu vào

Dòng đầu tiên là n - số lượng các số nguyên (0 < n <= 1000).
Dòng thứ hai chứa n số nguyên, mỗi số cách nhau khoảng trắng
Dòng thứ ba là 2 giá trị X,Y; mỗi giá trị cách nhau khoảng trắng
Đầu ra

Dòng đầu tiên là n số nguyên đã nhập, mỗi số cách nhau khoảng trắng
Dòng thứ 2 là các số nguyên sau khi đã thay thế các giá trị X thành Y
*/

#include <stdio.h>
int main(){
	int n, i;
	scanf("%d",&n);
	int a[n];
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int x, y;
	scanf("%d%d",&x,&y);
	for (i=0;i<n;i++){
		printf("%d ",a[i]);
		if (a[i]==x){
			a[i]=y;
		}
	}
	printf("\n");
	for (i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
