/*==========================================================
Cho cấu trúc để lưu trữ phân số như sau:

struct PhanSo {

    int TuSo,MauSo;

};

Viết hàm cộng 2 phân số A và B

Nguyên mẫu

Tên hàm: cong()
Tham số: 
        - A: PhanSo

        - B: PhanSo

        - pC: con trỏ PhanSo

Kiểu trả về: không
==========================================================*/

#include <stdio.h>
void chuanhoa(struct PhanSo *a){
	int i, gcd=1;
	for (i=1;i<=(a->TuSo<a->MauSo?a->MauSo:a->TuSo);i++){
		if (a->TuSo%i==0 && a->MauSo%i==0){
			gcd=i;
		}
	}
	a->TuSo/=gcd;
	a->MauSo/=gcd;
	return;
}
void cong(struct PhanSo a, struct PhanSo b, struct PhanSo *c){
	if (a.MauSo<0){
		a.TuSo=-a.TuSo;
		a.MauSo=-a.MauSo;
	}
	if (b.MauSo<0){
		b.TuSo=-b.TuSo;
		b.MauSo=-b.MauSo;
	}
	int quydong=a.MauSo;
	if (a.MauSo!=b.MauSo){
		quydong=(a.MauSo<b.MauSo?a.MauSo:b.MauSo);
		while (1){
			if (quydong%a.MauSo==0 && quydong%b.MauSo==0){
				break;
			}
			quydong++;
		}
	}
	a.TuSo*=quydong/a.MauSo;
	b.TuSo*=quydong/b.MauSo;
	c->TuSo=a.TuSo+b.TuSo;
	c->MauSo=quydong;
	chuanhoa(c);
	return;
}

//lưu ý: con trỏ struct phải truy cập bằng ->, không phải *.