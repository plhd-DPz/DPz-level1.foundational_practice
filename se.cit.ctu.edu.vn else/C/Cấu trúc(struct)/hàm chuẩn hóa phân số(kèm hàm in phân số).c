/*==========================================================
Viết khai báo và hàm chuẩn hóa phân số, hàm in phân số ra màn hình. 

Gọi u là ước chung lớn nhất của tử số và mẫu số; tử số  và mẫu số của phân số được chuẩn hóa được tính bằng tử số và mẫu số cũ chia cho u.

Nguyên mẫu

Tên hàm: chuanhoa()
Tham số: pa - con trỏ Phân Số
Kiểu trả về: không
Thân hàm (Body)

Tính giá trị mới của tử số và mẫu số của phân số được chỉ bởi pa
Nguyên mẫu

Tên hàm: inPhanSo()
Tham số: pa - kiểu Phân Số
Kiểu trả về: không
Thân hàm (Body)

In phân số theo mẫu: Tử số/Mẫu số
==========================================================*/

struct PhanSo{
	int TuSo, MauSo;
};
int ucln(int a, int b){
	int r;
	while (b!=0){
		r=a%b;
		a=b;
		b=r;
	}
	return a;
}
void chuanhoa(struct PhanSo *pa){
	int u=ucln(pa->TuSo,pa->MauSo);
	pa->TuSo/=u;
	pa->MauSo/=u;
	return;
}
//nhớ là dùng con trỏ cấu trúc thì gọi -> chứ không dùng *.
void inPhanSo(struct PhanSo a){
	printf("%d/%d\n",a.TuSo,a.MauSo);  //nhớ in \n
	return;
}