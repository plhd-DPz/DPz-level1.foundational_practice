/*==========================================================
Cho con trỏ a được khai báo như sau:

int *a;


Và ở cuối chương trình có câu lệnh để giải phóng a:

free(a);

Hãy viết ĐỦ lệnh cần thiết làm các công việc sau:

Khai báo biến số nguyên n mang ý nghĩa là số lượng các số nguyên đã nhập
Nhập n từ bàn phím
Cấp phát 1 vùng nhớ n số nguyên, rồi cho a chỉ tới địa chỉ số nguyên đầu tiên được cấp phát
Nhập n số nguyên từ bàn phím
Hiển thị n số nguyên vừa nhập
==========================================================*/

int i, n;
scanf("%d", &n);
a=malloc(n*sizeof(int));
for (i = 0; i <n; i++)
    scanf("%d",&a[i]);
if (n==0){
	printf("Mang rong!");
	return 1;
}
for (i=0;i<n;i++){
	printf("%d ",*(a+i));
}