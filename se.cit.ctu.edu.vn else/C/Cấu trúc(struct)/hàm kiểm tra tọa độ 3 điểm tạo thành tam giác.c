/*==========================================================
Cho cấu trúc Point có khai báo

struct Point{
   double X,Y;
};
Viết hàm kiểm tra tọa độ của 3 điểm A,B,C đầu vào có tạo thành 1 tam giác hay không?

Điều kiện tạo thành tam giác là độ dài tổng 2 cạnh bất kỳ phải lớn hơn độ dài cạnh còn lại

Khuôn dạng (Prototype)

Tên hàm (function name): isTriangle
Tham số (parameters): 
        - A: struct Point

        - B: struct Point  

        - C: struct Point

Kiểu trả về (return type): int
Thân hàm (Body)

Nếu 3 điểm có thể tạo thành tam giác, kết quả là 1, ngược lại kết quả là 0
==========================================================*/

#include <math.h>
double distance(struct Point A, struct Point B){
	return (double)sqrt(pow(A.X-B.X,2)+pow(A.Y-B.Y,2));
}
int isTriangle(struct Point A, struct Point B, struct Point C){
	int a=distance(A,B);
	int b=distance(B,C);
	int c=distance(C,A);
	if ((a+b>c && b+c>a)&& c+a>b) return 1;
	return 0;
}

//tính khoảng cách trước qua các biến a, b, c