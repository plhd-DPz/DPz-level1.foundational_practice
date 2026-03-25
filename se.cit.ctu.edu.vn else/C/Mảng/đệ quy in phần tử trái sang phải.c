/*==========================================================
Viết hàm đệ quy printArray để in các phần tử của một mảng

Khuôn dạng (prototype)

Tên hàm: printArray
Tham số:
A: int[] - mảng các số nguyên
n: int - số phần tử của mảng
Kiểu trả về: void
Thân hàm:

In các phần tử của A theo thứ tự từ trái sang phải, mỗi phần tử trên một dòng
==========================================================*/

void printArray(int a[], int n){
	if (n==0) return;
	printArray(a,n-1);
	printf("%d\n",a[n-1]);
}