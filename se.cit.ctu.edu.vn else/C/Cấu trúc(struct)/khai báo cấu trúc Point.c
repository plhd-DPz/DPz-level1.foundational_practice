/*==========================================================
Cho đoạn chương trình thao tác với biến cấu trúc Point mô tả 1 điểm trong không gian 2 chiều như sau:

struct Point a;
scanf("%lf%lf",&a.x,&a.y); // Nhap tu ban phim cho tung truong
printf("(%.3lf, %.3lf)",a.x,a.y); //Hien thi 
Hãy viết khai báo cho cấu trúc point(struct Point) để tạo thành 1 chương trình có thể thực thi được.
==========================================================*/

struct Point{
    double x, y;
};

//nhớ dấu ;