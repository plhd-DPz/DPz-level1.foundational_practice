/*
Viết chương trình nhập vào n số nguyên và cho biết những số nguyên lẻ trong đã nhập

Đầu vào

Dòng đầu tiên là n - số lượng các số nguyên (0 < n <= 1000) 
Dòng thứ hai chứa n số nguyên, mỗi số cách nhau khoảng trắng
Đầu ra

Dòng đầu tiên là n số nguyên đã nhập, mỗi số cách nhau khoảng trắng
Dòng thứ 2 là số lượng các số nguyên lẻ 
Dòng thứ 3 là các số nguyên lẻ đã nhập
*/

#include <stdio.h>
int main(){
	int n, i;
	scanf("%d",&n);
	int a[n];
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int count=0, odd[n], j=0;
	for (i=0;i<n;i++){
		printf("%d ",a[i]);
		if (a[i]%2!=0){
			count++;
			odd[j]=a[i];
			j++;
		}
	}
	printf("\n%d\n",count);
	for (i=0;i<count;i++){
		printf("%d ",odd[i]);
	}
	return 0;
}
