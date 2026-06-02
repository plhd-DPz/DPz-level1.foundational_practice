/*==========================================================
Viết chương trình nhập vào n số nguyên và cho biết tổng bình phương các số đã nhập

Đầu vào

Dòng đầu tiên là n - số lượng các số nguyên (0 < n <= 1000).
Dòng thứ hai chứa n số nguyên, mỗi số cách nhau khoảng trắng
Đầu ra

Dòng đầu tiên là n số nguyên đã nhập, mỗi số cách nhau khoảng trắng
Dòng thứ 2 là tổng bình phương các số đã nhập
==========================================================*/

#include <stdio.h>
#include <math.h>
int main(){
	int n,i;
	scanf("%d",&n);
	int a[n];
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	long long sum=0;
	for (i=0;i<n;i++){
		printf("%d ",a[i]);
		sum+=pow(a[i],2);
	}
	printf("\n%lld",sum);
	return 0;
}