/*==========================================================
Viết 1 hàm cho phép kiểm tra 1 n số nguyên đầu vào (0 < n <= 1000) có các phần tử đối xứng nhau hay không?

Khuôn dạng (Prototype)

Tên hàm (function name): isPalindrome()
Tham số (parameters):
A[] - kiểu int
n - kiểu int
Kiểu trả về (return type): int
Thân hàm (Body)

Nếu mảng A đối xứng, kết quả của hàm là 1, ngược lại kết quả là 0
==========================================================*/

int isPalindrome(int a[],int n){
	int l,r;
	for (l=0,r=n-1;l<r;l++,r--){
		if (a[l]!=a[r]) return 0;
	}
	return 1;
}