/*
Viết các hàm cho phép nhập và hiển thị mảng 1 chiều A gồm n số nguyên,

Khuôn dạng (Prototype)

Tên hàm (function name): readList() và printList()
Tham số (parameters):
A[] - kiểu int
n - kiểu int  (
) 
Kiểu trả về (return type): void
Thân hàm (Body)

readList(A,n): Nhập từng phần tử A[i] của mảng. Lưu ý n là tham số được truyền vào, không nhập từ bàn phím giá trị n trong hàm 
printList(A,n): Hiển thị các giá trị của mảng A, mỗi giá trị cách nhau khoảng trắng; ký tự xuống dòng là kết thúc việc in các giá trị này.
*/

void readList(int a[], int n){
    for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}
void printList(int a[], int n){
    for (int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}

//printList cần in \n sau khi kết thúc
