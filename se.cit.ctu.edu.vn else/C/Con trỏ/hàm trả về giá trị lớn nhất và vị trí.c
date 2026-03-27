/*==========================================================
Viết 1 hàm cho phép trả về giá trị lớn nhất và vị trí của số lớn nhất trong mảng A có n số thực.



Khuôn dạng (Prototype)

Tên hàm (function name): getMax()
Tham số (parameters):
A[] - kiểu float,
N - kiểu int, số phần tử của mảng
pMaxValue - con trỏ kiểu float
pMaxPos - con trỏ kiểu int
Kiểu trả về (return type): không
Thân hàm (Body)

Tìm giá trị lớn nhất và vị trí của giá trị này trong mảng A
==========================================================*/

void getMax(float a[], int n, float *pmaxvalue, int *pmaxpos){
    int i;
    *pmaxvalue=a[0];
    *pmaxpos=0;
    for (i=1;i<n;i++){
        if (a[i]>*pmaxvalue){
            *pmaxvalue=a[i];
            *pmaxpos=i;
        }
    }
    return;
}