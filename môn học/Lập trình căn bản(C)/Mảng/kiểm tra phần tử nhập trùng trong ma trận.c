/*==========================================================
Viết chương trình nhập vào một ma trận (mảng hai chiều) các số nguyên, gồm m dòng, n cột. 
In ma trận đó lên màn hình.

Nhập một số nguyên khác vào và xét xem có phần tử nào của ma trận trùng với số này không ? 
Ở vị trí nào ? Có bao nhiêu phần tử ?
Đầu vào

Dòng đầu tiên là 2 số m và n cách nhau khoảng trắng,  m: số dòng, n: số cột (0 < m, n <= 50).
m dòng kế tiếp, mỗi dòng  chứa n số, cách nhau khoảng trắng
Dòng cuối cùng là 1 số nguyên x cần định vị trí
Đầu ra

Hiển thị ma trận lên màn hình
Dòng kế tiếp là các cặp (i, j) ở đó tìm thấy x trong ma trận, mỗi cặp cách nhau khoảng trắng
Dòng cuối cùng ghi số lượng các phần tử x trong ma trận
==========================================================*/

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
	int x, count=0, vt[m][n];
	scanf("%d",&x);
	for (i=0;i<m;i++){
		for (j=0;j<n;j++){
			printf("%d ",a[i][j]);
			if (a[i][j]==x){
				vt[count][0]=i;
				vt[count][1]=j;
				count++;
			}
		}
		printf("\n");
	}
	for (i=0;i<count;i++){
		printf("(%d, %d) ", vt[i][0],vt[i][1]);
	}
	if (count>0) printf("\n");
	printf("%d\n", count);
	return 0;
}