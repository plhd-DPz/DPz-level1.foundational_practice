/*==========================================================
Viết 2 hàm, hàm thứ nhất cho phép chép các số nguyên lẻ của 1 mảng sang mảng thứ 2 còn hàm thứ hai cho phép hiển thị một mảng 1 chiều gồm n số nguyên

Khuôn dạng (Prototype)

Tên hàm (function name) 1: copyOddNumbers()
Tham số (parameters) của hàm 1:
A[] - kiểu int, mảng nguồn
N - kiểu int, số phần tử của mảng nguồn A
B[] - kiểu int, mảng kết quả
pM - con trỏ kiểu int, con trỏ chỉ đến số phần tử của mảng kết quả
Kiểu trả về (return type): không




Tên hàm (function name) 2: printList()
Tham số (parameters) của hàm 2:
A[] - kiểu int
N - kiểu int, số phần tử của mảng A
Kiểu trả về (return type): không
Thân hàm (Body)

Hàm copyOddNumbers(): Đưa các số lẻ trong A vào mảng B, pM chỉ đến địa chỉ của số phần tử của B
Hàm printList(): hiển thị các số trong mảng lên màn hình
==========================================================*/

void copyOddNumbers(int a[], int n, int b[], int *pm){
	int i, j=0;
	for (i=0;i<n;i++){
		if (a[i]%2!=0){
			b[j]=a[i];
			j++;
		}
	}
	*pm=j;  //j là số phần tử
	return;
}
void printList(int a[], int n){
	int i;
	for (i=0;i<n;i++){
		printf("%d ", a[i]);
	}
	printf("\n");
	return;
}