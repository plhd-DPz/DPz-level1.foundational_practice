/*==========================================================
Cho trước hàm main() để nhập từ bàn phím các thông tin của 1 sinh viên (họ tên, điểm lý thuyết, điểm thực hành); tính điểm chữ tương ứng và  hiển thị các giá trị này lên màn hình

Biết điểm chữ tính theo bảng sau:(hình)

int main(){

    SinhVien a;

    a = nhapSV(); // Gọi hàm nhập 1 sinh viên

    inSV(a); // Hiển thị thông tin sinh viên lên màn hình

       return 0;

}

Viết khai báo cho cấu trúc sinh viên, hàm nhập sinh viên và hàm hiển thị sinh viên để hàm main() như trên có thể thực thi được. Cách tính điểm chữ có thể đặt trong hàm nhập sinh viên.

Nguyên mẫu (Prototype)

Tên hàm: nhapSV()
Tham số: không
Kiểu trả về: SinhVien
Thân hàm (Body)

Khai báo 1 biến cấu trúc SinhVien, nhập từng trường của biến (họ tên, điểm lý thuyết, điểm thực hành); tính điểm chữ theo bảng trên và trả về kết quả của biến cho hàm

Nguyên mẫu (Prototype)

Tên hàm: inSV()
Tham số: a - kiểu SinhVien
Kiểu trả về: không
Thân hàm (Body)

Hiển thị từng trường của biến cấu trúc a.
==========================================================*/

#include <string.h>
typedef struct{
	char hoten[100];
	float lt, th;
	char diemchu[3];
}SinhVien;
SinhVien nhapSV(){
	SinhVien sv;
	fgets(sv.hoten,100,stdin);
	int len=strlen(sv.hoten);
	if (sv.hoten[len-1]=='\n')
		sv.hoten[len-1]='\0';
	scanf("%f%f",&sv.lt,&sv.th);
	float tong=sv.lt+sv.th;
	if (tong>=9) strcpy(sv.diemchu,"A");      //diemchu là chuỗi->phải dùng strcpy
	else if (tong>=8) strcpy(sv.diemchu,"B+");
	else if (tong>=7) strcpy(sv.diemchu,"B");
	else if (tong>=6) strcpy(sv.diemchu,"C+");
	else if (tong>=5) strcpy(sv.diemchu,"C");
	else if (tong>=4.5) strcpy(sv.diemchu,"D+");
	else if (tong>=4) strcpy(sv.diemchu,"D");
	else strcpy(sv.diemchu,"F");
	return sv;
}
void inSV(SinhVien a){
	printf("%s %.3f %.3f %s",a.hoten,a.lt,a.th,a.diemchu);  //đề in 3 chữ số thập phân
	return;
}