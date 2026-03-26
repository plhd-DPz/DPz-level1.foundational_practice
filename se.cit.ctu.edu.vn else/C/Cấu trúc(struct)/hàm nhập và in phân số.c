/*==========================================================
Cho trước khai báo phân số và hàm main() để nhập từ bàn phím 1 phân số (struct PhanSo: gồm 2 thành phần TuSo, MauSo - mỗi thành phần là 1 số nguyên) hiển thị phân số này lên màn hình như sau:

struct PhanSo {

    int TuSo, MauSo;

};

int main(){

    struct PhanSo a;

    a = nhapPhanSo(); // Gọi hàm nhập 1 phân số

    inPhanSo(a); // Hiển thị phân số

       return 0;

}

Viết hàm nhập  và hàm hiển thị phân số để hàm main() như trên có thể thực thi được.

Nguyên mẫu (Prototype)

Tên hàm: nhapPhanSo()
Tham số: không
kiểu trả về: PhanSo
Thân hàm (Body)

Khai báo 1 biến cấu trúc PhanSo, nhập từng trường của biến và trả về kết quả của biến cho hàm
Nguyên mẫu (Prototype)

Tên hàm: inPhanSo()
Tham số: a - kiểu PhanSo
Kiểu trả về: không
Thân hàm (Body)

Hiển thị từng trường của biến cấu trúc a.
==========================================================*/

struct PhanSo nhapPhanSo(){
	struct PhanSo a;
	scanf("%d%d",&a.TuSo, &a.MauSo);
	return a;
}
void inPhanSo(struct PhanSo a){
	printf("%d/%d",a.TuSo,a.MauSo);
	return;
}