/*==========================================================
Cho trước hàm main() để nhập từ bàn phím tọa độ 1 điểm (Point: gồm 2 thành phần x,y - mỗi thành phần là 1 số thực)  trong không gian 2 chiều và hiển thị tọa độ này lên màn hình như sau:

int main(){

   	struct Point a;

   	a = readPoint(); // Gọi hàm nhập 1 điểm từ bàn phím

   	printPoint(a); // Hiển thị điểm a lên màn hình

       return 0;

}



Viết khai báo cho cấu trúc Point, hàm nhập điểm và hàm hiển thị điểm để hàm main() như trên có thể thực thi được.



Nguyên mẫu (Prototype)

Tên hàm: readPoint()
Tham số: không
Kiểu trả về: Point
Thân hàm (Body)

Khai báo 1 biến cấu trúc Point, nhập từng trường của biến và trả về kết quả của biến cho hàm



Nguyên mẫu (Prototype)

Tên hàm: printPoint()
Tham số: a - kiểu Point
Kiểu trả về: không
Thân hàm (Body)

Hiển thị từng trường của biến cấu trúc a.
==========================================================*/

struct Point{
	double x, y;
};
struct Point readPoint(){
    struct Point a;
	scanf("%lf%lf",&a.x, &a.y);
	return a;
}
void printPoint(struct Point a){
	printf("(%.3lf, %.3lf)", a.x, a.y);
	return;
}