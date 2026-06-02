/*==========================================================
Người ta cần quản lý thông tin sinh viên ở một môn học nào đó, mỗi sinh viên cần mô tả các thành viên sau: 

- Họ tên sinh viên: con trỏ ký tự

- Điểm thi lý thuyết, điểm thi thực hành (các điểm này thì 5 điểm là tối đa)

- Điểm chữ: con trỏ ký tự.

Điểm chữ tính theo điểm số theo công thức sau: (hình)

Cho đoạn chương trình thao tác với biến cấu trúc SinhVien như sau:

SinhVien sv;
char h[50];

fgets(h,50,stdin);
if (h[strlen(h)-1]=='\n')
       h[strlen(h)-1]='\0';
sv.HoTen = strdup(h);
scanf("%f%f",&sv.LT,&sv.TH);
printf("%s %.3f %.3f\n",sv.HoTen,sv.LT,sv.TH);
strcpy(sv.DiemChu, "A");

Hãy viết khai báo cho kiểu sinh viên (struct SinhVien) để tạo thành 1 chương trình có thể thực thi được.
==========================================================*/

typedef struct{
	char *HoTen;
	float LT, TH;
	char *DiemChu;
}SinhVien;