/*
Viết chương trình nhập vào n số nguyên và cho biết giá trị lớn nhất, giá trị nhỏ nhất trong mảng

Đầu vào

Dòng đầu tiên là n - số lượng các số nguyên (0 < n <= 1000).
Dòng thứ hai chứa n số nguyên, mỗi số cách nhau khoảng trắng
Đầu ra

Dòng đầu tiên là n số nguyên đã nhập, mỗi số cách nhau khoảng trắng
Dòng thứ 2 là giá trị nhỏ nhất và giá trị lớn nhất, mỗi giá trị cách nhau khoảng trắng
*/

#include <stdio.h>
#include <limits.h>
int main(){
	int n, i;
	scanf("%d",&n);
	int a[n];
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int max=INT_MIN, min=INT_MAX;
	for (i=0;i<n;i++){
		printf("%d ",a[i]);
		if (a[i]>max){
			max=a[i];
		}
		if (a[i]<min){
			min=a[i];
		}
	}
	printf("\n%d %d",min, max);
	return 0;
}
