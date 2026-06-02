/*==========================================================
Cho biến c có kiểu char được khai báo như sau:

char c = 'Z';
Hãy viết ĐỦ lệnh cần thiết làm các công việc sau:

Khai báo biến p và lưu địa chỉ của c vào p.
Khai báo biến q và cho q trỏ đến p.
==========================================================*/

char *p;
p=&c;
char **q;
q=&p;