/*==========================================================
Cho đoạn chương trình thao tác với biến cấu trúc phân số (struct PhanSo) mô tả  1 phân số như sau:

struct PhanSo a;
scanf("%d%d",&a.TuSo,&a.MauSo); // Nhap tu ban phim cho tung truong
printf(" %d/%d)",a.TuSo, a.MauSo); //Hien thi 
Hãy viết khai báo cho cấu trúc phân số (struct PhanSo) để tạo thành 1 chương trình có thể thực thi được.
==========================================================*/

struct PhanSo{
    int TuSo, MauSo;
};