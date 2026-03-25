/*==========================================================
Viết 1 hàm cho phép kiểm tra xem mảng A gồm n số nguyên có biểu diễn 1 cấp số nhân công bội k, với phần tử đầu tiên là 1.

Ví dụ: 

   - Cấp số nhân công bội 2, phần tử đầu tiên là 1: 1  2  4  8  16  32 ...

   - Cấp số nhân công bội 5, phần tử đầu tiên là 1: 1  5  25  125   625 ...

Khuôn dạng (Prototype)

Tên hàm (function name): isSeries()
Tham số (parameters):
k - kiểu int (1 <k <= 6)
A[] - kiểu int
n - kiểu int (1<n<=10)
Kiểu trả về (return type): int
Thân hàm (Body)

Kết quả là 1 nếu A biểu diễn cấp số nhân công bội k với phần tử đầu tiên là 1; ngược lại kết quả là 0
==========================================================*/

int isSeries(int k, int a[], int n){
	int i, mul=1;
	for (i=0;i<n;i++){
		if (a[i]!=mul) return 0;
		mul*=k;
	}
	return 1;
}