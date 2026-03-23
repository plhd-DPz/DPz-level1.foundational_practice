/*
Tam giác Pascal là một bảng số, trong đó dòng thứ 0 bằng 1, mỗi một số hạng của dòng thứ n+1 là một tổ hợp chập k của n, trong đó  được tính bằng đệ quy hoặc theo công thức:
.
Viết chương trình hiển thị tam giác Pascal có n+1 dòng với n được đọc từ bàn phím.
Ví dụ
Nhập vào:
6
In ra:
    1
    1    1
    1    2    1
    1    3    3    1
    1    4    6    4    1
    1    5   10   10    5    1
    1    6   15   20   15    6    1
Đầu vào
•	Một số nguyên n ().
Đầu ra
•	Hiển thị tam giác Pascal như trên

Ghi chú
•	Dữ liệu đầu vào là hợp lệ.
•	Bạn không cần dùng printf trước scanf.
•	Xem ví dụ trong phần For Example để biết chi tiết về đầu vào/đầu ra.

Gợi ý: 
•	Chừa 5 chỗ để in các số.
*/

#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int i, j, c;
	for (i=0; i<=n;i++){
		for (j=0;j<=i;j++){
			if (j==0 || j==i) c=1;
			else c=c*(i-j+1)/j; //công thức tính số tiếp theo
			printf("%5d", c);
		}
		printf("\n");
	}
	return 0;
}
