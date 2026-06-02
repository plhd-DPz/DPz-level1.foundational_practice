/*==========================================================
Viết 1 hàm cho phép kiểm tra tính giá trị trung bình của một mảng gồm n số nguyên (0 < n <= 1000).



Khuôn dạng (Prototype)

Tên hàm (function name): getAVG()
Tham số (parameters):
A[] - kiểu int
n - kiểu int
Kiểu trả về (return type): float
Thân hàm (Body)

Tính trung bình cộng các giá trị trong mảng A và trả về giá trị trung bình cộng này
==========================================================*/

float getAVG(int a[], int n){
	int i, sum=0;
	for (i=0;i<n;i++){
		sum+=a[i];
	}
	return (float)sum/n;
}