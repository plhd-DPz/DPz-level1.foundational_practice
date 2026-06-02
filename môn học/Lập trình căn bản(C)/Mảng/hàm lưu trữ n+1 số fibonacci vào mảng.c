/*==========================================================
iết 1 hàm cho phép lưu trữ n+1 số hạng đầu tiên của dãy Fibonaci vào một mảng A. 



Khuôn dạng (Prototype)

Tên hàm (function name): getFibo()
Tham số (parameters):
A[] - kiểu int
n - kiểu int  (0 < n <= 40) 
Kiểu trả về (return type): void
Thân hàm (Body)

Lưu trữ n+1 số hạng đầu tiên của dãy Fibonaci vào mảng A
==========================================================*/

void getFibo(int a[], int n){
	int i, f0=1, f1=1, next;
	a[0]=f0;
	for (i=1;i<=n;i++){
		a[i]=f1;
		next=f0+f1;
		f0=f1;
		f1=next;
	}
}