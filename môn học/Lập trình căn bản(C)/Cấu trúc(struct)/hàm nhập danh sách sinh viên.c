/*==========================================================
Cho trước khai báo cấu trúc sinh viên như sau:

   typedef struct{</p> <p><span style="white-space: pre;"> </span>  char  * HoTen;</p> <p><span style="white-space: pre;"> </span>  float LT, TH;</p> <p><span style="white-space: pre;"> </span>  char *DiemChu;</p> <p>    } SinhVien;

Viết hàm nhập 1 danh sách n sinh viên và hàm hiển thị danh sách này lên màn hình với danh sách sinh viên dùng như con trỏ

Nguyên mẫu (Prototype)

Tên hàm: nhapDS()
Tham số: 
        -  SinhVien *pL: con trỏ chỉ đến sinh viên (Mảng với mỗi phần tử là kiểu  cấu trúc SinhVien)

        - n: số lượng sinh viên trong danh sách

Kiểu trả về: không
Thân hàm (Body)

Nhập dữ liệu cho từng sinh viên. (Chú ý họ tên và Điểm chữ là kiểu char * )

Nguyên mẫu (Prototype)

Tên hàm: inDS()
Tham số: 
           - L - con trỏ kiểu SinhVien

           - n: - int: số sinh viên

Kiểu trả về: không
Thân hàm (Body)

Hiển thị thông tin từng sinh viên theo khuôn mẫu như ví dụ
==========================================================*/

#include <string.h>
void nhapDS(SinhVien *pl, int n){
	int i;
	for (i=0;i<n;i++){
		pl[i].HoTen=malloc(100); //cấp phát thừa vùng nhớ, sửa lại sau(hoặc để như này vẫn chạy)
		fgets(pl[i].HoTen,100,stdin);
		int len=strlen(pl[i].HoTen);
		if (pl[i].HoTen[len-1]=='\n')
			pl[i].HoTen[len-1]='\0';
		scanf("%f%f",&pl[i].LT,&pl[i].TH);
		getchar();
		float tong=pl[i].LT+pl[i].TH;
		if (tong>=9) pl[i].DiemChu=strdup("A");  //diemchu là con trỏ->phải cấp phát
		else if (tong>=8) pl[i].DiemChu=strdup("B+");
		else if (tong>=7) pl[i].DiemChu=strdup("B");
		else if (tong>=6) pl[i].DiemChu=strdup("C+");
		else if (tong>=5) pl[i].DiemChu=strdup("C");
		else if (tong>=4.5) pl[i].DiemChu=strdup("D+");
		else if (tong>=4) pl[i].DiemChu=strdup("D");
		else pl[i].DiemChu=strdup("F");
	}
	return;
}
void inDS(SinhVien *l, int n){
	int i;
	for (i=0;i<n;i++){
		printf("%s %.3f %.3f %s\n", l[i].HoTen,l[i].LT, l[i].TH, l[i].DiemChu);
	}
	return;
}