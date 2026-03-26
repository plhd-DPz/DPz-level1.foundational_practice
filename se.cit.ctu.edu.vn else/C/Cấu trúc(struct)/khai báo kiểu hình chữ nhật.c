/*==========================================================
Định nghĩa kiểu hình chữ nhật Rect ở đó các cạnh song song với các trục tọa độ. Một hình chữ nhật có thể được biểu diễn bằng tọa độ điểm trên phải và dưới trái của kiểu Point.

Cho trước khai báo Point như sau:

struct Point{
    double X,Y;    
};

Gợi ý: Định nghĩa kiểu Rect với 2 thành viên là điểm trên phải và điểm dưới trái
==========================================================*/

struct Rect{
	struct Point ur,ll;
};