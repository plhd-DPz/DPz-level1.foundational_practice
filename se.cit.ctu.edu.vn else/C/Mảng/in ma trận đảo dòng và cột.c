/*
Viết chương trình nhập một ma trận từ bàn phím và in ma trận theo thứ tự dòng thành cột và cột thành dòng.

Input

Dòng đầu tiên chứa hai số nguyên m và n là số dòng và số cột (0 < m, n <= 50).
m dòng kế tiếp chứa n số nguyên cách nhau bởi một khoảng trắng.
Output

Hiển thị ma trận theo n dòng và m cột.
*/

#include <stdio.h>
int main(){
	int m, n, i, j;
	scanf("%d%d",&m,&n);
	int a[m][n];
	for (i=0;i<m;i++){
		for (j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for (j=0;j<n;j++){
		for (i=0;i<m;i++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
