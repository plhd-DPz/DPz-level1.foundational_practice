/*==========================================================
Viết hàm đệ quy  readArray để đọc các số nguyên và lưu nó vào trong một mảng

Khuôn dạng (prototype)

Tên hàm: readArray
Tham số:
A: int[] - mảng dùng để lưu các số nguyên
n: int - số phần tử cần đọc
Kiểu trả về: void
Thân hàm:

Lần lượt đọc n số và lưu nó vào mảng A
==========================================================*/

void readArray(int a[], int n){
	if (n==0) return;
	readArray(a,n-1);
	scanf("%d",&a[n-1]);
}