/*==========================================================
Viết 1 hàm cho phép chèn x vào vị trí p trong mảng gồm n số nguyên.

Khuôn dạng (Prototype)

Tên hàm (function name): Insert()
Tham số (parameters):
x - kiểu int
p - kiểu int
A[] - kiểu int,
pn - con trỏ kiểu int, số phần tử của mảng
Kiểu trả về (return type): không
Thân hàm (Body)

Chèn x vào vị trí p trong mảng n số nguyên
==========================================================*/

void Insert(int x, int p, int a[], int *pn){
    int i;
    for (i=*pn-1;i>=p;i--){  //*pn-1 là kích thước mảng đã dùng
        a[i+1]=a[i];         //i+1 sẽ đẩy phần tử cuối của mảng sang ô tiếp theo
    }
    a[p]=x;
    (*pn)++;                  //tăng kích thước mảng lên 1 để lấy số cuối
}