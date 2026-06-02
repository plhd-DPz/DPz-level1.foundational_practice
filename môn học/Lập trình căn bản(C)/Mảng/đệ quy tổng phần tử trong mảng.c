/*==========================================================
Viết hàm đệ quy sumArray để tính tổng các phần tử trong mảng.

Khuôn dạng (prototype)

Tên hàm: sumArray
Tham số:
A: int[] - mảng các số nguyên
n: int - số phần tử của mảng
Kiểu trả về: int
Thân hàm:

Tính tổng các phần tử của mảng A
==========================================================*/

int sumArray(int a[], int n){
	if (n==0) return 0;
	return sumArray(a, n-1)+a[n-1];
}