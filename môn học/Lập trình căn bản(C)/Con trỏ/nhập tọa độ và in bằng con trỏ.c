/*==========================================================
Cho kiểu cấu trúc điểm trên tọa độ trong không gian 3 chiều  và biến con trỏ p đã được khai báo như sau:

typedef struct 
{int X, Y, Z; } Point3D;

Point3D *p;
Point3D M;
p=&M;
Hãy viết ĐỦ lệnh cần thiết làm các công việc sau:

Sử dụng p để nhập tọa độ cho điểm có tọa độ điểm M và in ra màn hình tọa độ điểm M vừa nhập (lưu ý không được dùng biến M).
==========================================================*/

scanf("%d%d%d",&p->X,&p->Y,&p->Z);
printf("Diem M co toa do X = %d, Y = %d va Z = %d",p->X,p->Y,p->Z);