/*==========================================================
Viết 1 hàm cho phép xóa phần tử ở vị trí p trong mảng gồm n số nguyên.

Khuôn dạng (Prototype)

Tên hàm (function name): Delete()
Tham số (parameters):
p - kiểu int
A[] - kiểu int,
pn - con trỏ kiểu int, số phần tử của mảng
Kiểu trả về (return type): không
Thân hàm (Body)

Xóa phần tử ở vị trí p trong mảng
==========================================================*/

void Delete(int p, int a[], int *pn){
    int i;
    for (i=p;i<*pn;i++){
        a[i]=a[i+1];
    }
    (*pn)--;
    return;
}