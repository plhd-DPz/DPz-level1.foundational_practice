/*==========================================================
Cho cấu trúc Point có khai báo

struct Point{
   double X,Y;
};
Viết hàm tính khoảng cách giữa 2 điểm trong không gian 2 chiều.




Khuôn dạng (Prototype)

Tên hàm (function name): distance
Tham số (parameters): 
        - A: struct Point

        - B: struct Point  

Kiểu trả về (return type): double
Thân hàm (Body)

Tính và trả về khoảng cách giữa 2 điểm A(x1, y1) và B(x2,y2) theo công thức
==========================================================*/

#include <math.h>
double distance(struct Point A, struct Point B){
	return (double)sqrt(pow(A.X-B.X,2)+pow(A.Y-B.Y,2));
}

//x1 là A.X, trừ x2 là B.X, tương tự với Y