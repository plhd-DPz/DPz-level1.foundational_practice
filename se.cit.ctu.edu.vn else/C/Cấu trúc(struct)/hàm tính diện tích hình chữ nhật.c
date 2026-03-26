/*==========================================================
Khai báo đầy đủ để lưu hình chữ nhật Rect và viết hàm tính diện tích hình chữ nhật.

 

Khuôn dạng (Prototype)

Tên hàm (function name): area
Tham số (parameters): 
        - A: struct Rect

Kiểu trả về (return type): double
Thân hàm (Body)

Tính và trả về diện tích của hình chữ nhật
==========================================================*/

#include <math.h>
struct Point{
	double X, Y;
};
struct Rect{
	struct Point ur,ll;
};
double area(struct Rect A){
	return fabs((A.ur.X-A.ll.X)*(A.ur.Y-A.ll.Y));
}