/*==========================================================
Viết 1 hàm cho phép tìm kiếm vị trí xuất hiện đầu tiên của 1 phần tử trong n số nguyên đầu vào, biết số nguyên đầu tiên có vị trí là 0 . Nếu tìm không thấy thì n được trả về.

Khuôn dạng (Prototype)

Tên hàm (function name): locate()
Tham số (parameters):
x - kiểu int
A[] - kiểu int
n - kiểu int (0 < n <= 1000)
Kiểu trả về (return type): int
Thân hàm (Body)

Tiến hành tìm kiếm x trong mảng A, nếu có thì vị trí đầu tiên tìm thấy x được trả về, nếu không thì giá trị n được trả về.
==========================================================*/

int locate(int x, int a[], int n){
	int i;
	for (i=0;i<n;i++){
		if (a[i]==x) return i;
	}
	return n;
}