/*==========================================================
Viết chương trình nhập vào n số nguyên và sắp xếp các số nguyên đã nhập tăng dần

Đầu vào

Dòng đầu tiên là n - số lượng các số nguyên (0 < n 
 1000).
Dòng thứ hai chứa n số nguyên, mỗi số cách nhau khoảng trắng
Đầu ra

Dòng đầu tiên là n số nguyên đã nhập, mỗi số cách nhau khoảng trắng
Dòng thứ 2 là n số nguyên đã được sắp xếp theo thứ tự tăng
==========================================================*/

#include <stdio.h>
int main(){
	int n,i, j;
	scanf("%d",&n);
	int a[n];
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	for (i=0;i<n;i++){
		for (j=i+1;j<n;j++){
			if (a[j]<a[i]){
				int temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
	printf("\n");
	for (i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}