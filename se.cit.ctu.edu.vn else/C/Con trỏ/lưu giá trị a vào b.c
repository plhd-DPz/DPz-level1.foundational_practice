/*==========================================================
Cho biến a có kiểu int và một con trỏ p được khai báo như sau:

void *p;
int a = 5, b = 2;
p = &a;
Hãy viết ĐỦ lệnh cần thiết làm các công việc sau:

Lấy giá trị của a lưu vào b.
==========================================================*/

b=*(int*)p;

//p là con trỏ kiểu void* nên phải ép kiểu về int* mới được