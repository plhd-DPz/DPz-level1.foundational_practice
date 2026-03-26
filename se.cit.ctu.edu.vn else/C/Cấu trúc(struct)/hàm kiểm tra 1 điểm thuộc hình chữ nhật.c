/*==========================================================
Viết khai báo điểm, khai báo hình chữ nhật với cách lưu trữ là 2 điểm đầu mút của đường chéo.

Viết hàm kiểm tra một điểm có thuộc 1 hình chữ nhật cho trước hay không?



Khuôn dạng (Prototype)

Tên hàm (function name): isIn
Tham số (parameters): 
           - M: struct Point

           - r: struct Rect

Kiểu trả về (return type): int
Thân hàm (Body)

Nếu M nằm trong hình chữ nhật r, kết quả của hàm là 1, ngược lại kết quả là 0.
==========================================================*/

struct Point{
	double X, Y;
};
struct Rect{
	struct Point lr, ul;
};
int isIn(struct Point M, struct Rect r){
	if ((r.ul.X<=M.X && r.lr.X>=M.X) && (r.ul.Y>=M.Y && r.lr.Y<=M.Y)) return 1;
	return 0;
}


//xem cách đề truyền số vào struct để chọn điểm