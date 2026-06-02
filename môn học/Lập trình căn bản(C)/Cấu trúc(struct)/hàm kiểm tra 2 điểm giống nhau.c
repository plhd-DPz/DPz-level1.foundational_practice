/*==========================================================
Cho cấu trúc Point có khai báo

struct Point{
   double X,Y;
};
Viết hàm kiểm tra 2 điểm A, B có giống nhau không?

Với các số thực, không nhất thiết kiểm tra các tọa độ X,Y của các điểm A,B chính xác là giống nhau; thay vào đó ta kiểm tra khoảng cách của chúng có nhỏ hơn một sai số Epsilon rất nhỏ cho trước hay không (chẳng hạn Epsilon=0.0000001) 

Khuôn dạng (Prototype)

Tên hàm (function name): equal
Tham số (parameters): 
        - A: struct Point

        - B: struct Point  

        - Epsilon: double

Kiểu trả về (return type): int
Thân hàm (Body)

Nếu 2 điểm giống nhau, kết quả là 1, ngược lại kết quả là 0
==========================================================*/

#include <math.h>
int equal(struct Point A, struct Point B, double epsilon){
	double distance=(double)sqrt(pow(A.X-B.X,2)+pow(A.Y-B.Y,2));
	if (distance<epsilon) return 1;
	return 0;
}