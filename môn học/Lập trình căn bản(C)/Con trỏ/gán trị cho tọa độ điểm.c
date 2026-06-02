/*==========================================================
Cho kiểu cấu trúc điểm trên tọa độ phẳng vaf biến con trỏ p đã được khai báo như sau:

typedef struct 
{int X,Y;} Point;

Point *p;
Hãy viết ĐỦ lệnh cần thiết làm các công việc sau:

Sử dụng p để gán trị cho điểm có tọa độ điểm {10, 20}
==========================================================*/

p=malloc(sizeof(Point));
p->X=10;
p->Y=20;


//con trỏ chưa có giá trị->phải malloc để truyền giá trị