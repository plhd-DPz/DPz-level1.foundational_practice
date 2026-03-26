/*==========================================================
Viết chương trình cho phép liệt kê tam giác Pascal có n dòng, với n là giá trị nhập từ bàn phím.

Đầu vào

Số nguyên n ( 0 < n <= 40)
Đầu ra

Hiển thị các dòng của tam giác Pascal lên màn hình
==========================================================*/

#include <stdio.h>
int main(){
	int n,i,j;
	scanf("%d",&n);
	long long a[n][n];
	for (i=0;i<n;i++){
		for (j=0;j<=i;j++){
			if (j==0 || j==i) a[i][j]=1;
			else a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
	}
	for (i=0;i<n;i++){
		for (j=0;j<=i;j++){
			printf("%lld ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}

//lưu ý: gọi long long a[n][n], đừng gọi int, vì nếu n=40 thì a rất lớn