/*==========================================================
Viết 1 hàm cho phép đảo ngược sự xuất hiện của n số nguyên (0 < n <= 1000).



Khuôn dạng (Prototype)

Tên hàm (function name): makeReverse()
Tham số (parameters):
A[] - kiểu int
n - kiểu int
Kiểu trả về (return type): void
Thân hàm (Body)

Tiến hành đảo ngược các phần tử trong mảng A
==========================================================*/

void makeReverse(int a[], int n){
	for (int l=0,r=n-1;l<r;l++,r--){
		int temp=a[l];
		a[l]=a[r];
		a[r]=temp;
	}
	return;
}