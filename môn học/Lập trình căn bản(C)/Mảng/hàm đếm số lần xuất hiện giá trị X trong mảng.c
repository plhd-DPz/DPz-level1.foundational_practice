/*==========================================================
Viết 1 hàm cho phép đếm số lần xuất hiện của giá trị X trong mảng số nguyên A gồm n phần tử.

Khuôn dạng (Prototype)

Tên hàm (function name): countX()
Tham số (parameters):
x - kiểu int
A[] - kiểu int
n - kiểu int (0<=n<=1000)
Kiểu trả về (return type): int
Thân hàm (Body)

Tiến hành duyệt qua mảng A, mỗi lần gặp một giá trị x thì tăng biến đếm lên; cuối cùng biến đếm là kết quả trả về của hàm.
==========================================================*/

int countX(int x,int a[], int n){
	int i, count=0;
	for (i=0;i<n;i++){
		if (a[i]==x){
			count++;
		}
	}
	return count;
}
