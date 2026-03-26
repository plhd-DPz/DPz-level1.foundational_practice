/*==========================================================
Viết khai báo và viết hàm nhân 2 phân số A và B, hàm in phân số ra màn hình

Nguyên mẫu

Tên hàm: nhan()
Tham số: 
        - A: PhanSo

        - B: PhanSo

        - pC: con trỏ PhanSo

Kiểu trả về: không
Thân hàm (Body)

Tính phân số tích của A và B, chuẩn hóa phân số tích này và cho nội dung con trỏ pC chính là phân số tích


Hàm inPhanSotrứng

Tham số cho hàm: phân số A

Kiểu trả về: void
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
void nhan(struct PhanSo a, struct PhanSo b,struct PhanSo *pC){
	pC->TuSo=(a.TuSo)*(b.TuSo);
	pC->MauSo=(a.MauSo)*(b.MauSo);
	chuanhoa(pC);
	return;
}
//lưu ý: pC đã là con trỏ rồi nên gọi chuanhoa thì chỉ cần pC 
                                         //chứ không dùng &pC
void inPhanSo(struct PhanSo a){
	printf("%d/%d\n",a.TuSo,a.MauSo);
	return;
}